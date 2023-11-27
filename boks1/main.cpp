#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("ООП-стиль создание окна");
    w.resize(350,70);
    w.show();
    return a.exec();
}
