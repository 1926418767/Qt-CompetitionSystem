#include "studentPage\modifyteam.h"
#include "ui_modifyteam.h"
#include <QVector>
#include <QSqlQuery>
#include <QMessageBox>
#include "database.h"

ModifyTeam::ModifyTeam(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::ModifyTeam),
    name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("修改队伍信息");

    edits={ui->e1,ui->e2,ui->e3,ui->e4,ui->e5};
    infos={ui->i1,ui->i2,ui->i3,ui->i4,ui->i5};
    btns={ui->m1,ui->m2,ui->m3,ui->m4,ui->m5};

    for(int i=0;i<5;++i){
        btns[i]->setFocusPolicy(Qt::NoFocus);
    }
    ui->confirm->setFocusPolicy(Qt::NoFocus);
    ui->back->setFocusPolicy(Qt::NoFocus);
    ui->revoke->setFocusPolicy(Qt::NoFocus);

    isPush=QVector<bool>(5,false);
    oldIds=QVector<QString>(4);//队长、成员学号、教工号

    db.open();
    QSqlQuery query;
    query.prepare("WITH 学生所在队伍编号 AS (SELECT 所在队伍编号 FROM 学生 WHERE 学号 = ? )   \
                  select 队伍名,队伍编号 from 队伍 where 队伍编号= (select 所在队伍编号 from 学生所在队伍编号) \
                  union \
                  select 教师工号,老师名 from 指导老师 where exists(select * from 队伍 where 队伍编号= (select 所在队伍编号 from 学生所在队伍编号) and 指导老师工号=教师工号)    \
                  union \
                  select 学号,学生名 from 学生 where 学号=(select 队长学号 from 队伍 where 队伍编号=(select 所在队伍编号 from 学生所在队伍编号)) \
                  union \
                  select 学号,学生名 from 学生 where 所在队伍编号=(select 所在队伍编号 from 学生所在队伍编号)  \
");
    query.bindValue(0,id);
    query.exec();

    query.next();
    edits[0]->setText(query.value(0).toString());
    ui->teamId->setText(query.value(1).toString());
    query.next();
    edits[4]->setText(query.value(0).toString());
    infos[4]->setText(query.value(1).toString());
    oldIds[3]=query.value(0).toString();
    for(int i=1;i<=3;++i){
        if(!query.next())break;
        edits[i]->setText(query.value(0).toString());
        infos[i]->setText(query.value(1).toString());
        oldIds[i-1]=query.value(0).toString();
    }
    db.close();

    qDebug()<<"oldIds：";
    for(int i=0;i<4;++i){
        qDebug()<<oldIds[i]<<" ";
    }
    qDebug()<<Qt::endl;

    ui->m2->setEnabled(false);

    for(int i=0;i<5;++i){
        edits[i]->setEnabled(false);
        connect(btns[i],&QPushButton::clicked,this,[=](){ //设置为可编辑状态
            isPush[i]=true;
            edits[i]->setEnabled(true);
        });
    }

    connect(ui->confirm,&QPushButton::clicked,this,[=](){   //提交修改
        for(int i=0;i<5;++i){
            if(isPush[i]&&edits[i]->text().isEmpty()){
                QMessageBox::information(this,"错误","输入不能为空！");
                return;
            }
        }
        QSqlQuery query;
        db.open();
        if(isPush[0]){
            query.prepare("update 队伍 set 队伍名 = ? where exists(select * from 学生 where 所在队伍编号=队伍编号 and 学号 = ?);");
            query.bindValue(0,edits[0]->text());
            query.bindValue(1,id);
            query.exec();
        }
        if(isPush[2]){
            query.prepare("select COUNT(*) from 学生 where 学号 = ? and 所在队伍编号 is NULL;");
            query.bindValue(0,edits[2]->text());
            query.exec();
            if(query.first()&&query.value(0).toInt()==0){
                QMessageBox::information(this,"错误","请检测成员是否存在或已加入其他队伍！");
                return;
            }
            query.prepare("UPDATE 学生 AS s1  \
JOIN 学生 AS s2 ON s2.学号 = ?    \
SET s1.所在队伍编号 = s2.所在队伍编号   \
WHERE s1.学号 = ?;");
            query.bindValue(0,id);
            query.bindValue(1,edits[2]->text());
            query.exec();
            query.prepare("UPDATE 学生 AS s1  \
JOIN 学生 AS s2 ON s2.学号 = ?    \
SET s1.所在队伍编号 = NULL   \
WHERE s1.学号 = ?;");
            query.bindValue(0,id);
            query.bindValue(1,oldIds[1]);
            query.exec();
        }
        if(isPush[3]){
            query.prepare("select COUNT(*) from 学生 where 学号 = ? and 所在队伍编号 is NULL;");
            query.bindValue(0,edits[3]->text());
            query.exec();
            if(query.first()&&query.value(0).toInt()==0){
                QMessageBox::information(this,"错误","请检测成员是否存在或已加入其他队伍！");
                return;
            }
            query.prepare("UPDATE 学生 AS s1  \
JOIN 学生 AS s2 ON s2.学号 = ?    \
SET s1.所在队伍编号 = s2.所在队伍编号   \
WHERE s1.学号 = ?;");
            query.bindValue(0,id);
            query.bindValue(1,edits[3]->text());
            query.exec();

            query.prepare("UPDATE 学生 AS s1  \
JOIN 学生 AS s2 ON s2.学号 = ?    \
SET s1.所在队伍编号 = NULL   \
WHERE s1.学号 = ?;");
            query.bindValue(0,id);
            query.bindValue(1,oldIds[2]);
            query.exec();
        }
        if(isPush[4]){
            query.prepare("select COUNT(*) from 指导老师 where 教工号 = ?;");
            query.bindValue(0,edits[4]->text());
            query.exec();
            if(query.first()&&query.value(0).toInt()==0){
                QMessageBox::information(this,"错误","请检查指导老师是否存在！");
                return;
            }
            query.prepare("update 队伍 set 指导老师工号 = ? where exists(select * from 学生 where 学号 = ? and 所在队伍编号 = 队伍编号);");
            query.bindValue(0,edits[4]->text());
            query.bindValue(1,id);
            query.exec();
        }
        QMessageBox::information(this,"成功","队伍信息修改完毕！");
        db.close();
        this->done(1);
    });

    connect(ui->back,&QPushButton::clicked,this,[=](){     //返回
        this->close();
    });

    connect(ui->revoke,&QPushButton::clicked,this,[=](){     //解散队伍
        int k = QMessageBox::question(this, "确认","请确认是否要解散队伍？", QMessageBox::Yes | QMessageBox::No);
        if(k==QMessageBox::Yes){
            db.open();
            QSqlQuery query;
            query.prepare("delete from 队伍 where 队长学号 = ?;");
            query.bindValue(0,oldIds[0]);
            query.exec();
            db.close();
            QMessageBox::information(this,"成功","队伍解散成功！");
            this->close();
        }
    });
}

ModifyTeam::~ModifyTeam()
{
    delete ui;
}
