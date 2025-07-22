#include "studentPage\enrollevent.h"
#include "ui_enrollevent.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include <QDateTime>
#include <QTableWidgetItem>
EnrollEvent::EnrollEvent(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::EnrollEvent),
    name(name),
    id(id)
{
    ui->setupUi(this);


    this->setWindowTitle("报名比赛");

    ui->back->setFocusPolicy(Qt::NoFocus);

    ui->table->setColumnCount(9);  // 设置表格列数为9
    ui->table->setHorizontalHeaderLabels({"赛事名称","开始时间","结束时间","赛事地点","赛事状态","机房编号","电脑编号","是否报名","取消报名"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度
    ui->table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Interactive);
    ui->table->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Interactive);
    ui->table->setColumnWidth(1, 130);
    ui->table->setColumnWidth(2, 130);

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("select 赛事编号,赛事名称,开始时间,结束时间,赛事地点,赛事状态 from 竞赛;");
    query.exec();

    while(query.next()){
        int eventId=query.value(0).toInt();//赛事编号
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<5;++i){
            if(i==1||i==2){
                ui->table->setItem(row,i, new QTableWidgetItem(query.value(i+1).toDateTime().toString("yyyy-MM-dd HH:mm:ss")));
                continue;
            }
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i+1).toString()));
        }
        QPushButton *btn1 = new QPushButton("报名", this);
        QPushButton *btn2 = new QPushButton("取消", this);
        btn1->setFocusPolicy(Qt::NoFocus);
        btn2->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,7, btn1);
        ui->table->setCellWidget(row,8, btn2);
        btn2->setEnabled(false);
        if(query.value(5).toString()!="未开始"){
            btn1->setEnabled(false);
        }
        connect(btn1, &QPushButton::clicked, this, [=]() {
            db.open();
            QSqlQuery choose;
            choose.prepare("select A.机房编号,A.设备编号,B.所在队伍编号 from (select 机房编号,设备编号 from 比赛电脑 where 设备状态='可用' and 设备编号 not in (select 电脑编号 from 队伍竞赛 where 赛事编号=?)) A cross join (select 所在队伍编号 from 学生 where 学号 = ?) B ORDER BY RAND() limit 1;");
            choose.bindValue(0,eventId);
            choose.bindValue(1,id);
            choose.exec();
            if(!choose.first()){
                QMessageBox::information(this,"错误","查找电脑失败！");
                db.close();
                return;
            }
            QSqlQuery insert;
            insert.prepare("insert into 队伍竞赛(队伍编号,赛事编号,机房编号,电脑编号) values (?,?,?,?);");
            insert.bindValue(0,choose.value(2).toInt());
            insert.bindValue(1,eventId);
            insert.bindValue(2,choose.value(0).toString());
            insert.bindValue(3,choose.value(1).toString());
            //qDebug()<<choose.value(2).toInt()<<' '<<eventId<<' '<<choose.value(0).toString()<<' '<<choose.value(1).toString()<<Qt::endl;
            if(!insert.exec()){
                QMessageBox::information(this,"错误","报名失败！");
                db.close();
                return;
            }
            ui->table->setItem(row,5, new QTableWidgetItem(choose.value(0).toString()));
            ui->table->setItem(row,6, new QTableWidgetItem(choose.value(1).toString()));
            QMessageBox::information(this,"成功","报名成功！");
            btn1->setEnabled(false);
            btn1->setText("已报名");
            btn2->setEnabled(true);
            db.close();
        });

        QSqlQuery query2;
        query2.prepare("select 机房编号,电脑编号 from 队伍竞赛 where 队伍竞赛.赛事编号=? and exists(select * from 队伍 where 队伍.队伍编号=队伍竞赛.队伍编号 and exists(select * from 学生 where 学号=? and 队伍.队伍编号=所在队伍编号));");
        query2.bindValue(0,eventId);
        query2.bindValue(1,id);
        query2.exec();
        if(query2.first()){
            ui->table->setItem(row,5, new QTableWidgetItem(query2.value(0).toString()));
            ui->table->setItem(row,6, new QTableWidgetItem(query2.value(1).toString()));
            btn1->setEnabled(false);
            btn1->setText("已报名");
            btn2->setEnabled(true);
        }

        connect(btn2, &QPushButton::clicked, this, [=](){
            db.open();
            QSqlQuery query;
            query.prepare("delete from 队伍竞赛 where exists(select * from 学生 where 学号 = ? and 所在队伍编号=队伍编号 and 赛事编号=?);");
            query.bindValue(0,id);
            query.bindValue(1,eventId);
            query.exec();
            ui->table->setItem(row, 5, new QTableWidgetItem(""));
            ui->table->setItem(row, 6, new QTableWidgetItem(""));
            btn1->setEnabled(true);
            btn1->setText("报名");
            btn2->setEnabled(false);
            QMessageBox::information(this,"成功","取消报名成功！");
            db.close();
        });
    }

    connect(ui->back,&QPushButton::clicked,this,[=](){     //返回
        this->close();
    });



    db.close();
}

EnrollEvent::~EnrollEvent()
{
    delete ui;
}
