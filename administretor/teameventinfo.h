#ifndef TEAMEVENTINFO_H
#define TEAMEVENTINFO_H

#include <QDialog>

namespace Ui {
class TeamEventInfo;
}

class TeamEventInfo : public QDialog
{
    Q_OBJECT

public:
    explicit TeamEventInfo(QWidget *parent = nullptr,int teamId=0,int eventId=0);
    ~TeamEventInfo();

private:
    Ui::TeamEventInfo *ui;
    int teamId,eventId;
};

#endif // TEAMEVENTINFO_H
