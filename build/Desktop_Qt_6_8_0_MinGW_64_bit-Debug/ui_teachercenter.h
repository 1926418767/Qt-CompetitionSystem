/********************************************************************************
** Form generated from reading UI file 'teachercenter.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERCENTER_H
#define UI_TEACHERCENTER_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherCenter
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTableWidget *table;
    QPushButton *download;

    void setupUi(QDialog *teacherCenter)
    {
        if (teacherCenter->objectName().isEmpty())
            teacherCenter->setObjectName("teacherCenter");
        teacherCenter->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        teacherCenter->setWindowIcon(icon);
        widget = new QWidget(teacherCenter);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 3, 1514, 133));
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

        horizontalLayoutWidget = new QWidget(teacherCenter);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 140, 263, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setPointSize(14);
        label_2->setFont(font3);

        horizontalLayout->addWidget(label_2);

        table = new QTableWidget(teacherCenter);
        table->setObjectName("table");
        table->setGeometry(QRect(40, 240, 1471, 511));
        download = new QPushButton(teacherCenter);
        download->setObjectName("download");
        download->setGeometry(QRect(1420, 760, 93, 28));

        retranslateUi(teacherCenter);

        QMetaObject::connectSlotsByName(teacherCenter);
    } // setupUi

    void retranslateUi(QDialog *teacherCenter)
    {
        teacherCenter->setWindowTitle(QCoreApplication::translate("teacherCenter", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("teacherCenter", "\347\253\236\350\265\233\347\263\273\347\273\237\350\200\201\345\270\210\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("teacherCenter", "\347\224\250\346\210\267\357\274\232", nullptr));
        personalCenter->setText(QCoreApplication::translate("teacherCenter", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        signOut->setText(QCoreApplication::translate("teacherCenter", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        label_2->setText(QCoreApplication::translate("teacherCenter", "\345\205\250\351\203\250\346\214\207\345\257\274\351\230\237\344\274\215\344\277\241\346\201\257\357\274\232", nullptr));
        download->setText(QCoreApplication::translate("teacherCenter", "\345\257\274\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherCenter: public Ui_teacherCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERCENTER_H
