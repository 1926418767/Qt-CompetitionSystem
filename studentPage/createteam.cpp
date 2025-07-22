#include "studentPage\createteam.h"
#include "ui_createteam.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
CreateTeam::CreateTeam(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::CreateTeam),
    name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("创建队伍");

    ui->captainName->setText(name);

    ui->create->setFocusPolicy(Qt::NoFocus);
    ui->back->setFocusPolicy(Qt::NoFocus);

    connect(ui->create,&QPushButton::clicked,this,[=](){       //创建队伍
        if((id==ui->stu1id->text()&&!ui->stu1id->text().isEmpty())||(id==ui->stu2id->text()&&!ui->stu2id->text().isEmpty())||(ui->stu2id->text()==ui->stu1id->text()&& !ui->stu2id->text().isEmpty())){
            QMessageBox::information(this,"错误","学号重复！");
            return;
        }
        if(!(ui->teamName->text().isEmpty()||ui->teacherId->text().isEmpty())){
            db.open();
            //检查队员是否存在和是否已经加入了队伍
            QSqlQuery check;
            if(!ui->stu1id->text().isEmpty()){
                check.prepare("select COUNT(*) from 学生 where 学号 = ?;");
                check.bindValue(0,ui->stu1id->text());
                check.exec();
                if(check.first()&&check.value(0).toInt()==0){
                    QMessageBox::information(this,"创建失败","队员1不存在！");
                    db.close();
                    return;
                }
            }
            if(!ui->stu2id->text().isEmpty()){
                check.prepare("select COUNT(*) from 学生 where 学号 = ?;");
                check.bindValue(0,ui->stu2id->text());
                check.exec();
                if(check.first()&&check.value(0).toInt()==0){
                    QMessageBox::information(this,"创建失败","队员2不存在！");
                    db.close();
                    return;
                }
            }
            check.prepare("select COUNT(*) from 学生 where 学号 in (?,?) and 学号 != ? and 所在队伍编号 is not NULL;");
            check.bindValue(0,ui->stu1id->text());
            check.bindValue(1,ui->stu2id->text());
            check.bindValue(2,id);
            check.exec();
            if(check.first()&&check.value(0).toInt()>0){
                QMessageBox::information(this,"创建失败","队员已加入了其他队伍！");
                db.close();
                return;
            }

            //检查指导老师是否存在
            check.prepare("select COUNT(*) from 指导老师 where 教师工号=?;");
            check.bindValue(0,ui->teacherId->text());
            check.exec();
            if(check.first()&&check.value(0).toInt()==0){
                QMessageBox::information(this,"创建失败","指导老师不存在！");
                db.close();
                return;
            }

            QSqlQuery query;
            query.prepare("insert into 队伍(队伍名,队长学号,指导老师工号) values(?,?,?);");
            query.bindValue(0,ui->teamName->text());
            query.bindValue(1,id);
            query.bindValue(2,ui->teacherId->text());
            query.exec();
            query.prepare("update 学生 set 所在队伍编号=(select 队伍编号 from 队伍 where 队长学号 = ?) where 学号 in (?,?,?);");
            query.bindValue(0,id);
            query.bindValue(1,ui->stu1id->text());
            query.bindValue(2,ui->stu2id->text());
            query.bindValue(3,id);
            query.exec();
            db.close();
            QMessageBox::information(this,"创建成功","创建成功！");
            this->done(1);
        }
        else{
            QMessageBox::information(this,"错误","队伍名称和指导老师不能为空！");
        }
    });


    connect(ui->back,&QPushButton::clicked,this,[=](){       //返回上一步
        this->close();
    });
}

CreateTeam::~CreateTeam()
{
    delete ui;
}
