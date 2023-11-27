#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn1_clicked()
{
    ui->label->setText("Посмотри в консоль");
    QString str = "123454321";
    qDebug() << str.lastIndexOf(L'2');
    qDebug() << str.lastIndexOf(L'6');
}
