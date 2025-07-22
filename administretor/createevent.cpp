#include "createevent.h"
#include "ui_createevent.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
CreateEvent::CreateEvent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateEvent)
{
    ui->setupUi(this);
    ui->confirm->setFocusPolicy(Qt::NoFocus);
    ui->back->setFocusPolicy(Qt::NoFocus);

    this->setWindowTitle("创建赛事");


    QDateTime dateTime = QDateTime(QDate(2025,6,1),QTime(0,0,0));  // 或者你已有的 QDateTime 对象
    ui->begin->setDateTime(dateTime);
    ui->end->setDateTime(dateTime);

    QStringList items = {"未开始", "进行中", "已结束"};
    ui->statue->addItems(items);
    ui->statue->setCurrentText("未开始");
    connect(ui->confirm,&QPushButton::clicked,this,[=](){       //新建
        QDateTime begin = ui->begin->dateTime();
        QDateTime end = ui->end->dateTime();
        QString beginStr = begin.toString("yyyy-MM-dd HH:mm:ss");
        QString endStr = end.toString("yyyy-MM-dd HH:mm:ss");
        if(begin>=end){
            QMessageBox::information(this,"错误","开始时间不能早于结束时间！");
            return;
        }
        if(ui->name->text().isEmpty()){
            QMessageBox::information(this,"错误","赛事名称不能为空！");
            return;
        }
        if(ui->place->text().isEmpty()){
            QMessageBox::information(this,"错误","赛事地点不能为空！");
            return;
        }
        db.open();
        QSqlQuery query;
        query.prepare("select 开始时间,结束时间,赛事名称 from 竞赛;");
        query.exec();
        while(query.next()){
            QDateTime beginTmp = QDateTime::fromString(query.value(0).toString(), "yyyy-MM-dd hh:mm:ss");
            QDateTime endTmp = QDateTime::fromString(query.value(1).toString(), "yyyy-MM-dd hh:mm:ss");
            if(!(end<=beginTmp||begin>=endTmp)){
                QMessageBox::information(this,"创建失败",QString("和赛事 %1 时间冲突！").arg(query.value(2).toString()));
                db.close();
                return;
            }
        }
        query.prepare("insert into 竞赛(赛事名称,开始时间,结束时间,赛事地点,赛事状态) values (?,?,?,?,?);");
        query.bindValue(0,ui->name->text());
        query.bindValue(1,beginStr);
        query.bindValue(2,endStr);
        query.bindValue(3,ui->place->text());
        query.bindValue(4,ui->statue->currentText());
        query.exec();
        QMessageBox::information(this,"成功","插入成功！");
        db.close();
        this->close();
    });

    connect(ui->back,&QPushButton::clicked,this,[=](){       //返回上一步
        this->close();
    });
}

CreateEvent::~CreateEvent()
{
    delete ui;
}
