#include "dialog.h"
#include<QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QFormLayout *form = new QFormLayout();
    QHBoxLayout *btnLayout = new QHBoxLayout();

    userName = new QLineEdit();
    passWord = new QLineEdit();

    logBtn = new QPushButton("Log in");
    signBtn= new QPushButton("Sign up");
    exitBtn= new QPushButton("Exit");

    status = new QLabel("");

    form->addRow("User Name",userName);
    form->addRow("Password",passWord);

    btnLayout->addWidget(logBtn);
    btnLayout->addStretch();
    btnLayout->addWidget(signBtn);
    btnLayout->addStretch();
    btnLayout->addWidget(exitBtn);

    mainLayout->addLayout(form);
    mainLayout->addStretch();
    mainLayout->addLayout(btnLayout);
    mainLayout->addStretch();
    mainLayout ->addWidget(status);

    connect(exitBtn, SIGNAL(clicked()), this, SLOT(close()));
    connect(logBtn, SIGNAL(clicked()), this, SLOT(login()));
    connect(signBtn,SIGNAL(clicked()), this, SLOT(signup()));



}

Dialog::~Dialog()
{

}

void Dialog::login()
{
    QFile fStream(file);

   if(fStream.open(QIODevice::ReadWrite))
   {
      QTextStream cout(&fStream);

      QString name;
      QString password;
      bool found = false;


      while(!cout.atEnd())
      {
          cout >> name >>password;

          if(name == userName->text() && password == passWord->text())
          {
              status->setText("Your login was successful!");
              found = true;
              break;
          }

      }
      if(!found)
      {
          status->setText("Invalid details!");
      }
   }
}

void Dialog::signup()
{
    QFile fStream(file);

   if(fStream.open(QIODevice::Append))
   {
      QTextStream cout(&fStream);

      cout << userName->text() <<"\t"<<passWord->text()<<endl;

      status->setText("Your sign up was successful!");
   }
}
