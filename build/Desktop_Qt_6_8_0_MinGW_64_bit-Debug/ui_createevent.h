/********************************************************************************
** Form generated from reading UI file 'createevent.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEEVENT_H
#define UI_CREATEEVENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateEvent
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_7;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QDateTimeEdit *begin;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QSpacerItem *verticalSpacer_3;
    QDateTimeEdit *end;
    QLineEdit *place;
    QComboBox *statue;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *confirm;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *CreateEvent)
    {
        if (CreateEvent->objectName().isEmpty())
            CreateEvent->setObjectName("CreateEvent");
        CreateEvent->resize(531, 590);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateEvent->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CreateEvent);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(CreateEvent);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label_5 = new QLabel(CreateEvent);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setPointSize(14);
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        begin = new QDateTimeEdit(CreateEvent);
        begin->setObjectName("begin");

        gridLayout->addWidget(begin, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        label_6 = new QLabel(CreateEvent);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_3 = new QLabel(CreateEvent);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 8, 1, 1, 1);

        label_4 = new QLabel(CreateEvent);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 1, 1, 1);

        name = new QLineEdit(CreateEvent);
        name->setObjectName("name");

        gridLayout->addWidget(name, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        end = new QDateTimeEdit(CreateEvent);
        end->setObjectName("end");

        gridLayout->addWidget(end, 4, 2, 1, 1);

        place = new QLineEdit(CreateEvent);
        place->setObjectName("place");

        gridLayout->addWidget(place, 6, 2, 1, 1);

        statue = new QComboBox(CreateEvent);
        statue->setObjectName("statue");

        gridLayout->addWidget(statue, 8, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        label_2 = new QLabel(CreateEvent);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        confirm = new QPushButton(CreateEvent);
        confirm->setObjectName("confirm");

        horizontalLayout_2->addWidget(confirm);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        back = new QPushButton(CreateEvent);
        back->setObjectName("back");

        horizontalLayout_2->addWidget(back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        retranslateUi(CreateEvent);

        QMetaObject::connectSlotsByName(CreateEvent);
    } // setupUi

    void retranslateUi(QDialog *CreateEvent)
    {
        CreateEvent->setWindowTitle(QCoreApplication::translate("CreateEvent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateEvent", "\346\226\260\345\273\272\350\265\233\344\272\213", nullptr));
        label_5->setText(QCoreApplication::translate("CreateEvent", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("CreateEvent", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("CreateEvent", "\350\265\233\344\272\213\347\212\266\346\200\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("CreateEvent", "\350\265\233\344\272\213\345\234\260\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CreateEvent", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        confirm->setText(QCoreApplication::translate("CreateEvent", "\346\226\260\345\273\272", nullptr));
        back->setText(QCoreApplication::translate("CreateEvent", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateEvent: public Ui_CreateEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEEVENT_H
