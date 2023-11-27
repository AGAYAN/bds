#include "info_users.h"
#include "ui_info_users.h"

info_users::info_users(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::info_users)
{
    ui->setupUi(this);
}

info_users::~info_users()
{
    delete ui;
}
