/********************************************************************************
** Form generated from reading UI file 'stuinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFO_H
#define UI_STUINFO_H

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

class Ui_stuInfo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QPushButton *m5;
    QPushButton *m6;
    QLineEdit *l6;
    QLineEdit *l3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QPushButton *m1;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QPushButton *m3;
    QLineEdit *l2;
    QLineEdit *l5;
    QLabel *label_6;
    QLineEdit *l4;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_6;
    QPushButton *m2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *l1;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QPushButton *m4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *save;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *stuInfo)
    {
        if (stuInfo->objectName().isEmpty())
            stuInfo->setObjectName("stuInfo");
        stuInfo->resize(615, 639);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        stuInfo->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(stuInfo);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label = new QLabel(stuInfo);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 9, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 7, 2, 1, 1);

        m5 = new QPushButton(stuInfo);
        m5->setObjectName("m5");
        QFont font1;
        font1.setPointSize(10);
        m5->setFont(font1);

        gridLayout->addWidget(m5, 8, 4, 1, 1);

        m6 = new QPushButton(stuInfo);
        m6->setObjectName("m6");
        m6->setFont(font1);

        gridLayout->addWidget(m6, 10, 4, 1, 1);

        l6 = new QLineEdit(stuInfo);
        l6->setObjectName("l6");

        gridLayout->addWidget(l6, 10, 2, 1, 1);

        l3 = new QLineEdit(stuInfo);
        l3->setObjectName("l3");

        gridLayout->addWidget(l3, 4, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 2, 1, 1);

        label_3 = new QLabel(stuInfo);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(14);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        m1 = new QPushButton(stuInfo);
        m1->setObjectName("m1");
        m1->setFont(font1);

        gridLayout->addWidget(m1, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label_5 = new QLabel(stuInfo);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        m3 = new QPushButton(stuInfo);
        m3->setObjectName("m3");
        m3->setFont(font1);

        gridLayout->addWidget(m3, 4, 4, 1, 1);

        l2 = new QLineEdit(stuInfo);
        l2->setObjectName("l2");

        gridLayout->addWidget(l2, 2, 2, 1, 1);

        l5 = new QLineEdit(stuInfo);
        l5->setObjectName("l5");

        gridLayout->addWidget(l5, 8, 2, 1, 1);

        label_6 = new QLabel(stuInfo);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 8, 1, 1, 1);

        l4 = new QLineEdit(stuInfo);
        l4->setObjectName("l4");

        gridLayout->addWidget(l4, 6, 2, 1, 1);

        label_4 = new QLabel(stuInfo);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 5, 2, 1, 1);

        m2 = new QPushButton(stuInfo);
        m2->setObjectName("m2");
        m2->setFont(font1);

        gridLayout->addWidget(m2, 2, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 2, 1, 1);

        l1 = new QLineEdit(stuInfo);
        l1->setObjectName("l1");

        gridLayout->addWidget(l1, 0, 2, 1, 1);

        label_2 = new QLabel(stuInfo);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_7 = new QLabel(stuInfo);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 10, 1, 1, 1);

        m4 = new QPushButton(stuInfo);
        m4->setObjectName("m4");
        m4->setFont(font1);

        gridLayout->addWidget(m4, 6, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        save = new QPushButton(stuInfo);
        save->setObjectName("save");
        save->setFont(font1);

        horizontalLayout->addWidget(save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(stuInfo);
        back->setObjectName("back");
        back->setFont(font1);

        horizontalLayout->addWidget(back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(stuInfo);

        QMetaObject::connectSlotsByName(stuInfo);
    } // setupUi

    void retranslateUi(QDialog *stuInfo)
    {
        stuInfo->setWindowTitle(QCoreApplication::translate("stuInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("stuInfo", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        m5->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        m6->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        label_3->setText(QCoreApplication::translate("stuInfo", "\345\247\223\345\220\215\357\274\232", nullptr));
        m1->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("stuInfo", "\351\202\256\347\256\261\357\274\232", nullptr));
        m3->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("stuInfo", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("stuInfo", "\346\200\247\345\210\253\357\274\232", nullptr));
        m2->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        label_2->setText(QCoreApplication::translate("stuInfo", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("stuInfo", "\346\211\200\345\234\250\351\230\237\344\274\215\347\274\226\345\217\267\357\274\232", nullptr));
        m4->setText(QCoreApplication::translate("stuInfo", "\344\277\256\346\224\271", nullptr));
        save->setText(QCoreApplication::translate("stuInfo", "\344\277\235\345\255\230", nullptr));
        back->setText(QCoreApplication::translate("stuInfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stuInfo: public Ui_stuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFO_H
