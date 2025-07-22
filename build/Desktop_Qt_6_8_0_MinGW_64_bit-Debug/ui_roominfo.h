/********************************************************************************
** Form generated from reading UI file 'roominfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMINFO_H
#define UI_ROOMINFO_H

#include <QtCore/QVariant>
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

class Ui_RoomInfo
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table;
    QPushButton *back;

    void setupUi(QDialog *RoomInfo)
    {
        if (RoomInfo->objectName().isEmpty())
            RoomInfo->setObjectName("RoomInfo");
        RoomInfo->resize(1128, 682);
        horizontalLayoutWidget = new QWidget(RoomInfo);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 1091, 80));
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

        table = new QTableWidget(RoomInfo);
        table->setObjectName("table");
        table->setGeometry(QRect(30, 100, 1081, 511));
        back = new QPushButton(RoomInfo);
        back->setObjectName("back");
        back->setGeometry(QRect(1010, 630, 93, 28));

        retranslateUi(RoomInfo);

        QMetaObject::connectSlotsByName(RoomInfo);
    } // setupUi

    void retranslateUi(QDialog *RoomInfo)
    {
        RoomInfo->setWindowTitle(QCoreApplication::translate("RoomInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RoomInfo", "\346\234\272\346\210\277\344\277\241\346\201\257", nullptr));
        back->setText(QCoreApplication::translate("RoomInfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomInfo: public Ui_RoomInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMINFO_H
