/********************************************************************************
** Form generated from reading UI file 'info_users.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_USERS_H
#define UI_INFO_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info_users
{
public:

    void setupUi(QWidget *info_users)
    {
        if (info_users->objectName().isEmpty())
            info_users->setObjectName(QString::fromUtf8("info_users"));
        info_users->resize(555, 405);

        retranslateUi(info_users);

        QMetaObject::connectSlotsByName(info_users);
    } // setupUi

    void retranslateUi(QWidget *info_users)
    {
        info_users->setWindowTitle(QCoreApplication::translate("info_users", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info_users: public Ui_info_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_USERS_H
