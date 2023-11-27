#include "dialog.h"
#include "ui_dialog.h"
#include <qdebug.h>
#include <QSqlQuery>
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
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

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnAdd_clicked()
{
    model->insertRow(model->rowCount());
//    QString _login, _passworld, _phone;
//    _login=ui->text_login->text();
//    _passworld=ui->text_passworld->text();
//    _phone=ui->text_number->text();
//    if(!db.open()){
//        qDebug() << "Не открывается бд";
//        return;
//    }
//    QSqlQuery qry;
//       qry.prepare("INSERT INTO employee (Login, Passworld, Phone_number) "
//              "VALUES (:_login, :_passworld, :_phone)");
//       qry.bindValue(":_login", "hela");
//       qry.bindValue(":_passworld", "privet");
//       qry.bindValue(":_phone", "poca");
//       qry.exec();
//    qry.prepare("insert info users (Login, Passworld, Phone_number) value('"+_login+"', '"+_passworld+"', '"+_phone+"')");
//    qry.exec();
//    if(qry.exec()){
//        QMessageBox::critical(this,tr("Save"), tr("Saved"));
//    }
//    else{
//        QMessageBox::critical(this,tr("error"), qry.lastError().text());
//    }
}
