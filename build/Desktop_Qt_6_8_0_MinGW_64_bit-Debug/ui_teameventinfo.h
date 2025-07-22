/********************************************************************************
** Form generated from reading UI file 'teameventinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMEVENTINFO_H
#define UI_TEAMEVENTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeamEventInfo
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *download;
    QLineEdit *find;
    QLabel *label_2;
    QPushButton *btn;

    void setupUi(QDialog *TeamEventInfo)
    {
        if (TeamEventInfo->objectName().isEmpty())
            TeamEventInfo->setObjectName("TeamEventInfo");
        TeamEventInfo->resize(1186, 698);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        TeamEventInfo->setWindowIcon(icon);
        horizontalLayoutWidget = new QWidget(TeamEventInfo);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1171, 80));
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

        table = new QTableWidget(TeamEventInfo);
        table->setObjectName("table");
        table->setGeometry(QRect(10, 160, 1161, 481));
        horizontalLayoutWidget_2 = new QWidget(TeamEventInfo);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(910, 650, 261, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(horizontalLayoutWidget_2);
        back->setObjectName("back");

        horizontalLayout_2->addWidget(back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        download = new QPushButton(horizontalLayoutWidget_2);
        download->setObjectName("download");

        horizontalLayout_2->addWidget(download);

        find = new QLineEdit(TeamEventInfo);
        find->setObjectName("find");
        find->setGeometry(QRect(200, 120, 451, 25));
        label_2 = new QLabel(TeamEventInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 120, 131, 21));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        btn = new QPushButton(TeamEventInfo);
        btn->setObjectName("btn");
        btn->setGeometry(QRect(690, 120, 93, 28));

        retranslateUi(TeamEventInfo);

        QMetaObject::connectSlotsByName(TeamEventInfo);
    } // setupUi

    void retranslateUi(QDialog *TeamEventInfo)
    {
        TeamEventInfo->setWindowTitle(QCoreApplication::translate("TeamEventInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TeamEventInfo", "\351\230\237\344\274\215-\350\265\233\344\272\213 \344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        back->setText(QCoreApplication::translate("TeamEventInfo", "\350\277\224\345\233\236", nullptr));
        download->setText(QCoreApplication::translate("TeamEventInfo", "\345\257\274\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("TeamEventInfo", "\351\230\237\344\274\215\347\274\226\345\217\267\357\274\232", nullptr));
        btn->setText(QCoreApplication::translate("TeamEventInfo", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamEventInfo: public Ui_TeamEventInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMEVENTINFO_H
