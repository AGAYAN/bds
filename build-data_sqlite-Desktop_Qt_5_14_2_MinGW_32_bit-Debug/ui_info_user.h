/********************************************************************************
** Form generated from reading UI file 'info_user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_USER_H
#define UI_INFO_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info_user
{
public:

    void setupUi(QWidget *info_user)
    {
        if (info_user->objectName().isEmpty())
            info_user->setObjectName(QString::fromUtf8("info_user"));
        info_user->resize(516, 417);

        retranslateUi(info_user);

        QMetaObject::connectSlotsByName(info_user);
    } // setupUi

    void retranslateUi(QWidget *info_user)
    {
        info_user->setWindowTitle(QCoreApplication::translate("info_user", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info_user: public Ui_info_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_USER_H
