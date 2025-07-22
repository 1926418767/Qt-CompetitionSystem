#include "administrator.h"
#include "ui_administrator.h"
#include <QPainter>
#include <QMessageBox>
#include <QSqlQuery>
#include "administretor/createevent.h"
#include "administretor/eventinfo.h"
#include "administretor/roominfo.h"
#include "administretor\addpc.h"
Administrator::Administrator(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::Administrator),
    name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("管理员端");

    ui->label->setText(ui->label->text()+name);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    // 设置窗体最大化和最小化
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;

    setWindowFlags(windowFlag);

    ui->create->setFocusPolicy(Qt::NoFocus);
    ui->info->setFocusPolicy(Qt::NoFocus);
    ui->createPC->setFocusPolicy(Qt::NoFocus);

    connect(ui->create,&QPushButton::clicked,this,[=](){         //新建赛事
        this->setEnabled(false);
        CreateEvent ce(this);
        ce.exec();
        this->setEnabled(true);
    });

    connect(ui->info,&QPushButton::clicked,this,[=](){         //赛事详细
        this->setEnabled(false);
        EventInfo ei(this);
        ei.exec();
        this->setEnabled(true);
    });

    connect(ui->pcInfo,&QPushButton::clicked,this,[=](){         //机房信息
        this->setEnabled(false);
        RoomInfo ri(this);
        ri.exec();
        this->setEnabled(true);
    });

    connect(ui->createPC,&QPushButton::clicked,this,[=](){      //新增机房\电脑
        this->setEnabled(false);
        AddPC a(this);
        a.exec();
        this->setEnabled(true);
    });
}


void Administrator::mousePressEvent(QMouseEvent *event)
{
    //检查鼠标事件的位置是否在限定的区域内
    if(ui->signOut->underMouse())       //退出登录
    {
        this->done(QDialog::Accepted);
        this->close();
    }
}

void Administrator::paintEvent(QPaintEvent* event)     //绘制窗口
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);  //设置无边框
    painter.setRenderHint(QPainter::Antialiasing, true);    //渲染

    QRect rect = contentsRect();
    int height = rect.height() / 6;

    // 给矩形绘制渐变背景
    QLinearGradient gradient(0, 0, width(), 0);
    gradient.setColorAt(0, QColor(54,168,244));
    gradient.setColorAt(0.418, QColor(54,168,244));
    gradient.setColorAt(1, Qt::white);

    painter.setBrush(gradient);
    painter.drawRect(rect.left(), rect.top(), rect.width(), height);


}

Administrator::~Administrator()
{
    delete ui;
}
