#include "dialog.h"
#include<QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
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

    mainLayout->addLayout(form);
    mainLayout->addStretch();
    mainLayout->addLayout(btnLayout);
    mainLayout->addStretch();
    mainLayout ->addWidget(status);

    connect(exitBtn, SIGNAL(clicked()), this, SLOT(close()));
    connect(logBtn, SIGNAL(clicked()), this, SLOT(login()));
}

Dialog::~Dialog()
{

}

void Dialog::login()
{
    QFile fStream(file);

   if(fStream.open(QIODevice::ReadOnly))
   {
      QTextStream cout(&fStream);

      QString StdNum;
      QString pWord;
      QString name;
      bool found = false;

      while(!cout.atEnd())
      {
          cout >> StdNum >>pWord >>name;

          if(StdNum == stdNum->text() && pWord == passWord->text())
          {
              status->setText(QString("Your name is %1").arg(name));
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
