#ifndef SECONWINDOW_H
#define SECONWINDOW_H

#include <QDialog>
#include <QVBoxLayout>
#include "secondwondows.h"
namespace Ui {
class seconwindow;
}

class seconwindow : public QDialog
{
    Q_OBJECT

public:
    explicit seconwindow(QWidget *parent = nullptr);
    ~seconwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::seconwindow *ui;
    secondwondows *Window3;
};

#endif // SECONWINDOW_H
