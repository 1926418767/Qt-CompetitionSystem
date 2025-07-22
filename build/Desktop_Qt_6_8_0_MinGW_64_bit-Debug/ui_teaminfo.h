/********************************************************************************
** Form generated from reading UI file 'teaminfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMINFO_H
#define UI_TEAMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TeamInfo
{
public:

    void setupUi(QDialog *TeamInfo)
    {
        if (TeamInfo->objectName().isEmpty())
            TeamInfo->setObjectName("TeamInfo");
        TeamInfo->resize(915, 752);

        retranslateUi(TeamInfo);

        QMetaObject::connectSlotsByName(TeamInfo);
    } // setupUi

    void retranslateUi(QDialog *TeamInfo)
    {
        TeamInfo->setWindowTitle(QCoreApplication::translate("TeamInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamInfo: public Ui_TeamInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMINFO_H
