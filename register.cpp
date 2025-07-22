#include "register.h"
#include "ui_register.h"
#include <QString>
#include "database.h"
#include "verify.h"
#include <QSqlQuery>
#include <QMessageBox>

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->student->setChecked(true);

    this->setWindowTitle("注册");

    //设置对话框背景颜色
    QPalette palette = this->palette();
    QLinearGradient gradient(0, 0, width(), height());    //从(0,0)到(width,height)
    gradient.setColorAt(0, Qt::white);  //起点设置为白色
    gradient.setColorAt(0.5, QColor(192, 192, 255));    //中间设置为紫色
    gradient.setColorAt(1, Qt::white);  //终点设置为白色
    palette.setBrush(QPalette::Window, QBrush(gradient));
    setPalette(palette);

    //学号触发输入
    connect(ui->idEdit, &QLineEdit::textChanged,this, [=](){
        QString text=ui->idEdit->text();
        if(text.size()>16||!checkLabel(text))
        {
            ui->label_9->setText("×");
            ui->label_9->setStyleSheet("color:red;");
            return;
        }
        else if(text.size()==0)
        {
            ui->label_9->setText("!");
            ui->label_9->setStyleSheet("color:yellow;");
        }
        else
        {
            // db.open();
            // QSqlQuery query;
            // query.exec("select accountName from user;");
            // while(query.next())
            // {
            //     if(query.value(0)==text)
            //     {
            //         ui->label->setText("×");
            //         ui->label->setStyleSheet("color:red;");
            //         db.close();
            //         return;
            //     }
            // }
            // db.close();
            ui->label_9->setText("√");
            ui->label_9->setStyleSheet("color:green;");
            return;
        }
    });

    //姓名触发输入
    connect(ui->userNameEdit, &QLineEdit::textChanged,this, [=](){
        QString text=ui->userNameEdit->text();
        if(text.size()>16)
        {
            ui->label_8->setText("×");
            ui->label_8->setStyleSheet("color:red;");
            return;
        }
        else if(text.size()==0)
        {
            ui->label_8->setText("!");
            ui->label_8->setStyleSheet("color:yellow;");
        }
        else
        {
            ui->label_8->setText("√");
            ui->label_8->setStyleSheet("color:green;");
            return;
        }
    });

    //手机号触发输入
    connect(ui->phoneEdit, &QLineEdit::textChanged,this, [=](){
        QString text=ui->phoneEdit->text();
        if(text.size()==0){
            ui->label->setText("!");
            ui->label->setStyleSheet("color:yellow;");
        }
        else if(text.size()>16||!checkLabel(text))
        {
            ui->label->setText("×");
            ui->label->setStyleSheet("color:red;");
            return;
        }
        else //如果不为空
        {
            // db.open();
            // QSqlQuery query;
            // query.exec("select accountName from user;");
            // while(query.next())
            // {
            //     if(query.value(0)==text)
            //     {
            //         ui->label->setText("×");
            //         ui->label->setStyleSheet("color:red;");
            //         db.close();
            //         return;
            //     }
            // }
            // db.close();
            ui->label->setText("√");
            ui->label->setStyleSheet("color:green;");
            return;
        }
    });

    connect(ui->passwordEdit, &QLineEdit::textChanged,this,[=](){
        QString text1=ui->passwordEdit->text();
        QString text2= ui->passwordAgainEdit->text();
        if(text1.size()<6||text1.size()>16)
        {
            ui->label_2->setText("×");
            ui->label_2->setStyleSheet("color:red;");
        }
        else if(text1.size()==0)
        {
            ui->label_2->setText("!");
            ui->label_2->setStyleSheet("color:yellow;");
        }
        else if(text1==text2)
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
        }
        else if(text1!=text2&&ui->label_3->text()=="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
        else if(text1!=text2&&ui->label_3->text()!="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
        }
    });

    connect(ui->passwordAgainEdit, &QLineEdit::textChanged,this,[=](){
        QString text1= ui->passwordEdit->text();
        QString text2= ui->passwordAgainEdit->text();
        if(text2.isEmpty())
        {
            ui->label_3->setText("!");
            ui->label_3->setStyleSheet("color:yellow;");
        }
        else if(ui->label_2->text()=="×"||ui->label_2->text()=="!")
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
        else if(text1==text2)
        {
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
        }
        else if(text1!=text2)
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
    });

    connect(ui->register_1,&QPushButton::clicked,this,[=](){
        if(ui->label->text()=="√"&&ui->label_2->text()=="√"&&ui->label_3->text()=="√"&&ui->label_8->text()=="√"&&ui->label_9->text()=="√")
        {
            Verify ver;
            if(ver.exec()==QDialog::Rejected)     //弹出验证码检测   成功exec()返回1，否则返回0
            {
                ui->passwordEdit->clear();
                ui->passwordAgainEdit->clear();
                return;
            }
            db.open();
            QSqlQuery query,checkQuery;
            if(ui->student->isChecked()){
                query.prepare("insert into 学生(学号,学生名,手机号,账号密码) values(?,?,?,?)");
                checkQuery.exec("select 学号，手机号 from 学生");
            }
            else if(ui->teacher->isChecked()){
                query.prepare("insert into 指导老师(教师工号,老师名,手机号，账号密码) values(?,?,?,?)");
                checkQuery.exec("select 教师工号，手机号 from 指导老师");
            }
            else{
                db.close();
                QMessageBox::information(this,"错误","请勾选 学生/指导老师!");
                return;
            }
            while(checkQuery.next())
            {
                if(checkQuery.value(0)==ui->idEdit->text())
                {
                    QMessageBox::information(this,"错误","学号/教师工号重复");
                    db.close();
                    return;
                }
                else if(checkQuery.value(1)==ui->phoneEdit->text()){
                    QMessageBox::information(this,"错误","手机号重复");
                    db.close();
                    return;
                }
            }
            query.bindValue(0,ui->idEdit->text());
            query.bindValue(1,ui->userNameEdit->text());
            query.bindValue(2,ui->phoneEdit->text());
            query.bindValue(3,ui->passwordEdit->text());
            query.exec();
            db.close();

            QMessageBox::information(this,"成功","注册成功!");
            this->done(QDialog::Accepted);
            this->close();
        }
    });

    connect(ui->return_1,&QPushButton::clicked,this,[=](){
        this->done(QDialog::Accepted);
        this->close();
    });

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->done(QDialog::Rejected);
        this->close();
    });
}

bool Register::checkLabel(const QString& str)
{
    for (QChar c : str) {
        if (!('0'<=c&&c<='9')) {
            // 如果遇到非字母非数字的字符，返回false
            return false;
        }
    }
    // 如果所有字符都是数字，返回true
    return true;
}

Register::~Register()
{
    delete ui;
}
