#include "infoteam.h"
#include "ui_infoteam.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "database.h"

InfoTeam::InfoTeam(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::InfoTeam)
    ,name(name),
    id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("队伍信息");

    ui->table->setColumnCount(6);  // 设置表格列数为5
    ui->table->setHorizontalHeaderLabels({" ","学号", "姓名", "性别", "邮箱", "手机号"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    ui->back->setFocusPolicy(Qt::NoFocus);

    db.open();
    QSqlQuery query;

    query.prepare("select 队伍编号,队伍名 from 队伍 where 队伍编号=(select 所在队伍编号 from 学生 where 学号 = ?);");
    query.bindValue(0,id);
    query.exec();
    if(query.first()){
        ui->teamId->setText(ui->teamId->text()+query.value(0).toString());
        ui->teamName->setText(ui->teamName->text()+query.value(1).toString());
    }


    query.prepare("select 学号,学生名,性别,邮箱,手机号 from 学生 where 学号=(select 队长学号 from 队伍 where 队伍编号=(select 所在队伍编号 from 学生 where 学号 = ?))    \
union   \
select 学号,学生名,性别,邮箱,手机号 from 学生 where 所在队伍编号=(select 所在队伍编号 from 学生 where 学号 = ?);");
    query.bindValue(0,id);
    query.bindValue(1,id);
    query.exec();
    while(query.next()){
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<5;++i){
            ui->table->setItem(row,i+1, new QTableWidgetItem(query.value(i).toString()));
        }
        if(row==0){
            ui->table->setItem(row,0, new QTableWidgetItem("队长"));
        }
        else{
            ui->table->setItem(row,0, new QTableWidgetItem("队员" + QString::fromStdString(std::to_string(row))));
        }
    }


    query.prepare("select 教师工号,老师名,性别,邮箱,手机号 from 指导老师 where 教师工号=(select 指导老师工号 from 队伍 where 队伍编号=(select 所在队伍编号 from 学生 where 学号 = ?));");
    query.bindValue(0,id);
    query.exec();
    if(query.first()){
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<5;++i){
            ui->table->setItem(row,i+1, new QTableWidgetItem(query.value(i).toString()));
        }
        ui->table->setItem(row,0, new QTableWidgetItem("指导老师"));

    }
    db.close();


    connect(ui->back,&QPushButton::clicked,this,[=](){     //返回
        this->close();
    });
}

InfoTeam::~InfoTeam()
{
    delete ui;
}
