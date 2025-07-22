/********************************************************************************
** Form generated from reading UI file 'createteam.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEAM_H
#define UI_CREATETEAM_H

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

class Ui_CreateTeam
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_8;
    QGridLayout *gridLayout;
    QLabel *captain;
    QSpacerItem *verticalSpacer_5;
    QLabel *captainName;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *teamName;
    QLineEdit *stu2id;
    QLineEdit *stu1id;
    QLineEdit *teacherId;
    QSpacerItem *verticalSpacer_4;
    QLabel *team;
    QLabel *stu1;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *stu2;
    QLabel *teacher;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *create;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *CreateTeam)
    {
        if (CreateTeam->objectName().isEmpty())
            CreateTeam->setObjectName("CreateTeam");
        CreateTeam->resize(708, 722);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateTeam->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CreateTeam);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label = new QLabel(CreateTeam);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        captain = new QLabel(CreateTeam);
        captain->setObjectName("captain");
        QFont font1;
        font1.setPointSize(14);
        captain->setFont(font1);

        gridLayout->addWidget(captain, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        captainName = new QLabel(CreateTeam);
        captainName->setObjectName("captainName");
        captainName->setFont(font1);

        gridLayout->addWidget(captainName, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        teamName = new QLineEdit(CreateTeam);
        teamName->setObjectName("teamName");

        gridLayout->addWidget(teamName, 2, 2, 1, 1);

        stu2id = new QLineEdit(CreateTeam);
        stu2id->setObjectName("stu2id");

        gridLayout->addWidget(stu2id, 6, 2, 1, 1);

        stu1id = new QLineEdit(CreateTeam);
        stu1id->setObjectName("stu1id");

        gridLayout->addWidget(stu1id, 4, 2, 1, 1);

        teacherId = new QLineEdit(CreateTeam);
        teacherId->setObjectName("teacherId");

        gridLayout->addWidget(teacherId, 8, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 1, 1, 1);

        team = new QLabel(CreateTeam);
        team->setObjectName("team");
        team->setFont(font1);

        gridLayout->addWidget(team, 2, 1, 1, 1);

        stu1 = new QLabel(CreateTeam);
        stu1->setObjectName("stu1");
        stu1->setFont(font1);

        gridLayout->addWidget(stu1, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 1, 1, 1);

        stu2 = new QLabel(CreateTeam);
        stu2->setObjectName("stu2");
        stu2->setFont(font1);

        gridLayout->addWidget(stu2, 6, 1, 1, 1);

        teacher = new QLabel(CreateTeam);
        teacher->setObjectName("teacher");
        teacher->setFont(font1);

        gridLayout->addWidget(teacher, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        create = new QPushButton(CreateTeam);
        create->setObjectName("create");
        QFont font2;
        font2.setPointSize(10);
        create->setFont(font2);

        horizontalLayout->addWidget(create);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        back = new QPushButton(CreateTeam);
        back->setObjectName("back");
        back->setFont(font2);

        horizontalLayout->addWidget(back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);


        retranslateUi(CreateTeam);

        QMetaObject::connectSlotsByName(CreateTeam);
    } // setupUi

    void retranslateUi(QDialog *CreateTeam)
    {
        CreateTeam->setWindowTitle(QCoreApplication::translate("CreateTeam", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateTeam", "\345\210\233\345\273\272\351\230\237\344\274\215", nullptr));
        captain->setText(QCoreApplication::translate("CreateTeam", "\351\230\237\351\225\277\357\274\232", nullptr));
        captainName->setText(QCoreApplication::translate("CreateTeam", "TextLabel", nullptr));
        team->setText(QCoreApplication::translate("CreateTeam", "\351\230\237\344\274\215\345\220\215\347\247\260\357\274\232", nullptr));
        stu1->setText(QCoreApplication::translate("CreateTeam", "\351\230\237\345\221\2301\345\255\246\345\217\267\357\274\232", nullptr));
        stu2->setText(QCoreApplication::translate("CreateTeam", "\351\230\237\345\221\2302\345\255\246\345\217\267\357\274\232", nullptr));
        teacher->setText(QCoreApplication::translate("CreateTeam", "\346\214\207\345\257\274\350\200\201\345\270\210\346\225\231\345\267\245\345\217\267\357\274\232", nullptr));
        create->setText(QCoreApplication::translate("CreateTeam", "\345\210\233\345\273\272", nullptr));
        back->setText(QCoreApplication::translate("CreateTeam", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTeam: public Ui_CreateTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEAM_H
