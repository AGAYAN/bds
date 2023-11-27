#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/car-service-logo_18099-290 (1).avif");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPalette p(palette());
    p.setColor(QPalette::Background, QColor(23, 22, 20));
    setAutoFillBackground(true);
    setPalette(p);
    const static QColor list[]={"#000000",};
    const static QColor bl[] = {"#ffffff",};
    static size_t index=0;
    ui->groupBox->setStyleSheet("color:"+bl[index].name());
    ui->lineEdit->setStyleSheet("color:"+list[index].name());
    ui->passworld->setStyleSheet("color:"+list[index].name());
    ui->pushButton_3->setStyleSheet("color:"+list[index].name());
}

void MainWindow::on_pushButton_2_clicked()
{
    QPalette p(palette());
    p.setColor(QPalette::Background, QColor(255,255, 255, 255));
    setAutoFillBackground(true);
    setPalette(p);
    const static QColor list[]={"#000000",};
    static size_t index=0;
    ui->groupBox->setStyleSheet("color:"+list[index].name());
    ui->lineEdit->setStyleSheet("color:"+list[index].name());
    ui->passworld->setStyleSheet("color:"+list[index].name());
    ui->pushButton_3->setStyleSheet("color:"+list[index].name());
}

void MainWindow::on_pushButton_3_clicked()
{
    QString lineEdit = ui->lineEdit->text();
    QString passworld = ui->passworld->text();
    if(lineEdit == "admin" && passworld == "agayan")
    {
        hide();
        Window2 = new SecondWindow(this);
        Window2->setFixedSize(1000, 500);
        Window2->show();
    }
    else if(lineEdit == "" && passworld == "agayan")
        ui->error->setText("Вы не заполнили логин");
    else if(lineEdit == "admin" && passworld == "")
        ui->error->setText("Вы не заполнили пароль");
    else if(lineEdit == "" && passworld == "")
        ui->error->setText("Введите пожалуйста данные");
    else if(lineEdit != "" && passworld != "")
        ui->error->setText("Не верный логин или пароль");
}
