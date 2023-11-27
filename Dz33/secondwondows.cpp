#include "secondwondows.h"
#include "ui_secondwondows.h"
#include <QMessageBox>
secondwondows::secondwondows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwondows)
{
    ui->setupUi(this);
}

secondwondows::~secondwondows()
{
    delete ui;
}

void secondwondows::on_pushButton_clicked()
{
    QString lineEdit = ui->lineEdit->text();
    QString lineEdit_2 = ui->lineEdit_2->text();
    if(lineEdit == "admin" && lineEdit_2 == "agayan")
    {
        hide();
        QMessageBox::warning(this, "Добро пожаловать", "Ждите");
    }
    else if(lineEdit == "" && lineEdit_2 == "agayan")
    {
        ui->label_3->setText("Вы не заполнили логин");
    }
    else if(lineEdit == "admin" && lineEdit_2 == "")
    {
        ui->label_3->setText("Вы не заполнили пароль");
    }
    else if(lineEdit == "" && lineEdit_2 == "")
    {
        ui->label_3->setText("Введите пожалуйста данные");
    }
    else if(lineEdit != "admin" && lineEdit_2 != "agayan")
    {
        ui->label_3->setText("Не вверный логин или пароль");
    }


}
