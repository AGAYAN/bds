/********************************************************************************
** Form generated from reading UI file 'budget_accounting_systems.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_ACCOUNTING_SYSTEMS_H
#define UI_BUDGET_ACCOUNTING_SYSTEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_budget_accounting_systems
{
public:
    QWidget *centralwidget;
    QPushButton *Addendum;
    QPushButton *Exit;
    QTableView *tableView;
    QPushButton *Removal;
    QTableView *tableView_2;
    QPushButton *plus;
    QPushButton *min;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *budget_accounting_systems)
    {
        if (budget_accounting_systems->objectName().isEmpty())
            budget_accounting_systems->setObjectName(QString::fromUtf8("budget_accounting_systems"));
        budget_accounting_systems->resize(730, 530);
        budget_accounting_systems->setMinimumSize(QSize(730, 530));
        budget_accounting_systems->setMaximumSize(QSize(730, 530));
        budget_accounting_systems->setStyleSheet(QString::fromUtf8("\n"
"background-color: #555555;"));
        centralwidget = new QWidget(budget_accounting_systems);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Addendum = new QPushButton(centralwidget);
        Addendum->setObjectName(QString::fromUtf8("Addendum"));
        Addendum->setGeometry(QRect(10, 10, 161, 51));
        QFont font;
        font.setPointSize(16);
        Addendum->setFont(font);
        Addendum->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(580, 10, 141, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font1.setPointSize(16);
        Exit->setFont(font1);
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 70, 501, 351));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        Removal = new QPushButton(centralwidget);
        Removal->setObjectName(QString::fromUtf8("Removal"));
        Removal->setGeometry(QRect(180, 10, 161, 51));
        Removal->setFont(font);
        Removal->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(580, 70, 141, 351));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(10, 430, 101, 51));
        QFont font2;
        font2.setPointSize(28);
        plus->setFont(font2);
        plus->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        min = new QPushButton(centralwidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(120, 430, 101, 51));
        min->setFont(font2);
        min->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 111, 136);"));
        budget_accounting_systems->setCentralWidget(centralwidget);
        menubar = new QMenuBar(budget_accounting_systems);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 25));
        budget_accounting_systems->setMenuBar(menubar);
        statusbar = new QStatusBar(budget_accounting_systems);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        budget_accounting_systems->setStatusBar(statusbar);

        retranslateUi(budget_accounting_systems);

        QMetaObject::connectSlotsByName(budget_accounting_systems);
    } // setupUi

    void retranslateUi(QMainWindow *budget_accounting_systems)
    {
        budget_accounting_systems->setWindowTitle(QCoreApplication::translate("budget_accounting_systems", "MainWindow", nullptr));
        Addendum->setText(QCoreApplication::translate("budget_accounting_systems", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        Exit->setText(QCoreApplication::translate("budget_accounting_systems", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        Removal->setText(QCoreApplication::translate("budget_accounting_systems", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        plus->setText(QCoreApplication::translate("budget_accounting_systems", "+", nullptr));
        min->setText(QCoreApplication::translate("budget_accounting_systems", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class budget_accounting_systems: public Ui_budget_accounting_systems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_ACCOUNTING_SYSTEMS_H
