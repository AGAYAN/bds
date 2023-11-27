#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlQuery>
#include "budget_accounting_system.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../Register/Employes.db");
    if(db.open())
    {
        ui->statusbar->showMessage("Успешно подключились базе данных" + db.databaseName());
    }
    else{
        ui->statusbar->showMessage("не подключилось база данных");
    }
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_Push_add_clicked()
{
    QString _login, _passworld, _phone;
    _login=ui->lineEdit_Login->text();
    _passworld=ui->lineEdit_passworld->text();
    _phone=ui->lineEdit_number_phone->text();
    if(!db.open()){
        qDebug() << "Не открывается бд";
        return;
    }
    QSqlQuery qry;
    if(qry.exec("select * from users where Login='"+_login+"' and Passworld='"+_passworld+"' and Phone_number='"+_phone+"'"))
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            ui->label_4->setText("Добро пожаловать");
            bas = new budget_accounting_systems();
            bas->show();
            this->close();
        }
        if(count>1)
        {
            ui->label_4->setText("Неверный логин или пароль или номер");

        }
        if(count<1)
        {
            ui->label_4->setText("Неверный логин или пароль или номер");
        }
    }
}
