#ifndef SECONDWONDOWS_H
#define SECONDWONDOWS_H

#include <QDialog>

namespace Ui {
class secondwondows;
}

class secondwondows : public QDialog
{
    Q_OBJECT

public:
    explicit secondwondows(QWidget *parent = nullptr);
    ~secondwondows();

private slots:
    void on_pushButton_clicked();

private:
    Ui::secondwondows *ui;
};

#endif // SECONDWONDOWS_H
