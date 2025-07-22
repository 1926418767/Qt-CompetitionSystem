#include "pcinfo.h"
#include "ui_pcinfo.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include <QDateTime>
#include <QFile>
#include <QTableWidgetItem>
PCInfo::PCInfo(QWidget *parent,QString roomId)
    : QDialog(parent)
    , ui(new Ui::PCInfo)
    ,roomId(roomId)
{
    ui->setupUi(this);

    this->setWindowTitle("电脑信息");

    ui->table->setColumnCount(5);
    ui->table->setHorizontalHeaderLabels({"设备编号","IP地址","机房编号","设备状态","删除电脑"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("select 设备编号,IP地址,机房编号,设备状态 from 比赛电脑 where 机房编号=?;");
    query.bindValue(0,roomId);
    query.exec();

    while(query.next()){
        QString pcId=query.value(0).toString();//设备编号
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<4;++i){
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
        }
        QPushButton *btn2 = new QPushButton("删除", this);
        btn2->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,4, btn2);
        connect(btn2, &QPushButton::clicked, this, [=]() {
            db.open();
            QSqlQuery query;
            query.prepare("delete from 比赛电脑 where 设备编号=?;");
            query.bindValue(0,pcId);
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

PCInfo::~PCInfo()
{
    delete ui;
}
