#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QSqlTableModel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnAdd_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // DIALOG_H
