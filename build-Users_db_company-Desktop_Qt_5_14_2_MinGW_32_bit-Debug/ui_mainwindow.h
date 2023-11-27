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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_Login;
    QLineEdit *lineEdit_passworld;
    QLineEdit *lineEdit_number_phone;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Push_add;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(335, 230);
        MainWindow->setMinimumSize(QSize(335, 230));
        MainWindow->setMaximumSize(QSize(335, 230));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_Login = new QLineEdit(centralwidget);
        lineEdit_Login->setObjectName(QString::fromUtf8("lineEdit_Login"));
        lineEdit_Login->setGeometry(QRect(120, 16, 201, 24));
        lineEdit_passworld = new QLineEdit(centralwidget);
        lineEdit_passworld->setObjectName(QString::fromUtf8("lineEdit_passworld"));
        lineEdit_passworld->setGeometry(QRect(120, 46, 201, 24));
        lineEdit_number_phone = new QLineEdit(centralwidget);
        lineEdit_number_phone->setObjectName(QString::fromUtf8("lineEdit_number_phone"));
        lineEdit_number_phone->setGeometry(QRect(120, 76, 201, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(14, 16, 81, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(14, 46, 81, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(14, 76, 81, 16));
        label_3->setFont(font);
        Push_add = new QPushButton(centralwidget);
        Push_add->setObjectName(QString::fromUtf8("Push_add"));
        Push_add->setGeometry(QRect(10, 120, 311, 31));
        Push_add->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"background-color: #555555;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 311, 20));
        QFont font1;
        font1.setPointSize(7);
        label_4->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 335, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Passworld", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        Push_add->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        label_4->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
