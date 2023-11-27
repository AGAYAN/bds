#include "info_user.h"
#include "ui_info_user.h"

info_user::info_user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::info_user)
{
    ui->setupUi(this);
}

info_user::~info_user()
{
    delete ui;
}
