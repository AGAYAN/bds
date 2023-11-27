#include "budget_accounting_systems.h"
#include "ui_budget_accounting_systems.h"
#include <QtSql/QSqlTableModel>
#include <QSqlQuery>
#include <QDate>
#include <QDebug>
QSqlTableModel *model = new QSqlTableModel();
budget_accounting_systems::budget_accounting_systems(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::budget_accounting_systems)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/bds/bds_info.db");
    if(db.open())
    {
        ui->statusbar->showMessage("Успешно подключились базе данных" + db.databaseName());
        model = new QSqlTableModel(this, db);
        model->setTable("bds");
        model->select();
        ui->tableView->setModel(model);
    }
    else{
        ui->statusbar->showMessage("не подключилось база данных");
    }
}

budget_accounting_systems::~budget_accounting_systems()
{
    delete ui;
}

void budget_accounting_systems::on_Addendum_clicked()
{
    model->insertRow(model->rowCount());
}

void budget_accounting_systems::on_tableView_clicked(const QModelIndex &index)
{
    cursores = index.row();
}

void budget_accounting_systems::on_Removal_clicked()
{
     model->removeRow(cursores);
}
void budget_accounting_systems::on_min_clicked()
{
    QSqlQueryModel *model_min = new QSqlQueryModel();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/bds/bds_info.db");
    if(db.open())
    {
        QString str_min = "SELECT Income - Consumption AS [min] FROM bds, Mins ORDER BY min";
        ui->statusbar->showMessage("Успешно подключились базе данных" + db.databaseName());
        model_min->setQuery(str_min);
        ui->tableView_2->setModel(model_min);
    }
    else{
        ui->statusbar->showMessage("не подключилось база данных");
    }
}

void budget_accounting_systems::on_plus_clicked()
{
    QSqlQueryModel *model_plus = new QSqlQueryModel();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/bds/bds_info.db");
    if(db.open())
    {
        QString str = "SELECT Income + Consumption AS [plus] FROM bds, Prof ORDER BY plus";
        ui->statusbar->showMessage("Успешно подключились базе данных" + db.databaseName());
        model_plus->setQuery(str);
        ui->tableView_2->setModel(model_plus);
    }
    else{
        ui->statusbar->showMessage("не подключилось база данных");
    }
}

