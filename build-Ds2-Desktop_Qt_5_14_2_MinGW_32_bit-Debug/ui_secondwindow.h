/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Secondwindow
{
public:

    void setupUi(QDialog *Secondwindow)
    {
        if (Secondwindow->objectName().isEmpty())
            Secondwindow->setObjectName(QString::fromUtf8("Secondwindow"));
        Secondwindow->resize(500, 600);
        Secondwindow->setMinimumSize(QSize(500, 600));
        Secondwindow->setMaximumSize(QSize(500, 600));
        Secondwindow->setBaseSize(QSize(500, 600));
        Secondwindow->setStyleSheet(QString::fromUtf8("resizeMode: fixed"));

        retranslateUi(Secondwindow);

        QMetaObject::connectSlotsByName(Secondwindow);
    } // setupUi

    void retranslateUi(QDialog *Secondwindow)
    {
        Secondwindow->setWindowTitle(QCoreApplication::translate("Secondwindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Secondwindow: public Ui_Secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
