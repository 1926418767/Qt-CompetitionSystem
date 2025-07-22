/********************************************************************************
** Form generated from reading UI file 'addpc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPC_H
#define UI_ADDPC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPC
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *name1;
    QPushButton *add1;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QLineEdit *name2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *pc;
    QLabel *label_6;
    QLineEdit *ip;
    QSpacerItem *verticalSpacer_7;
    QComboBox *statue;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *add2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AddPC)
    {
        if (AddPC->objectName().isEmpty())
            AddPC->setObjectName("AddPC");
        AddPC->resize(568, 705);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddPC->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddPC);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(AddPC);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(25);
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(AddPC);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        name1 = new QLineEdit(AddPC);
        name1->setObjectName("name1");

        horizontalLayout_3->addWidget(name1);

        add1 = new QPushButton(AddPC);
        add1->setObjectName("add1");

        horizontalLayout_3->addWidget(add1);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        name2 = new QLineEdit(AddPC);
        name2->setObjectName("name2");

        gridLayout->addWidget(name2, 4, 1, 1, 1);

        label_4 = new QLabel(AddPC);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_2 = new QLabel(AddPC);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(AddPC);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 1, 1, 1, 1);

        pc = new QLineEdit(AddPC);
        pc->setObjectName("pc");

        gridLayout->addWidget(pc, 0, 1, 1, 1);

        label_6 = new QLabel(AddPC);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        ip = new QLineEdit(AddPC);
        ip->setObjectName("ip");

        gridLayout->addWidget(ip, 2, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 5, 1, 1, 1);

        statue = new QComboBox(AddPC);
        statue->setObjectName("statue");

        gridLayout->addWidget(statue, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        add2 = new QPushButton(AddPC);
        add2->setObjectName("add2");

        horizontalLayout_2->addWidget(add2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        back = new QPushButton(AddPC);
        back->setObjectName("back");

        horizontalLayout_2->addWidget(back);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AddPC);

        QMetaObject::connectSlotsByName(AddPC);
    } // setupUi

    void retranslateUi(QDialog *AddPC)
    {
        AddPC->setWindowTitle(QCoreApplication::translate("AddPC", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("AddPC", "\346\226\260\345\273\272\346\234\272\346\210\277/\347\224\265\350\204\221", nullptr));
        label->setText(QCoreApplication::translate("AddPC", "\346\234\272\346\210\277\347\274\226\345\217\267\357\274\232", nullptr));
        add1->setText(QCoreApplication::translate("AddPC", "\346\226\260\345\242\236\346\234\272\346\210\277", nullptr));
        label_4->setText(QCoreApplication::translate("AddPC", "\350\256\276\345\244\207\347\212\266\346\200\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddPC", "\347\224\265\350\204\221\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddPC", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("AddPC", "\346\211\200\345\234\250\346\234\272\346\210\277\347\274\226\345\217\267\357\274\232", nullptr));
        add2->setText(QCoreApplication::translate("AddPC", "\346\226\260\345\242\236\347\224\265\350\204\221", nullptr));
        back->setText(QCoreApplication::translate("AddPC", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPC: public Ui_AddPC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPC_H
