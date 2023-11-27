#ifndef INFO_USER_H
#define INFO_USER_H

#include <QWidget>

namespace Ui {
class info_user;
}

class info_user : public QWidget
{
    Q_OBJECT

public:
    explicit info_user(QWidget *parent = nullptr);
    ~info_user();

private:
    Ui::info_user *ui;
};

#endif // INFO_USER_H
