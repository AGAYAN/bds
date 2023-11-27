/********************************************************************************
** Form generated from reading UI file 'secondwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW2_H
#define UI_SECONDWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow2
{
public:
    QLabel *label;

    void setupUi(QDialog *SecondWindow2)
    {
        if (SecondWindow2->objectName().isEmpty())
            SecondWindow2->setObjectName(QString::fromUtf8("SecondWindow2"));
        SecondWindow2->resize(390, 300);
        label = new QLabel(SecondWindow2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 130, 221, 16));

        retranslateUi(SecondWindow2);

        QMetaObject::connectSlotsByName(SecondWindow2);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow2)
    {
        SecondWindow2->setWindowTitle(QCoreApplication::translate("SecondWindow2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow2", "\320\220\320\272\321\202\320\270\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276 \320\264\320\276 \321\215\321\202\320\276-\320\263\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow2: public Ui_SecondWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW2_H
