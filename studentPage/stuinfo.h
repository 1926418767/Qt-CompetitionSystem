#ifndef STUINFO_H
#define STUINFO_H

#include <QDialog>
#include <QVector>
#include <QLineEdit>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class stuInfo;
}

class stuInfo : public QDialog
{
    Q_OBJECT

public:
    explicit stuInfo(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~stuInfo();

private:
    Ui::stuInfo *ui;
    QString name,id;
    QVector<QLineEdit*>edits;
    QVector<QPushButton*>btns;
    QVector<bool>isPush;
};

#endif // STUINFO_H
