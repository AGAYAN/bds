#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel("Привет мир!");
    label->setAlignment(Qt::AlignCenter);
    btnQuit = new QPushButton("&Закрыть окно");
    vbox = new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(btnQuit);
    setLayout(vbox);
    //connectNotify((btnQuit,SIGNAL(clicked)), qApp, SLOT(quit())
}

MainWindow::~MainWindow()
{
    delete ui;
}

