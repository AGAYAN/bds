/********************************************************************************
** Form generated from reading UI file 'seconwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONWINDOW_H
#define UI_SECONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_seconwindow
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QDialog *seconwindow)
    {
        if (seconwindow->objectName().isEmpty())
            seconwindow->setObjectName(QString::fromUtf8("seconwindow"));
        seconwindow->resize(629, 577);
        frame = new QFrame(seconwindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(140, 190, 291, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"box-shadow: 0px 10px 30px 0px rgba(0, 0, 0, 4);\n"
"border: 1px solid Red;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 130, 211, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border-radius: 10px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 180, 211, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"  border-radius: 10px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 230, 231, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 25px;\n"
"font-size: 15px;"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 80, 211, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border-radius: 10px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 30, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 280, 211, 51));
        label = new QLabel(seconwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 291, 171));
        label->setStyleSheet(QString::fromUtf8("box-shadow: 0px 10px 30px 0px rgba(0, 0, 0, 0.5);\n"
"border-radius: 5px;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../f8ff8cfe900c563f8a952c21d3c9406e_300_300.jpeg")));

        retranslateUi(seconwindow);

        QMetaObject::connectSlotsByName(seconwindow);
    } // setupUi

    void retranslateUi(QDialog *seconwindow)
    {
        seconwindow->setWindowTitle(QCoreApplication::translate("seconwindow", "Dialog", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("seconwindow", "Password", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("seconwindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("seconwindow", "Create", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("seconwindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("seconwindow", "Registration", nullptr));
        label_3->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class seconwindow: public Ui_seconwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONWINDOW_H
