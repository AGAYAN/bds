#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/Employes.db");
    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }
    query = new QSqlQuery(db);
    query->exec("CREATE TABLE users(Firstname TEXT, Lastname TEXT, Telephone INI)");
    model = new QSqlTableModel(this, db);
    model->setTable("users");
    model->select();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}
