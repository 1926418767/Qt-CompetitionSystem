#ifndef ADDPC_H
#define ADDPC_H

#include <QDialog>

namespace Ui {
class AddPC;
}

class AddPC : public QDialog
{
    Q_OBJECT

public:
    explicit AddPC(QWidget *parent = nullptr);
    ~AddPC();

private:
    Ui::AddPC *ui;
};

#endif // ADDPC_H
