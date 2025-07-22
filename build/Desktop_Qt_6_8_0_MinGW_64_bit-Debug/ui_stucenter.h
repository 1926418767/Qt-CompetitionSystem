/********************************************************************************
** Form generated from reading UI file 'stucenter.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCENTER_H
#define UI_STUCENTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuCenter
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *personalCenter;
    QLabel *signOut;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *create;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *info;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *modify;
    QSpacerItem *horizontalSpacer;
    QPushButton *enroll;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *StuCenter)
    {
        if (StuCenter->objectName().isEmpty())
            StuCenter->setObjectName("StuCenter");
        StuCenter->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        StuCenter->setWindowIcon(icon);
        widget = new QWidget(StuCenter);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 3, 1514, 133));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        title = new QLabel(widget);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(34);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        title->setFont(font);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    letter-spacing: 30px; /* \350\256\276\347\275\256\345\255\227\351\227\264\350\267\235\344\270\2722\345\203\217\347\264\240 */\n"
"}"));
        title->setLineWidth(1);

        horizontalLayout_3->addWidget(title);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        personalCenter = new QLabel(widget_4);
        personalCenter->setObjectName("personalCenter");
        personalCenter->setMaximumSize(QSize(80, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        personalCenter->setFont(font2);
        personalCenter->setCursor(QCursor(Qt::OpenHandCursor));
        personalCenter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        personalCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(personalCenter);

        signOut = new QLabel(widget_4);
        signOut->setObjectName("signOut");
        signOut->setMaximumSize(QSize(80, 16777215));
        signOut->setFont(font2);
        signOut->setCursor(QCursor(Qt::OpenHandCursor));
        signOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        signOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(signOut);


        horizontalLayout_3->addWidget(widget_4);

        widget_2 = new QWidget(StuCenter);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 231, 1514, 272));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        create = new QPushButton(widget_2);
        create->setObjectName("create");
        create->setMinimumSize(QSize(250, 250));
        create->setMaximumSize(QSize(250, 250));
        create->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setPointSize(20);
        create->setFont(font3);
        create->setFocusPolicy(Qt::NoFocus);
        create->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(create);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        info = new QPushButton(widget_2);
        info->setObjectName("info");
        info->setMinimumSize(QSize(250, 250));
        info->setMaximumSize(QSize(250, 250));
        info->setFont(font3);
        info->setFocusPolicy(Qt::NoFocus);
        info->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(info);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        modify = new QPushButton(widget_2);
        modify->setObjectName("modify");
        modify->setMinimumSize(QSize(250, 250));
        modify->setMaximumSize(QSize(250, 250));
        modify->setFont(font3);
        modify->setFocusPolicy(Qt::NoFocus);
        modify->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(modify);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        enroll = new QPushButton(widget_2);
        enroll->setObjectName("enroll");
        enroll->setMinimumSize(QSize(250, 250));
        enroll->setMaximumSize(QSize(250, 250));
        enroll->setFont(font3);
        enroll->setFocusPolicy(Qt::NoFocus);
        enroll->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(enroll);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        widget_3 = new QWidget(StuCenter);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 510, 1514, 272));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        retranslateUi(StuCenter);

        QMetaObject::connectSlotsByName(StuCenter);
    } // setupUi

    void retranslateUi(QDialog *StuCenter)
    {
        StuCenter->setWindowTitle(QCoreApplication::translate("StuCenter", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("StuCenter", "\347\253\236\350\265\233\347\263\273\347\273\237\345\255\246\347\224\237\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("StuCenter", "\347\224\250\346\210\267\357\274\232", nullptr));
        personalCenter->setText(QCoreApplication::translate("StuCenter", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        signOut->setText(QCoreApplication::translate("StuCenter", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        create->setText(QCoreApplication::translate("StuCenter", "\345\210\233\345\273\272\351\230\237\344\274\215", nullptr));
        info->setText(QCoreApplication::translate("StuCenter", "\351\230\237\344\274\215\344\277\241\346\201\257", nullptr));
        modify->setText(QCoreApplication::translate("StuCenter", "\344\277\256\346\224\271\351\230\237\344\274\215\344\277\241\346\201\257", nullptr));
        enroll->setText(QCoreApplication::translate("StuCenter", "\346\212\245\345\220\215\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuCenter: public Ui_StuCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCENTER_H
