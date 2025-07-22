#include "stuinfo.h"
#include "ui_stuinfo.h"
#include <QVector>
#include <QSqlQuery>
#include <QMessageBox>
#include "database.h"

stuInfo::stuInfo(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::stuInfo),
    name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("学生信息");

    edits={ui->l1,ui->l2,ui->l3,ui->l4,ui->l5,ui->l6};
    btns={ui->m1,ui->m2,ui->m3,ui->m4,ui->m5,ui->m6};
    isPush=QVector<bool>(6,false);

    ui->save->setFocusPolicy(Qt::NoFocus);
    for(int i=0;i<6;++i){
        btns[i]->setFocusPolicy(Qt::NoFocus);
    }

    db.open();
    QSqlQuery query;
    query.prepare("select 学号,学生名,性别,邮箱,手机号,所在队伍编号 from 学生 where 学号 = ?;");
    query.bindValue(0,id);
    query.exec();
    query.next();
    for(int i=0;i<6;++i){
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
    btns[5]->setEnabled(false);
    connect(ui->save,&QPushButton::clicked,this,[=](){
        QVector<QString>strs={"学号","学生名","性别","邮箱","手机号","所在队伍编号"};
        for(int i=0;i<6;++i){
            if(isPush[i]){
                db.open();
                QSqlQuery query;
                QString sql = QString("UPDATE 学生 SET %1 = ? WHERE 学号 = ?").arg(strs[i]);
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

stuInfo::~stuInfo()
{
    delete ui;
}
