#include "secondwindow2.h"
#include "ui_secondwindow2.h"

SecondWindow2::SecondWindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow2)
{
    ui->setupUi(this);
}

SecondWindow2::~SecondWindow2()
{
    delete ui;
}
