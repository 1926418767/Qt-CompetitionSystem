#include "stucenter.h"
#include "ui_stucenter.h"
#include "studentPage\infoteam.h"
#include "studentPage\createteam.h"
#include "studentPage\modifyteam.h"
#include "studentPage\enrollevent.h"
#include "studentPage\stuinfo.h"
#include <QPainter>
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
StuCenter::StuCenter(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::StuCenter)
    ,name(name)
    ,id(id)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    this->setWindowTitle("学生端");

    // 设置窗体最大化和最小化
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;

    setWindowFlags(windowFlag);

    ui->label->setText(ui->label->text()+name);

    connect(ui->create,&QPushButton::clicked,this,[=](){       //创建队伍
        db.open();
        QSqlQuery check;
        check.prepare("select COUNT(*) from 学生 where 学号 = ? and 所在队伍编号 is NULL;");
        check.bindValue(0,id);
        check.exec();
        if(check.first()&&check.value(0).toInt()==0){
            QMessageBox::information(this,"禁止创建","最多只能创建或加入一只队伍！");
            db.close();
            return;
        }
        db.close();
        this->setEnabled(false);
        CreateTeam c(this,name,id);
        c.exec();
        this->setEnabled(true);
    });
    connect(ui->info,&QPushButton::clicked,this,[=](){         //队伍信息
        this->setEnabled(false);
        InfoTeam info(this,name,id);
        info.exec();
        this->setEnabled(true);
    });
    connect(ui->modify,&QPushButton::clicked,this,[=](){       //修改队伍信息
        db.open();
        QSqlQuery check;
        check.prepare("select count(*) from 队伍 where 队长学号 = ?;");
        check.bindValue(0,id);
        check.exec();
        if(check.first()&&check.value(0).toInt()==0){
            QMessageBox::information(this,"错误","队长才能修改信息！");
            db.close();
            return;
        }
        db.close();
        this->setEnabled(false);
        ModifyTeam m(this,name,id);
        m.exec();
        this->setEnabled(true);
    });
    connect(ui->enroll,&QPushButton::clicked,this,[=](){       //报名赛事
        db.open();
        QSqlQuery query;
        query.prepare("select COUNT(*) from 队伍 where 队长学号=?;");//只有队长有权限报名
        query.bindValue(0,id);
        query.exec();
        if(query.first()&&query.value(0).toInt()==0){
            QMessageBox::information(this,"错误","队长才能进行报名！");
            db.close();
            return;
        }
        db.close();
        this->setEnabled(false);
        EnrollEvent ee(this,name,id);
        ee.exec();
        this->setEnabled(true);
    });

}

void StuCenter::mousePressEvent(QMouseEvent *event)
{
    //检查鼠标事件的位置是否在限定的区域内
    if(ui->personalCenter->underMouse())        //进入个人中心
    {
        this->setEnabled(false);
        stuInfo info(this,name,id);
        info.exec();
        this->setEnabled(true);
    }
    else if(ui->signOut->underMouse())       //退出登录
    {
        this->done(QDialog::Accepted);
        this->close();
    }
}

void StuCenter::paintEvent(QPaintEvent* event)     //绘制窗口
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

StuCenter::~StuCenter()
{
    delete ui;
}
