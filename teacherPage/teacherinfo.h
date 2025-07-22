#ifndef TEACHERINFO_H
#define TEACHERINFO_H

#include <QDialog>
#include <QVector>
#include <QLineEdit>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class TeacherInfo;
}

class TeacherInfo : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherInfo(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~TeacherInfo();

private:
    Ui::TeacherInfo *ui;
    QString name,id;
    QVector<QLineEdit*>edits;
    QVector<QPushButton*>btns;
    QVector<bool>isPush;
};

#endif // TEACHERINFO_H
