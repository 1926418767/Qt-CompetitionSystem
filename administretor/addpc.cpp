#include "administretor\addpc.h"
#include "ui_addpc.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
AddPC::AddPC(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPC)
{
    ui->setupUi(this);

    this->setWindowTitle("新建");

    QStringList items = {"可用", "不可用"};
    ui->statue->addItems(items);
    ui->statue->setCurrentText("可用");

    ui->add1->setFocusPolicy(Qt::NoFocus);
    ui->add2->setFocusPolicy(Qt::NoFocus);
    ui->back->setFocusPolicy(Qt::NoFocus);


    connect(ui->back,&QPushButton::clicked,this,[=](){       //返回上一步
        this->close();
    });

    connect(ui->add1,&QPushButton::clicked,this,[=](){       //新建机房
        if(ui->name1->text().isEmpty()){
            QMessageBox::information(this,"错误","机房编号不能为空！");
            return;
        }
        db.open();
        QSqlQuery query;
        query.prepare("insert into 机房(机房编号) values (?);");
        query.bindValue(0,ui->name1->text());
        if(query.exec()){
            QMessageBox::information(this,"成功","插入成功！");
        }
        else{
            QMessageBox::information(this,"错误","插入失败！");
        }
        db.close();
    });

    connect(ui->add2,&QPushButton::clicked,this,[=](){       //新建电脑
        if(ui->pc->text().isEmpty()||ui->ip->text().isEmpty()||ui->name2->text().isEmpty()){
            QMessageBox::information(this,"错误","输入不能为空！");
            return;
        }

        db.open();
        QSqlQuery query;
        query.prepare("INSERT INTO 比赛电脑 (设备编号, IP地址, 机房编号, 设备状态) VALUES (?,?,?,?);");
        query.bindValue(0,ui->pc->text());
        query.bindValue(1,ui->ip->text());
        query.bindValue(2,ui->name2->text());
        query.bindValue(3,ui->statue->currentText());
        if(query.exec()){
            QMessageBox::information(this,"成功","插入成功！");
        }
        else{
            QMessageBox::information(this,"错误","插入失败！");
        }
        db.close();
    });
}

AddPC::~AddPC()
{
    delete ui;
}
