#include "teameventinfo.h"
#include "ui_teameventinfo.h"
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include <QDateTime>
#include <QTableWidgetItem>
#include <QFile>

void exportToCSV2(QTableWidget* tableWidget, const QString& filePath) {
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

TeamEventInfo::TeamEventInfo(QWidget *parent,int teamId,int eventId)
    : QDialog(parent)
    , ui(new Ui::TeamEventInfo)
    ,teamId(teamId)
    ,eventId(eventId)
{
    ui->setupUi(this);

    this->setWindowTitle("参赛信息");
    ui->btn->setFocusPolicy(Qt::NoFocus);
    ui->download->setFocusPolicy(Qt::NoFocus);
    ui->back->setFocusPolicy(Qt::NoFocus);

    ui->table->setColumnCount(8);
    ui->table->setHorizontalHeaderLabels({"赛事编号","队伍编号","队伍名","队长","成员1","成员2","机房编号","电脑编号"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("WITH \
A AS (  \
    SELECT 赛事编号, 队伍编号, 机房编号, 电脑编号   \
    FROM 队伍竞赛   \
    WHERE 赛事编号 = ?  \
),  \
B AS (  \
    SELECT 队伍.队伍编号, 队伍.队伍名, 学生.学生名 AS 队长, 队伍.队长学号 AS 队长学号   \
    FROM 队伍 \
    JOIN 学生 ON 学生.学号 = 队伍.队长学号  \
),  \
C AS (  \
    SELECT  \
        学生名,    \
        所在队伍编号, \
        学号, \
        ROW_NUMBER() OVER ( \
            PARTITION BY 所在队伍编号 \
            ORDER BY 学生名    \
        ) AS rn \
    FROM 学生 \
    WHERE 学号 NOT IN (   \
        SELECT 队长学号 \
        FROM 队伍 \
        WHERE 队伍编号 = 学生.所在队伍编号  \
    )   \
)   \
SELECT  \
    A.赛事编号, \
    A.队伍编号, \
    B.队伍名,  \
    B.队长,   \
    MAX(CASE WHEN C.rn = 1 THEN C.学生名 END) AS 队员1,  \
    MAX(CASE WHEN C.rn = 2 THEN C.学生名 END) AS 队员2,  \
    A.机房编号, \
    A.电脑编号  \
FROM A  \
JOIN B ON A.队伍编号 = B.队伍编号   \
LEFT JOIN C ON C.所在队伍编号 = B.队伍编号    \
GROUP BY    \
    A.赛事编号, \
    A.队伍编号, \
    B.队伍名,  \
    B.队长,   \
    A.机房编号, \
    A.电脑编号;");
    query.bindValue(0,eventId);
    query.exec();

    while(query.next()){
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<8;++i){
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
        }
    }

    db.close();

    connect(ui->back,&QPushButton::clicked,this,[=](){       //返回上一步
        this->close();
    });

    connect(ui->download,&QPushButton::clicked,this,[=](){       //导出
        exportToCSV2(ui->table,"D:\\Desktop\\output.csv");
    });

    connect(ui->btn,&QPushButton::clicked,this,[=](){       //查询
        if(ui->find->text().isEmpty()){
            QMessageBox::information(this,"错误","不可为空！");
            db.close();
            return;
        }
        db.open();
        QSqlQuery query;
        int teamId=ui->find->text().toInt();

        query.prepare("WITH \
    A AS (  \
        SELECT 赛事编号, 队伍编号, 机房编号, 电脑编号   \
        FROM 队伍竞赛   \
        WHERE 赛事编号 = ?  \
    ),  \
    B AS (  \
        SELECT 队伍.队伍编号, 队伍.队伍名, 学生.学生名 AS 队长, 队伍.队长学号 AS 队长学号   \
        FROM 队伍 \
        JOIN 学生 ON 学生.学号 = 队伍.队长学号  \
        where 队伍编号 = ?  \
    ),  \
    C AS (  \
        SELECT  \
            学生名,    \
            所在队伍编号, \
            学号, \
            ROW_NUMBER() OVER ( \
                PARTITION BY 所在队伍编号 \
                ORDER BY 学生名    \
            ) AS rn \
        FROM 学生 \
        WHERE 学号 NOT IN (   \
            SELECT 队长学号 \
            FROM 队伍 \
            WHERE 队伍编号 = 学生.所在队伍编号  \
        )   \
    )   \
    SELECT  \
        A.赛事编号, \
        A.队伍编号, \
        B.队伍名,  \
        B.队长,   \
        MAX(CASE WHEN C.rn = 1 THEN C.学生名 END) AS 队员1,  \
        MAX(CASE WHEN C.rn = 2 THEN C.学生名 END) AS 队员2,  \
        A.机房编号, \
        A.电脑编号  \
    FROM A  \
    JOIN B ON A.队伍编号 = B.队伍编号   \
    LEFT JOIN C ON C.所在队伍编号 = B.队伍编号    \
    GROUP BY    \
        A.赛事编号, \
        A.队伍编号, \
        B.队伍名,  \
        B.队长,   \
        A.机房编号, \
        A.电脑编号;");
        query.bindValue(0,eventId);
        query.bindValue(1,teamId);
        query.exec();
        ui->table->clear();
        ui->table->setRowCount(0);
        while(query.next()){
            int row = ui->table->rowCount();
            ui->table->insertRow(row);  // 插入新行
            for(int i=0;i<8;++i){
                ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
            }
        }

        db.close();
    });
}

TeamEventInfo::~TeamEventInfo()
{
    delete ui;
}
