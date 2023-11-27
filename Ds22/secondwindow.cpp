#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
    QString wb = ui->wb->text();
    QString mail = ui->mail->text();
    if(wb == "" && mail == "")
        ui->error2->setText("Введите пожалуйста данные");
    else if(wb == "Проверка" && mail == "")
        ui->error2->setText("Введите почту");
    else if(wb == "" && mail == "a.agayan95@mail.ru")
        ui->error2->setText("Введите жалобу");
    else if(wb == "Проверка" && mail == "a.agayan95@mail.ru")
    {
        QMessageBox::warning(this, "Жалоба принята","Ожидайте");
    }
}
