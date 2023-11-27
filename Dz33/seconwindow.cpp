#include "seconwindow.h"
#include "ui_seconwindow.h"
#include <QMessageBox>

seconwindow::seconwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seconwindow)
{
    ui->setupUi(this);
}

seconwindow::~seconwindow()
{
    delete ui;
}

void seconwindow::on_pushButton_clicked()
{
    QString lineEdit_3 =ui->lineEdit_3->text();
    QString lineEdit_2 =ui->lineEdit_2->text();
    QString lineEdit =ui->lineEdit->text();
    if(lineEdit_3 == "admin" && lineEdit_2 == "agayan" && lineEdit == "agayan")
    {
        QMessageBox::warning(this, "Внимание", "Аккаунт создан");
        hide();
        Window3 = new secondwondows(this);
        Window3->setFixedSize(600, 700);
        Window3->show();
    }
    else if(lineEdit_2 != "agayan" && lineEdit == "agayan")
    {
        ui->label_3->setText("Пароли не одинаковыe");
    }
    else if(lineEdit_2 == "agayan" && lineEdit != "agayan")
    {
        ui->label_3->setText("Пароли не одинаковыe");
    }

}
