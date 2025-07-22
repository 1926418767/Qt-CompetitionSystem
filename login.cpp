#include "login.h"
#include "ui_login.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "database.h"
#include "verify.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    //设置对话框背景颜色
    QPalette palette = this->palette();
    QLinearGradient gradient(0, 0, width(), height());    //从(0,0)到(width,height)
    gradient.setColorAt(0, Qt::white);  //起点设置为白色
    gradient.setColorAt(0.5, QColor(192, 192, 255));    //中间设置为紫色
    gradient.setColorAt(1, Qt::white);  //终点设置为白色
    palette.setBrush(QPalette::Window, QBrush(gradient));
    setPalette(palette);

    ui->user->setChecked(true);

    ui->exit->setFocusPolicy(Qt::NoFocus);
    ui->register_1->setFocusPolicy(Qt::NoFocus);
    ui->login->setFocusPolicy(Qt::NoFocus);

    //退出登录窗口    exec()返回0
    connect(ui->exit, &QPushButton::clicked, this, [=](){
        this->done(0);
        this->close();
    });

    //登录按钮点击
    connect(ui->login,&QPushButton::clicked,this,[=](){
        // Verify ver;
        // int isRejected = ver.exec();    //弹出验证码检测   成功exec()返回1，否则返回0
        // if(isRejected==QDialog::Rejected)   //直接关闭验证码窗口则清空密码结束
        // {
        //     ui->passwordEdit->clear();
        // }
        int res=0;  //exec()返回值
        if(0){}
        else    //通过了验证码
        {
            if(db.open())   //打开数据库
            {
                qDebug()<<"数据库打开成功"<<Qt::endl;
            }
            else
            {
                qDebug()<<"数据库打开失败\nerror open database because"<<db.lastError().text();
                return;
            }
            QSqlQuery accountName;
            if(ui->user->isChecked())  //学生登录
            {
                qDebug()<<"学生登陆\n";
                accountName.prepare("SELECT 学生名,学号 FROM 学生 where (手机号=? or 学号=?) and 账号密码=?;");
                res=1;
            }
            else if(ui->administrator->isChecked()){    //管理员登陆
                qDebug()<<"管理员登陆\n";
                accountName.prepare("SELECT 用户名,管理员编号 FROM 管理员 where (手机号=? or 用户名=?) and 密码=?;");
                res=3;
            }
            else  //老师登录
            {
                qDebug()<<"指导老师登陆\n";
                accountName.prepare("SELECT 老师名,教师工号 FROM 指导老师 where (手机号=? or 教师工号=?) and 账号密码=?;");
                res=2;
            }
            accountName.bindValue(0,ui->phoneEdit->text());
            accountName.bindValue(1,ui->phoneEdit->text());
            accountName.bindValue(2,ui->passwordEdit->text());
            accountName.exec();
            if(accountName.first()){
                qDebug()<<accountName.value(0).toString()<<"和"<<accountName.value(1).toString()<<Qt::endl;
                QMessageBox::information(this,"登录成功","登录成功！");
                emit received(accountName.value(0).toString(), accountName.value(1).toString());
                db.close();
                this->done(res);
                return ;
            }
            else{
                QMessageBox::information(this,"登录失败","用户名或密码错误，请重新输入！");
                ui->passwordEdit->clear();
                db.close();
                return ;
            }
        }
    });

    //注册按钮点击    返回4
    connect(ui->register_1,&QPushButton::clicked,this,[=](){
        this->done(4);
        this->close();
    });
}

Login::~Login()
{
    delete ui;
}
