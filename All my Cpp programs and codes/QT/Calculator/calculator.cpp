#include "calculator.h"
#include "ui_calculator.h"
#include<QDebug>

QString operand1;
QString operand2;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText("");


    connect(ui->Button0, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button1, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button2, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button3, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button4, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button5, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button6, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button7, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button8, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Button9, SIGNAL(released()), this, SLOT(NumPressed()));
    connect(ui->Add,SIGNAL(released()),this, SLOT(NumPressed()));
    connect(ui->Subtract,SIGNAL(released()),this, SLOT(NumPressed()));
    connect(ui->Multiply,SIGNAL(released()),this, SLOT(NumPressed()));
    connect(ui->Divide,SIGNAL(released()),this, SLOT(NumPressed()));

    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButtonPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    QString displayVal = ui->Display->text();

    QString newVal = displayVal + butVal;
    ui->Display->setText(newVal);

}

void Calculator::EqualButtonPressed()
{
    double solution;
    QString equation = ui->Display->text();

    QString sign;

    if (equation.indexOf('+')!=-1)
    {
        sign = "+";
    }
    else if(equation.indexOf('-')!=-1)
    {
        sign = "-";
    }
    else if(equation.indexOf('*')!=-1)
    {
        sign = "*";
    }
    else
    {
        sign = "/";
    }

    operand1 = equation.mid(0, equation.indexOf(sign));
    operand2 = equation.mid(equation.indexOf(sign)+1);

    if (sign=="+")
    {
        solution = operand1.toDouble() + operand2.toDouble();
    }
    else if (sign=="-")
    {
        solution = operand1.toDouble() - operand2.toDouble();
    }
    else if (sign=="*")
    {
        solution = operand1.toDouble() * operand2.toDouble();
    }
    else
    {
        solution = operand1.toDouble() / operand2.toDouble();
    }
    ui->Display->setText(QString("%1").arg(solution));


 }


void Calculator::on_Clear_released()
{
    ui->Display->setText("");
}
