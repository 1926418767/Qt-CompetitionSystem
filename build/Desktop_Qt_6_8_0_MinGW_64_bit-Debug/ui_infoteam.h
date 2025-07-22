/********************************************************************************
** Form generated from reading UI file 'infoteam.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOTEAM_H
#define UI_INFOTEAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoTeam
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *teamId;
    QLabel *teamName;
    QTableWidget *table;
    QSpacerItem *verticalSpacer_2;
    QPushButton *back;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *InfoTeam)
    {
        if (InfoTeam->objectName().isEmpty())
            InfoTeam->setObjectName("InfoTeam");
        InfoTeam->resize(1074, 871);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        InfoTeam->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(InfoTeam);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(InfoTeam);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        teamId = new QLabel(InfoTeam);
        teamId->setObjectName("teamId");
        QFont font1;
        font1.setPointSize(14);
        teamId->setFont(font1);

        verticalLayout->addWidget(teamId);

        teamName = new QLabel(InfoTeam);
        teamName->setObjectName("teamName");
        teamName->setFont(font1);

        verticalLayout->addWidget(teamName);

        table = new QTableWidget(InfoTeam);
        table->setObjectName("table");

        verticalLayout->addWidget(table);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        back = new QPushButton(InfoTeam);
        back->setObjectName("back");
        back->setFont(font1);

        verticalLayout->addWidget(back);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(InfoTeam);

        QMetaObject::connectSlotsByName(InfoTeam);
    } // setupUi

    void retranslateUi(QDialog *InfoTeam)
    {
        InfoTeam->setWindowTitle(QCoreApplication::translate("InfoTeam", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoTeam", "\351\230\237\344\274\215\344\277\241\346\201\257", nullptr));
        teamId->setText(QCoreApplication::translate("InfoTeam", "\351\230\237\344\274\215\347\274\226\345\217\267\357\274\232", nullptr));
        teamName->setText(QCoreApplication::translate("InfoTeam", "\351\230\237\344\274\215\345\220\215\347\247\260\357\274\232", nullptr));
        back->setText(QCoreApplication::translate("InfoTeam", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoTeam: public Ui_InfoTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOTEAM_H
