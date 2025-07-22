#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QFile>
#include "login.h"
#include "stucenter.h"
#include "register.h"
#include "administrator.h"
#include "teachercenter.h"
QSqlDatabase db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //a.setWindowIcon(QIcon(":/img/1/acm.png"));

    a.setWindowIcon(QIcon(":/1/acm.png"));

    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("db2025");
    db.setUserName("root");
    db.setPassword("");

    while(1){
        QString name,id;
        Login l;
        QObject::connect(&l, &Login::received, [&](const QString &name1, const QString &id1){
            qDebug() << "触发槽函数received\n用户名: " << name1;
            qDebug() << "ID: " << id1;

            name=name1;
            id=id1;

        });
        int k=l.exec();//学生成功登录返回1 老师登录返回2 管理员登陆返回3 注册返回4 登陆失败返回5 退出登陆返回0
        if(k==1){
            StuCenter s(nullptr,name,id);
            s.exec();
        }
        else if(k==2){
            teacherCenter tc(nullptr,name,id);
            tc.exec();
        }
        else if(k==3){
            Administrator adm(nullptr,name,id);
            adm.exec();
        }
        else if(k==4){
            Register r;
            r.exec();
        }
        else if(k==0){
            break;
        }
    }

    return a.exec();
}
