#ifndef BUDGET_ACCOUNTING_SYSTEM_H
#define BUDGET_ACCOUNTING_SYSTEM_H

#include <QDialog>

namespace Ui {
class Budget_accounting_system;
}

class Budget_accounting_system : public QDialog
{
    Q_OBJECT

public:
    explicit Budget_accounting_system(QWidget *parent = nullptr);
    ~Budget_accounting_system();

private:
    Ui::Budget_accounting_system *ui;
};

#endif // BUDGET_ACCOUNTING_SYSTEM_H
