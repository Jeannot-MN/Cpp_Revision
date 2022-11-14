#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QFormLayout *form = new QFormLayout();
    QHBoxLayout *btnLayout = new QHBoxLayout();

    stdNum = new QLineEdit();
    passWord = new QLineEdit();

    logBtn = new QPushButton("Log in");
    exitBtn= new QPushButton("Exit");

    status = new QLabel("");

    form->addRow("User Name:",stdNum);
    form->addRow("Password:",passWord);

    btnLayout->addWidget(logBtn);
    btnLayout->addStretch();
    btnLayout->addWidget(exitBtn);

    //mainLayout->addLayout(form);
    //mainLayout->addStretch();
    //mainLayout->addLayout(btnLayout);
    //mainLayout->addStretch();
    //mainLayout ->addWidget(status);

    connect(exitBtn, SIGNAL(clicked()), this, SLOT(close()));
    connect(logBtn, SIGNAL(clicked()), this, SLOT(login()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::login()
{

}
