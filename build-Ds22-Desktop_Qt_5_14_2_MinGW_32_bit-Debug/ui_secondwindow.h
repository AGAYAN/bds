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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *wb;
    QLabel *label_2;
    QLineEdit *mail;
    QPushButton *pushButton;
    QLabel *error2;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(1000, 500);
        SecondWindow->setMinimumSize(QSize(1000, 500));
        SecondWindow->setMaximumSize(QSize(1000, 500));
        SecondWindow->setSizeIncrement(QSize(1000, 500));
        SecondWindow->setBaseSize(QSize(1000, 1000));
        SecondWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(SecondWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 311, 78));
        label->setStyleSheet(QString::fromUtf8("font-size: 34px;"));
        horizontalLayoutWidget = new QWidget(SecondWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 1001, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        wb = new QLineEdit(SecondWindow);
        wb->setObjectName(QString::fromUtf8("wb"));
        wb->setGeometry(QRect(60, 160, 871, 111));
        wb->setStyleSheet(QString::fromUtf8("font-size: 34px;\n"
"display: inline-block;\n"
"	box-sizing: border-box;\n"
"	padding: 1px;\n"
"	margin: 0 15px 15px 0;\n"
"	outline: none;\n"
"	border: 1px solid #F18230;\n"
"	border-radius: 25px;\n"
"	height: 46px;\n"
"	line-height: 0;\n"
"	font-weight: 500;\n"
"	text-decoration: none;\n"
"	background-color: #fff;\n"
"	position: relative;\n"
"	overflow: hidden;\n"
"	vertical-align: top;\n"
"	cursor: pointer;\n"
"	user-select: none;\n"
"	appearance: none;\n"
"	touch-action: manipulation;\n"
"box-shadow: 0 0 0 3px lightskyblue;"));
        label_2 = new QLabel(SecondWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 120, 191, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 24px;"));
        mail = new QLineEdit(SecondWindow);
        mail->setObjectName(QString::fromUtf8("mail"));
        mail->setGeometry(QRect(80, 280, 261, 51));
        mail->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"display: inline-block;\n"
"	box-sizing: border-box;\n"
"	padding: 1px;\n"
"	margin: 0 15px 15px 0;\n"
"	outline: none;\n"
"	border: 1px solid #F18230;\n"
"	border-radius: 25px;\n"
"	height: 46px;\n"
"	line-height: 0;\n"
"	font-weight: 500;\n"
"	text-decoration: none;\n"
"	background-color: #fff;\n"
"	position: relative;\n"
"	overflow: hidden;\n"
"	vertical-align: top;\n"
"	cursor: pointer;\n"
"	user-select: none;\n"
"	appearance: none;\n"
"	touch-action: manipulation;\n"
"box-shadow: 0 0 0 3px lightskyblue;"));
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 330, 851, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 24px;\n"
"display: inline-block;\n"
"	box-sizing: border-box;\n"
"	padding: 1px;\n"
"	margin: 0 15px 15px 0;\n"
"	outline: none;\n"
"	border: 1px solid #F18230;\n"
"	border-radius: 25px;\n"
"	height: 46px;\n"
"	line-height: 0;\n"
"	font-weight: 500;\n"
"	text-decoration: none;\n"
"	background-color: #fff;\n"
"	position: relative;\n"
"	overflow: hidden;\n"
"	vertical-align: top;\n"
"	cursor: pointer;\n"
"	user-select: none;\n"
"	appearance: none;\n"
"	touch-action: manipulation;\n"
"box-shadow: 0 0 0 3px lightskyblue;"));
        error2 = new QLabel(SecondWindow);
        error2->setObjectName(QString::fromUtf8("error2"));
        error2->setGeometry(QRect(80, 390, 831, 21));
        error2->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
""));

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\321\202\320\276 \320\275\320\270\320\261\321\203\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\266\320\260\320\273\320\276\320\261\321\203", nullptr));
        mail->setPlaceholderText(QCoreApplication::translate("SecondWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        error2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
