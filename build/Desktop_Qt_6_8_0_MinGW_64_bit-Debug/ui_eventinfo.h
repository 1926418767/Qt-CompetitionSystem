/********************************************************************************
** Form generated from reading UI file 'eventinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTINFO_H
#define UI_EVENTINFO_H

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

class Ui_EventInfo
{
public:
    QTableWidget *table;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *back;

    void setupUi(QDialog *EventInfo)
    {
        if (EventInfo->objectName().isEmpty())
            EventInfo->setObjectName("EventInfo");
        EventInfo->resize(1192, 671);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        EventInfo->setWindowIcon(icon);
        table = new QTableWidget(EventInfo);
        table->setObjectName("table");
        table->setGeometry(QRect(10, 70, 1171, 551));
        horizontalLayoutWidget = new QWidget(EventInfo);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1181, 56));
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

        back = new QPushButton(EventInfo);
        back->setObjectName("back");
        back->setGeometry(QRect(1080, 630, 93, 28));

        retranslateUi(EventInfo);

        QMetaObject::connectSlotsByName(EventInfo);
    } // setupUi

    void retranslateUi(QDialog *EventInfo)
    {
        EventInfo->setWindowTitle(QCoreApplication::translate("EventInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EventInfo", "\350\265\233\344\272\213\344\277\241\346\201\257", nullptr));
        back->setText(QCoreApplication::translate("EventInfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventInfo: public Ui_EventInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTINFO_H
