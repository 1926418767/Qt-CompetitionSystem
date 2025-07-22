/********************************************************************************
** Form generated from reading UI file 'guideinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDEINFO_H
#define UI_GUIDEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_GuideInfo
{
public:

    void setupUi(QDialog *GuideInfo)
    {
        if (GuideInfo->objectName().isEmpty())
            GuideInfo->setObjectName("GuideInfo");
        GuideInfo->resize(943, 576);

        retranslateUi(GuideInfo);

        QMetaObject::connectSlotsByName(GuideInfo);
    } // setupUi

    void retranslateUi(QDialog *GuideInfo)
    {
        GuideInfo->setWindowTitle(QCoreApplication::translate("GuideInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuideInfo: public Ui_GuideInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDEINFO_H
