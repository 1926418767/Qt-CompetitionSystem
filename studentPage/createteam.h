#ifndef CREATETEAM_H
#define CREATETEAM_H

#include <QDialog>

namespace Ui {
class CreateTeam;
}

class CreateTeam : public QDialog
{
    Q_OBJECT

public:
    explicit CreateTeam(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~CreateTeam();

protected:
    Ui::CreateTeam *ui;
    QString name,id;
};

#endif // CREATETEAM_H
