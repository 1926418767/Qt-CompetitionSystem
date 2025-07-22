#ifndef CREATEEVENT_H
#define CREATEEVENT_H

#include <QDialog>

namespace Ui {
class CreateEvent;
}

class CreateEvent : public QDialog
{
    Q_OBJECT

public:
    explicit CreateEvent(QWidget *parent = nullptr);
    ~CreateEvent();

private:
    Ui::CreateEvent *ui;
};

#endif // CREATEEVENT_H
