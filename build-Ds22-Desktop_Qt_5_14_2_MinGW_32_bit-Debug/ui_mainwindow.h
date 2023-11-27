/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QLabel *error;
    QLineEdit *lineEdit;
    QLineEdit *passworld;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 464);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 190, 261, 221));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 170, 91, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("display: block;	\n"
"	box-sizing: border-box;\n"
"	padding: 0 25px;    \n"
"	height: 42px;\n"
"	line-height: 38px;    \n"
"	border: 1px solid #F18230;\n"
"	border-radius: 25px;    \n"
"	font-size: 14px;\n"
"	color: #FFFFFF;\n"
"	text-align: center;\n"
"	font-weight: 600;\n"
"color: #000000\n"
""));
        error = new QLabel(groupBox);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(30, 140, 201, 21));
        error->setStyleSheet(QString::fromUtf8("font-size: 11px;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 201, 51));
        passworld = new QLineEdit(groupBox);
        passworld->setObjectName(QString::fromUtf8("passworld"));
        passworld->setGeometry(QRect(30, 90, 201, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 0, 101, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #555555;\n"
"background-color: #ffffff; /* Green */\n"
"    border: none;\n"
"margin: 4px 4px;\n"
"border-radius: 5%;\n"
"    color: white;\n"
"    padding: 10px 10px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 14px;\n"
"    cursor: pointer;\n"
"color: hsla(#000000);\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 101, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #555555;\n"
"background-color: #ffffff; /* Green */\n"
"    border: none;\n"
"margin: 4px 4px;\n"
"border-radius: 5%;\n"
"    color: white;\n"
"    padding: 10px 10px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 14px;\n"
"    cursor: pointer;\n"
"color: hsla(#000000);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 241, 141));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 405, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        error->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        passworld->setPlaceholderText(QCoreApplication::translate("MainWindow", "Passworld", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\321\200\320\275\321\213\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\273\321\213\320\271", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
