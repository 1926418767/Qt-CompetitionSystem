#include "eventinfo.h"
#include "ui_eventinfo.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include <QDateTime>
#include <QFile>
#include <QTableWidgetItem>
#include "teameventinfo.h"
EventInfo::EventInfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EventInfo)
{
    ui->setupUi(this);
    ui->back->setFocusPolicy(Qt::NoFocus);

    this->setWindowTitle("赛事信息");

    ui->table->setColumnCount(8);
    ui->table->setHorizontalHeaderLabels({"赛事编号","赛事名称","开始时间","结束时间","赛事地点","赛事状态","报名信息","删除赛事"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("select 赛事编号,赛事名称,开始时间,结束时间,赛事地点,赛事状态 from 竞赛;");
    query.exec();

    while(query.next()){
        int eventId=query.value(0).toInt();//赛事编号
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<6;++i){
            if(i==2||i==3){
                ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toDateTime().toString("yyyy-MM-dd HH:mm:ss")));
                continue;
            }
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
        }
        QPushButton *btn1 = new QPushButton("详细信息", this);
        btn1->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,6, btn1);
        connect(btn1, &QPushButton::clicked, this, [=]() {
            this->setEnabled(false);
            TeamEventInfo tei(this,0,eventId);
            tei.exec();
            this->setEnabled(true);
        });

        QPushButton *btn2 = new QPushButton("删除", this);
        btn2->setFocusPolicy(Qt::NoFocus);
        ui->table->setCellWidget(row,7, btn2);
        connect(btn2, &QPushButton::clicked, this, [=]() {
            db.open();
            QSqlQuery query;
            query.prepare("delete from 竞赛 where 赛事编号=?;");
            query.bindValue(0,eventId);
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
}
void exportToCSV(QTableWidget* tableWidget, const QString& filePath) {
    // 打开文件进行写操作
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(nullptr, "保存文件", "无法打开文件进行写入！");
        return;
    }

    QTextStream stream(&file);

    // 获取列数
    int columnCount = tableWidget->columnCount();

    // 导出表头
    for (int col = 0; col < columnCount; ++col) {
        if (col > 0) stream << ",";  // 添加逗号分隔符
        stream << tableWidget->horizontalHeaderItem(col)->text();  // 表头文本
    }
    stream << "\n";  // 换行

    // 导出表格数据
    int rowCount = tableWidget->rowCount();
    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < columnCount; ++col) {
            if (col > 0) stream << ",";  // 添加逗号分隔符
            stream << tableWidget->item(row, col)->text();  // 单元格文本
        }
        stream << "\n";  // 换行
    }

    file.close();
    QMessageBox::information(nullptr, "导出成功", "CSV 文件已成功导出！");
}
EventInfo::~EventInfo()
{
    delete ui;
}
