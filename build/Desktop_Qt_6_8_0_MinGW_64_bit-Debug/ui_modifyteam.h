/********************************************************************************
** Form generated from reading UI file 'modifyteam.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYTEAM_H
#define UI_MODIFYTEAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyTeam
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *e4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QPushButton *m4;
    QLabel *i2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *e1;
    QLabel *label_7;
    QPushButton *m2;
    QSpacerItem *verticalSpacer_10;
    QLineEdit *e2;
    QLabel *label_4;
    QPushButton *m3;
    QLineEdit *e5;
    QLabel *teamId;
    QLabel *label_5;
    QLabel *i3;
    QPushButton *m1;
    QPushButton *m5;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_3;
    QLabel *i4;
    QLineEdit *e3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *i5;
    QLabel *i1;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *confirm;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *revoke;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QDialog *ModifyTeam)
    {
        if (ModifyTeam->objectName().isEmpty())
            ModifyTeam->setObjectName("ModifyTeam");
        ModifyTeam->resize(778, 813);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModifyTeam->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ModifyTeam);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label = new QLabel(ModifyTeam);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        e4 = new QLineEdit(ModifyTeam);
        e4->setObjectName("e4");

        gridLayout->addWidget(e4, 8, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 5, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 9, 2, 1, 1);

        label_6 = new QLabel(ModifyTeam);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setPointSize(14);
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 5, 1, 1);

        label_2 = new QLabel(ModifyTeam);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        m4 = new QPushButton(ModifyTeam);
        m4->setObjectName("m4");
        QFont font2;
        font2.setPointSize(12);
        m4->setFont(font2);

        gridLayout->addWidget(m4, 8, 4, 1, 1);

        i2 = new QLabel(ModifyTeam);
        i2->setObjectName("i2");
        i2->setFont(font1);

        gridLayout->addWidget(i2, 4, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        e1 = new QLineEdit(ModifyTeam);
        e1->setObjectName("e1");

        gridLayout->addWidget(e1, 2, 2, 1, 1);

        label_7 = new QLabel(ModifyTeam);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        m2 = new QPushButton(ModifyTeam);
        m2->setObjectName("m2");
        m2->setFont(font2);

        gridLayout->addWidget(m2, 4, 4, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 1, 2, 1, 1);

        e2 = new QLineEdit(ModifyTeam);
        e2->setObjectName("e2");

        gridLayout->addWidget(e2, 4, 2, 1, 1);

        label_4 = new QLabel(ModifyTeam);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        m3 = new QPushButton(ModifyTeam);
        m3->setObjectName("m3");
        m3->setFont(font2);

        gridLayout->addWidget(m3, 6, 4, 1, 1);

        e5 = new QLineEdit(ModifyTeam);
        e5->setObjectName("e5");

        gridLayout->addWidget(e5, 10, 2, 1, 1);

        teamId = new QLabel(ModifyTeam);
        teamId->setObjectName("teamId");
        teamId->setFont(font1);

        gridLayout->addWidget(teamId, 0, 2, 1, 1);

        label_5 = new QLabel(ModifyTeam);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 10, 1, 1, 1);

        i3 = new QLabel(ModifyTeam);
        i3->setObjectName("i3");
        i3->setFont(font1);

        gridLayout->addWidget(i3, 6, 3, 1, 1);

        m1 = new QPushButton(ModifyTeam);
        m1->setObjectName("m1");
        m1->setFont(font2);

        gridLayout->addWidget(m1, 2, 4, 1, 1);

        m5 = new QPushButton(ModifyTeam);
        m5->setObjectName("m5");
        m5->setFont(font2);

        gridLayout->addWidget(m5, 10, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 3, 2, 1, 1);

        label_3 = new QLabel(ModifyTeam);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 6, 1, 1, 1);

        i4 = new QLabel(ModifyTeam);
        i4->setObjectName("i4");
        i4->setFont(font1);

        gridLayout->addWidget(i4, 8, 3, 1, 1);

        e3 = new QLineEdit(ModifyTeam);
        e3->setObjectName("e3");

        gridLayout->addWidget(e3, 6, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(115, 34, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        i5 = new QLabel(ModifyTeam);
        i5->setObjectName("i5");
        i5->setFont(font1);

        gridLayout->addWidget(i5, 10, 3, 1, 1);

        i1 = new QLabel(ModifyTeam);
        i1->setObjectName("i1");
        i1->setFont(font1);

        gridLayout->addWidget(i1, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        confirm = new QPushButton(ModifyTeam);
        confirm->setObjectName("confirm");
        confirm->setFont(font2);

        horizontalLayout->addWidget(confirm);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        back = new QPushButton(ModifyTeam);
        back->setObjectName("back");
        back->setFont(font2);

        horizontalLayout->addWidget(back);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        revoke = new QPushButton(ModifyTeam);
        revoke->setObjectName("revoke");
        revoke->setFont(font2);
        revoke->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(revoke);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);


        retranslateUi(ModifyTeam);

        QMetaObject::connectSlotsByName(ModifyTeam);
    } // setupUi

    void retranslateUi(QDialog *ModifyTeam)
    {
        ModifyTeam->setWindowTitle(QCoreApplication::translate("ModifyTeam", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\344\274\215\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\344\274\215\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\351\225\277\345\255\246\345\217\267\357\274\232", nullptr));
        m4->setText(QCoreApplication::translate("ModifyTeam", "\344\277\256\346\224\271", nullptr));
        i2->setText(QString());
        label_7->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\344\274\215\347\274\226\345\217\267\357\274\232", nullptr));
        m2->setText(QCoreApplication::translate("ModifyTeam", "\344\277\256\346\224\271", nullptr));
        label_4->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\345\221\2302\345\255\246\345\217\267\357\274\232", nullptr));
        m3->setText(QCoreApplication::translate("ModifyTeam", "\344\277\256\346\224\271", nullptr));
        teamId->setText(QString());
        label_5->setText(QCoreApplication::translate("ModifyTeam", "\346\214\207\345\257\274\350\200\201\345\270\210\345\267\245\345\217\267\357\274\232", nullptr));
        i3->setText(QString());
        m1->setText(QCoreApplication::translate("ModifyTeam", "\344\277\256\346\224\271", nullptr));
        m5->setText(QCoreApplication::translate("ModifyTeam", "\344\277\256\346\224\271", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyTeam", "\351\230\237\345\221\2301\345\255\246\345\217\267\357\274\232", nullptr));
        i4->setText(QString());
        i5->setText(QString());
        i1->setText(QString());
        confirm->setText(QCoreApplication::translate("ModifyTeam", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        back->setText(QCoreApplication::translate("ModifyTeam", "\350\277\224\345\233\236", nullptr));
        revoke->setText(QCoreApplication::translate("ModifyTeam", "\350\247\243\346\225\243\351\230\237\344\274\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyTeam: public Ui_ModifyTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYTEAM_H
