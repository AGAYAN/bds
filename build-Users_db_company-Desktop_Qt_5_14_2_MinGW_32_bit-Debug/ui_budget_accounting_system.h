/********************************************************************************
** Form generated from reading UI file 'budget_accounting_system.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_ACCOUNTING_SYSTEM_H
#define UI_BUDGET_ACCOUNTING_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Budget_accounting_system
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QDialog *Budget_accounting_system)
    {
        if (Budget_accounting_system->objectName().isEmpty())
            Budget_accounting_system->setObjectName(QString::fromUtf8("Budget_accounting_system"));
        Budget_accounting_system->resize(915, 530);
        Budget_accounting_system->setMinimumSize(QSize(915, 530));
        Budget_accounting_system->setMaximumSize(QSize(915, 530));
        pushButton = new QPushButton(Budget_accounting_system);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 51, 51));
        QFont font;
        font.setPointSize(28);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Budget_accounting_system);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 10, 51, 51));
        QFont font1;
        font1.setPointSize(24);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Budget_accounting_system);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 10, 171, 51));
        QFont font2;
        font2.setPointSize(26);
        pushButton_3->setFont(font2);
        tableView = new QTableView(Budget_accounting_system);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 70, 891, 401));

        retranslateUi(Budget_accounting_system);

        QMetaObject::connectSlotsByName(Budget_accounting_system);
    } // setupUi

    void retranslateUi(QDialog *Budget_accounting_system)
    {
        Budget_accounting_system->setWindowTitle(QCoreApplication::translate("Budget_accounting_system", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Budget_accounting_system", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Budget_accounting_system", "-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Budget_accounting_system", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Budget_accounting_system: public Ui_Budget_accounting_system {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_ACCOUNTING_SYSTEM_H
