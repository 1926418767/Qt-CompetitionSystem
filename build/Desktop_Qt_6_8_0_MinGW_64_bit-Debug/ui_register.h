/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *register_1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *return_1;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *userNameLabel;
    QLineEdit *idEdit;
    QLabel *label_9;
    QLineEdit *passwordEdit;
    QLabel *passwordAgain;
    QLabel *label_8;
    QLineEdit *passwordAgainEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *passwordLabel;
    QLineEdit *userNameEdit;
    QLabel *label_3;
    QLabel *phoneLabel;
    QLabel *idLabel;
    QLineEdit *phoneEdit;
    QLabel *heading;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *student;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *teacher;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(498, 330);
        Register->setMinimumSize(QSize(498, 330));
        Register->setMaximumSize(QSize(498, 330));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/acm.png"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        widget_4 = new QWidget(Register);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 270, 463, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        register_1 = new QPushButton(widget_4);
        register_1->setObjectName("register_1");
        register_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(register_1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        return_1 = new QPushButton(widget_4);
        return_1->setObjectName("return_1");
        return_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(return_1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        exit = new QPushButton(widget_4);
        exit->setObjectName("exit");
        exit->setEnabled(true);
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(exit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget = new QWidget(Register);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 67, 411, 138));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        userNameLabel = new QLabel(widget);
        userNameLabel->setObjectName("userNameLabel");
        QFont font;
        font.setPointSize(12);
        userNameLabel->setFont(font);

        gridLayout->addWidget(userNameLabel, 2, 0, 1, 1);

        idEdit = new QLineEdit(widget);
        idEdit->setObjectName("idEdit");
        QFont font1;
        font1.setPointSize(9);
        idEdit->setFont(font1);

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 4, 1, 1, 1);

        passwordAgain = new QLabel(widget);
        passwordAgain->setObjectName("passwordAgain");
        passwordAgain->setFont(font);

        gridLayout->addWidget(passwordAgain, 5, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        passwordAgainEdit = new QLineEdit(widget);
        passwordAgainEdit->setObjectName("passwordAgainEdit");
        passwordAgainEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordAgainEdit, 5, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_2, 4, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label, 3, 2, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 4, 0, 1, 1);

        userNameEdit = new QLineEdit(widget);
        userNameEdit->setObjectName("userNameEdit");
        userNameEdit->setFont(font1);
        userNameEdit->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(userNameEdit, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_3, 5, 2, 1, 1);

        phoneLabel = new QLabel(widget);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setFont(font);

        gridLayout->addWidget(phoneLabel, 3, 0, 1, 1);

        idLabel = new QLabel(widget);
        idLabel->setObjectName("idLabel");
        idLabel->setFont(font);

        gridLayout->addWidget(idLabel, 0, 0, 1, 1);

        phoneEdit = new QLineEdit(widget);
        phoneEdit->setObjectName("phoneEdit");
        phoneEdit->setFont(font1);

        gridLayout->addWidget(phoneEdit, 3, 1, 1, 1);

        heading = new QLabel(Register);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(20, 20, 454, 42));
        QFont font3;
        font3.setPointSize(20);
        heading->setFont(font3);
        heading->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Register);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(51, 200, 241, 19));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 240, 481, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        student = new QRadioButton(layoutWidget);
        student->setObjectName("student");

        horizontalLayout->addWidget(student);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        teacher = new QRadioButton(layoutWidget);
        teacher->setObjectName("teacher");

        horizontalLayout->addWidget(teacher);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        register_1->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        return_1->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        exit->setText(QCoreApplication::translate("Register", "\351\200\200\345\207\272", nullptr));
        userNameLabel->setText(QCoreApplication::translate("Register", "\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        idEdit->setPlaceholderText(QCoreApplication::translate("Register", "\344\273\205\346\225\260\345\255\227\347\273\204\346\210\220", nullptr));
        label_9->setText(QCoreApplication::translate("Register", "\357\274\201", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("Register", "\344\273\205\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\343\200\201\347\211\271\346\256\212\345\255\227\347\254\246\347\273\204\346\210\220\357\274\214\344\270\215\345\260\217\344\272\2166\344\275\215", nullptr));
        passwordAgain->setText(QCoreApplication::translate("Register", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Register", "\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "\357\274\201", nullptr));
        label->setText(QCoreApplication::translate("Register", "\357\274\201", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Register", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        userNameEdit->setPlaceholderText(QString());
        label_3->setText(QCoreApplication::translate("Register", "\357\274\201", nullptr));
        phoneLabel->setText(QCoreApplication::translate("Register", "\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        idLabel->setText(QCoreApplication::translate("Register", "\350\276\223\345\205\245\345\255\246\345\217\267/\346\225\231\345\270\210\345\267\245\345\217\267\357\274\232", nullptr));
        phoneEdit->setPlaceholderText(QCoreApplication::translate("Register", "\344\273\205\346\225\260\345\255\227\347\273\204\346\210\220", nullptr));
        heading->setText(QCoreApplication::translate("Register", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_7->setText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\345\220\215\344\270\216\345\257\206\347\240\201\345\235\207\344\270\215\350\203\275\350\266\205\350\277\20716\344\270\252\345\255\227\347\254\246", nullptr));
        student->setText(QCoreApplication::translate("Register", "\345\255\246\347\224\237", nullptr));
        teacher->setText(QCoreApplication::translate("Register", "\346\214\207\345\257\274\350\200\201\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
