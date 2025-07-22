#include "roominfo.h"
#include "ui_roominfo.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include <QDateTime>
#include <QFile>
#include <QTableWidgetItem>
#include "pcinfo.h"
RoomInfo::RoomInfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RoomInfo)
{
    ui->setupUi(this);

    this->setWindowTitle("机房信息");

    ui->table->setColumnCount(5);
    ui->table->setHorizontalHeaderLabels({"机房编号","可用电脑数量","电脑总数","详细信息","删除机房"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("select 机房编号,可用电脑数量,电脑总数 from 机房;");
    query.exec();

    while(query.next()){
        QString roomId=query.value(0).toString();//机房编号
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<3;++i){
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
        }
        QPushButton *btn1 = new QPushButton("详细信息", this);
        btn1->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,3, btn1);
        QPushButton *btn2 = new QPushButton("删除", this);
        btn2->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,4, btn2);
        connect(btn1, &QPushButton::clicked, this, [=]() {
            this->setEnabled(false);
            PCInfo pi(this,roomId);
            pi.exec();
            this->setEnabled(true);
        });
        connect(btn2, &QPushButton::clicked, this, [=]() {
            db.open();
            QSqlQuery query;
            query.prepare("delete from 机房 where 机房编号=?;");
            query.bindValue(0,roomId);
            if(query.exec()){
                ui->table->removeRow(row);
                QMessageBox::information(this,"成功","删除成功！");
            }
            db.close();
        });
    }
    connect(ui->back,&QPushButton::clicked,this,[=](){       //返回上一步
        this->close();
    });
    db.close();
}

RoomInfo::~RoomInfo()
{
    delete ui;
}
