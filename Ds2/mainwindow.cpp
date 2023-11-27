#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <secondwindow.h>
#include <QMessageBox>
#include <QtWidgets>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/QnHtVX2XNDo.jpg");
//    int w = ui->label_3->width();
//    int h = ui->label_3->height();
//    ui->label_3->setPixmap(pix.scaled(w,h Qt::keepAspectRation));
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
       Window2 = new Secondwindow(this);
       Window2->setFixedSize(500, 600);
       Window2->show();
   }
   else if(lineEdit != "admin" && passworld != "agayan")
   {
       ui->error->setText("не правельно логин или пароль!");
   }
}
