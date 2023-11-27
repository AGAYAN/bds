#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB.db");
    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }
    query = new QSqlQuery(db);
    query->exec("CREATE TABLE TelephoneBook(Firstname TEXT, Lastname TEXT, Telephone TNT);");
    model = new QSqlTableModel(this, db);
    model->setTable("TelephoneBook");
    model->select();

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int row = model->rowCount();
        model->insertRow(row);
        model->setData(model->index(row, 0), "");
        model->submitAll();
}

void MainWindow::on_pushButton_2_clicked()
{
    model->removeRow(row);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}
