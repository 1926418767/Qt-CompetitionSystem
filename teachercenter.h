#ifndef TEACHERCENTER_H
#define TEACHERCENTER_H

#include <QDialog>

namespace Ui {
class teacherCenter;
}

class teacherCenter : public QDialog
{
    Q_OBJECT

public:
    explicit teacherCenter(QWidget *parent = nullptr,QString name=nullptr,QString id=nullptr);
    ~teacherCenter();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* event);
private:
    Ui::teacherCenter *ui;
    QString name;
    QString id;
};

#endif // TEACHERCENTER_H
