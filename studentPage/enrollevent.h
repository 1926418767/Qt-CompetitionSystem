#ifndef ENROLLEVENT_H
#define ENROLLEVENT_H

#include <QDialog>

namespace Ui {
class EnrollEvent;
}

class EnrollEvent : public QDialog
{
    Q_OBJECT

public:
    explicit EnrollEvent(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~EnrollEvent();

private:
    Ui::EnrollEvent *ui;
    QString name,id;
};

#endif // ENROLLEVENT_H
