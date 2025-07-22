#ifndef EVENTINFO_H
#define EVENTINFO_H

#include <QDialog>

namespace Ui {
class EventInfo;
}

class EventInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EventInfo(QWidget *parent = nullptr);
    ~EventInfo();

private:
    Ui::EventInfo *ui;
};

#endif // EVENTINFO_H
