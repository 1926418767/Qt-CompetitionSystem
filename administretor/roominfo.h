#ifndef ROOMINFO_H
#define ROOMINFO_H

#include <QDialog>

namespace Ui {
class RoomInfo;
}

class RoomInfo : public QDialog
{
    Q_OBJECT

public:
    explicit RoomInfo(QWidget *parent = nullptr);
    ~RoomInfo();

private:
    Ui::RoomInfo *ui;
};

#endif // ROOMINFO_H
