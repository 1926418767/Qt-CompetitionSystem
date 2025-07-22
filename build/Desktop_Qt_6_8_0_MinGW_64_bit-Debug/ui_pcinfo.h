/********************************************************************************
** Form generated from reading UI file 'pcinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCINFO_H
#define UI_PCINFO_H

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

class Ui_PCInfo
{
public:
    QTableWidget *table;
    QPushButton *back;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *PCInfo)
    {
        if (PCInfo->objectName().isEmpty())
            PCInfo->setObjectName("PCInfo");
        PCInfo->resize(1064, 664);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        PCInfo->setWindowIcon(icon);
        table = new QTableWidget(PCInfo);
        table->setObjectName("table");
        table->setGeometry(QRect(40, 100, 981, 481));
        back = new QPushButton(PCInfo);
        back->setObjectName("back");
        back->setGeometry(QRect(930, 610, 93, 28));
        horizontalLayoutWidget = new QWidget(PCInfo);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 1021, 56));
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


        retranslateUi(PCInfo);

        QMetaObject::connectSlotsByName(PCInfo);
    } // setupUi

    void retranslateUi(QDialog *PCInfo)
    {
        PCInfo->setWindowTitle(QCoreApplication::translate("PCInfo", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("PCInfo", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("PCInfo", "\347\224\265\350\204\221\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCInfo: public Ui_PCInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCINFO_H
