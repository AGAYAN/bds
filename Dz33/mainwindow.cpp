#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
//#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap pix(":/png/img/f8ff8cfe900c563f8a952c21d3c9406e_300_300.jpeg");
//    int w = ui->label->width();
//    int h = ui->label->height();
//    ui->label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

MainWindow::~MainWindow();
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString lineEdit = ui->lineEdit->text();
    QString lineEdit_2 = ui->lineEdit_2->text();
    if(lineEdit == "admin" && lineEdit_2 == "agayan")
    {
        hide();
        QMessageBox::warning(this, "Добро пожаловать", "Успешный вход");
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

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    Window2 = new seconwindow(this);
    Window2->setFixedSize(600, 700);
    Window2->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    Window2 = new seconwindow(this);
    Window2->setFixedSize(600, 700);
    Window2->show();
}
