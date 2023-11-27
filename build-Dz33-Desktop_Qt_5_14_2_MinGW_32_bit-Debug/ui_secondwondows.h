/********************************************************************************
** Form generated from reading UI file 'secondwondows.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWONDOWS_H
#define UI_SECONDWONDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_secondwondows
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *secondwondows)
    {
        if (secondwondows->objectName().isEmpty())
            secondwondows->setObjectName(QString::fromUtf8("secondwondows"));
        secondwondows->resize(648, 590);
        frame = new QFrame(secondwondows);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(160, 210, 291, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"box-shadow: 0px 10px 30px 0px rgba(0, 0, 0, 4);\n"
"border: 1px solid Red;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 80, 211, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border-radius: 10px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 129, 211, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"  border-radius: 10px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 210, 231, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 25px;\n"
"font-size: 15px;"));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 170, 111, 41));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 10px;\n"
""));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 170, 181, 41));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 10px;\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 260, 111, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(secondwondows);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 50, 291, 171));
        label->setStyleSheet(QString::fromUtf8("box-shadow: 0px 10px 30px 0px rgba(0, 0, 0, 0.5);\n"
"border-radius: 5px;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../f8ff8cfe900c563f8a952c21d3c9406e_300_300.jpeg")));

        retranslateUi(secondwondows);

        QMetaObject::connectSlotsByName(secondwondows);
    } // setupUi

    void retranslateUi(QDialog *secondwondows)
    {
        secondwondows->setWindowTitle(QCoreApplication::translate("secondwondows", "Dialog", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("secondwondows", "Login", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("secondwondows", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwondows", "Login in", nullptr));
        checkBox->setText(QCoreApplication::translate("secondwondows", "Remember", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("secondwondows", "Create account", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class secondwondows: public Ui_secondwondows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWONDOWS_H
