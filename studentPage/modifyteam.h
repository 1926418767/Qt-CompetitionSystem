#ifndef MODIFYTEAM_H
#define MODIFYTEAM_H

#include <QDialog>
#include <QVector>
#include <QLineEdit>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class ModifyTeam;
}

class ModifyTeam : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyTeam(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~ModifyTeam();

private:
    Ui::ModifyTeam *ui;
    QString name,id;
    QVector<QLineEdit*>edits;
    QVector<QLabel*>infos;
    QVector<QPushButton*>btns;
    QVector<bool>isPush;
    QVector<QString>oldIds;
};

#endif // MODIFYTEAM_H
