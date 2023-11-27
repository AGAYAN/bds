#ifndef INFO_USERS_H
#define INFO_USERS_H

#include <QWidget>
#include <mainwindow.h>
namespace Ui {
class info_users;
}

class info_users : public QWidget
{
    Q_OBJECT

public:
    explicit info_users(QWidget *parent = nullptr);
    ~info_users();

private:
    Ui::info_users *ui;
};

#endif // INFO_USERS_H
