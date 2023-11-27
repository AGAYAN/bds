#ifndef SECONDWINDOW2_H
#define SECONDWINDOW2_H

#include <QDialog>

namespace Ui {
class SecondWindow2;
}

class SecondWindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow2(QWidget *parent = nullptr);
    ~SecondWindow2();

private:
    Ui::SecondWindow2 *ui;
};

#endif // SECONDWINDOW2_H
