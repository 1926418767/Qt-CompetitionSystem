#include "teachercenter.h"
#include "ui_teachercenter.h"
#include <QPainter>
#include <QMessageBox>
#include <QSqlQuery>
#include "database.h"
#include "QFile"
#include "teacherPage\teacherinfo.h"

void exportToCSV3(QTableWidget* tableWidget, const QString& filePath) {
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
teacherCenter::teacherCenter(QWidget *parent,QString name,QString id)
    : QDialog(parent)
    , ui(new Ui::teacherCenter)
    ,name(name)
    ,id(id)
{
    ui->setupUi(this);

    ui->label->setText(ui->label->text()+name);

    this->setWindowTitle("指导老师端");

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    // 设置窗体最大化和最小化
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;

    setWindowFlags(windowFlag);

    ui->table->setColumnCount(7);
    ui->table->setHorizontalHeaderLabels({"队伍编号","队伍名","队长学号","队长","队长性别","队长手机号","队长邮箱"});  // 设置列头

    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 所有列平分宽度

    // 禁止用户编辑表格
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 禁止编辑

    db.open();
    QSqlQuery query;

    query.prepare("SELECT 队伍.队伍编号,队伍.队伍名,学生.学号,学生.学生名,学生.性别,学生.手机号,学生.邮箱    \
FROM 队伍 \
JOIN 学生 ON 学生.学号=队伍.队长学号    \
WHERE 队伍.队伍编号 IN (  \
    SELECT 队伍编号 \
    FROM 队伍 \
    WHERE 指导老师工号 = ?    \
)");
    query.bindValue(0,id);
    query.exec();

    while(query.next()){
        int row = ui->table->rowCount();
        ui->table->insertRow(row);  // 插入新行
        for(int i=0;i<7;++i){
            ui->table->setItem(row,i, new QTableWidgetItem(query.value(i).toString()));
        }
    }

    db.close();


    connect(ui->download,&QPushButton::clicked,this,[=](){       //导出
        exportToCSV3(ui->table,"D:\\Desktop\\output.csv");
    });
}
void teacherCenter::mousePressEvent(QMouseEvent *event)
{
    //检查鼠标事件的位置是否在限定的区域内
    if(ui->personalCenter->underMouse())        //进入个人中心
    {
        this->setEnabled(false);
        TeacherInfo ti(this,name,id);
        ti.exec();
        this->setEnabled(true);
    }
    else if(ui->signOut->underMouse())       //退出登录
    {
        this->done(QDialog::Accepted);
        this->close();
    }
}

void teacherCenter::paintEvent(QPaintEvent* event)     //绘制窗口
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);  //设置无边框
    painter.setRenderHint(QPainter::Antialiasing, true);    //渲染

    QRect rect = contentsRect();
    int height = rect.height() / 6;

    // 给矩形绘制渐变背景
    QLinearGradient gradient(0, 0, width(), 0);
    gradient.setColorAt(0, QColor(54,168,244));
    gradient.setColorAt(0.418, QColor(54,168,244));
    gradient.setColorAt(1, Qt::white);

    painter.setBrush(gradient);
    painter.drawRect(rect.left(), rect.top(), rect.width(), height);


}
teacherCenter::~teacherCenter()
{
    delete ui;
}
