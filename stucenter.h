#ifndef STUCENTER_H
#define STUCENTER_H

#include <QDialog>

namespace Ui {
class StuCenter;
}

class StuCenter : public QDialog
{
    Q_OBJECT

public:
    explicit StuCenter(QWidget *parent = nullptr,QString name=nullptr,QString id=nullptr);
    ~StuCenter();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* event);
protected:
    Ui::StuCenter *ui;
    QString name;
    QString id;
};

#endif // STUCENTER_H
