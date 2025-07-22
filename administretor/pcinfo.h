#ifndef PCINFO_H
#define PCINFO_H

#include <QDialog>

namespace Ui {
class PCInfo;
}

class PCInfo : public QDialog
{
    Q_OBJECT

public:
    explicit PCInfo(QWidget *parent = nullptr,QString roomId=nullptr);
    ~PCInfo();

private:
    Ui::PCInfo *ui;
    QString roomId;
};

#endif // PCINFO_H
