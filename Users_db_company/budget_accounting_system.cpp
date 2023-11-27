#include "budget_accounting_system.h"
#include "ui_budget_accounting_system.h"

Budget_accounting_system::Budget_accounting_system(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Budget_accounting_system)
{
    ui->setupUi(this);
}

Budget_accounting_system::~Budget_accounting_system()
{
    delete ui;
}
