#include "teacherinfo.h"
#include "ui_teacherinfo.h"
#include <QVector>
#include <QSqlQuery>
#include <QMessageBox>
#include "database.h"

TeacherInfo::TeacherInfo(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::TeacherInfo),
    name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("老师信息");

    edits={ui->l1,ui->l2,ui->l3,ui->l4,ui->l5};
    btns={ui->m1,ui->m2,ui->m3,ui->m4,ui->m5};
    isPush=QVector<bool>(5,false);

    ui->save->setFocusPolicy(Qt::NoFocus);
    for(int i=0;i<5;++i){
        btns[i]->setFocusPolicy(Qt::NoFocus);
    }

    db.open();
    QSqlQuery query;
    query.prepare("select 教师工号,老师名,性别,邮箱,手机号 from 指导老师 where 教师工号 = ?;");
    query.bindValue(0,id);
    query.exec();
    query.next();
    for(int i=0;i<5;++i){
        edits[i]->setText(query.value(i).toString());
        edits[i]->setEnabled(false);
        connect(btns[i],&QPushButton::clicked,this,[=](){ //设置为可编辑状态
            isPush[i]=true;
            edits[i]->setEnabled(true);
        });
    }
    db.close();
    btns[0]->setEnabled(false);
    btns[1]->setEnabled(false);
    connect(ui->save,&QPushButton::clicked,this,[=](){
        QVector<QString>strs={"教师工号","老师名","性别","邮箱","手机号"};
        for(int i=0;i<5;++i){
            if(isPush[i]){
                db.open();
                QSqlQuery query;
                QString sql = QString("UPDATE 指导老师 SET %1 = ? WHERE 教师工号 = ?").arg(strs[i]);
                query.prepare(sql);
                query.bindValue(0,edits[i]->text());
                query.bindValue(1,id);
                query.exec();
                db.close();
            }
        }
        QMessageBox::information(this,"成功","信息更新成功！");
        this->close();
    });
    connect(ui->back,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

TeacherInfo::~TeacherInfo()
{
    delete ui;
}
