#include "dialog.h"
#include <iostream>
#include <string>

using namespace std;


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *combos = new QHBoxLayout();
    QHBoxLayout *btns = new QHBoxLayout();

    hourCombo = new QSpinBox();
    minuteCombo = new QSpinBox();
    secondCombo = new QSpinBox();

    hourCombo->setRange(0,12);
    minuteCombo->setRange(0,59);
    secondCombo->setRange(0, 59);

    btn = new QPushButton("Ok");
    exitBtn = new QPushButton("Exit");

    combos->addWidget(hourCombo);
    combos->addWidget(minuteCombo);
    combos->addWidget(secondCombo);

    btns->addWidget(btn);
    btns->addStretch();
    btns->addWidget(exitBtn);

    mainLayout->addLayout(combos);
    mainLayout->addLayout(btns);

    connect(btn, SIGNAL(clicked(bool)),this, SLOT(execute()));
    connect(exitBtn, SIGNAL(clicked(bool)),this, SLOT(close()));
}

Dialog::~Dialog()
{

}

void Dialog::execute()
{
    //QTime now = new QTime;
    int hours = hourCombo->value();
    int minutes = minuteCombo->value();
    int seconds = secondCombo->value();
    //now = QTime::currentTime();


    int sec_tot = hours*3600 + minutes*60 + seconds;
    intgro sec_left = sec_tot - QTime::currentTime().second();

    QString command = QString("shutdown /s /t %1").arg(sec_left);
    string str = "shutdown /s /t" + sec_left ;

    system("shutdown /s /t 100");
}
