#ifndef INFOTEAM_H
#define INFOTEAM_H

#include <QDialog>

namespace Ui {
class InfoTeam;
}

class InfoTeam : public QDialog
{
    Q_OBJECT

public:
    explicit InfoTeam(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~InfoTeam();

private:
    Ui::InfoTeam *ui;
    QString name,id;
};

#endif // INFOTEAM_H
