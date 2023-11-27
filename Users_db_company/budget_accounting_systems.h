#ifndef BUDGET_ACCOUNTING_SYSTEMS_H
#define BUDGET_ACCOUNTING_SYSTEMS_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>


namespace Ui {
class budget_accounting_systems;
}

class budget_accounting_systems : public QMainWindow
{
    Q_OBJECT

public:
    explicit budget_accounting_systems(QWidget *parent = nullptr);
    ~budget_accounting_systems();

private slots:
    void on_Addendum_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_Removal_clicked();

    void on_Addendum_2_clicked();

    void on_Addendum_3_clicked();

    void on_min_clicked();

    void on_plus_clicked();

    void on_Multiplications_clicked();

    void on_delenie_clicked();

    void on_min_2_clicked();

    void on_plus_2_clicked();

private:
    int cursores;
public:
    Ui::budget_accounting_systems *ui;
    QSqlDatabase db;
    //QSqlTableModel *model;
};

#endif // BUDGET_ACCOUNTING_SYSTEMS_H
