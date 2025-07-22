#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QDialog>

namespace Ui {
class Administrator;
}

class Administrator : public QDialog
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr,QString name = nullptr,QString id=nullptr);
    ~Administrator();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* event);
private:
    Ui::Administrator *ui;
    QString name,id;
};

#endif // ADMINISTRATOR_H
