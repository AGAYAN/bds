#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/Employes.db");
    if(db.open())
    {
        //ui->info->showMessage("Успешно подключились базе данных" + db.databaseName());
        model = new QSqlTableModel(this, db);
        model->setTable("USERS");
        model->select();

        ui->tableView->setModel(model);
    }
    else{
        //ui->statusbar->showMessage("не подключилось база данных");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_butto_admin_clicked()
{

}

void MainWindow::on_btnAdd_clicked()
{
     model->insertRow(model->rowCount());
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    currenRow = index.row();
}

void MainWindow::on_btnAdd_2_clicked()
{
    model->removeRow(currenRow);
    ui->tableView->setModel(model);
}
