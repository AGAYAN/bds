#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include "budget_accounting_systems.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Push_add_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    Ui::budget_accounting_systems *abm;
    budget_accounting_systems *bas;
};
#endif // MAINWINDOW_H
