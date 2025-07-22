/********************************************************************************
** Form generated from reading UI file 'enrollevent.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLLEVENT_H
#define UI_ENROLLEVENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnrollEvent
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table;
    QPushButton *back;

    void setupUi(QDialog *EnrollEvent)
    {
        if (EnrollEvent->objectName().isEmpty())
            EnrollEvent->setObjectName("EnrollEvent");
        EnrollEvent->resize(1036, 587);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        EnrollEvent->setWindowIcon(icon);
        horizontalLayoutWidget = new QWidget(EnrollEvent);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1021, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        table = new QTableWidget(EnrollEvent);
        table->setObjectName("table");
        table->setGeometry(QRect(10, 80, 1011, 441));
        back = new QPushButton(EnrollEvent);
        back->setObjectName("back");
        back->setGeometry(QRect(930, 540, 93, 28));

        retranslateUi(EnrollEvent);

        QMetaObject::connectSlotsByName(EnrollEvent);
    } // setupUi

    void retranslateUi(QDialog *EnrollEvent)
    {
        EnrollEvent->setWindowTitle(QCoreApplication::translate("EnrollEvent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EnrollEvent", "\346\212\245\345\220\215\347\256\241\347\220\206", nullptr));
        back->setText(QCoreApplication::translate("EnrollEvent", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnrollEvent: public Ui_EnrollEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLEVENT_H
