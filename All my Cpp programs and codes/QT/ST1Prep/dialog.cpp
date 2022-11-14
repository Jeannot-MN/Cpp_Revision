#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    //Defining all the layouts
    QVBoxLayout *mainlayout = new QVBoxLayout(this);
    QFormLayout *form = new QFormLayout();
    QHBoxLayout *btnLayout = new QHBoxLayout();
    //QHBoxLayout *answerLayout = new QHBoxLayout();

    //Define all my widget components
    QLabel *aLabel = new QLabel("Answer:");
    ansLabel = new QLabel("");
    subLabel = new QLabel("");
    divLabel = new QLabel("");
    multLabel = new QLabel("");
    label00 = new QLabel("Number 1:");
    label10 = new QLabel("Number 2:");

    edit01 = new QLineEdit();
    edit11 = new QLineEdit();

    calcBtn = new QPushButton("Calculate");
    exitBtn = new QPushButton("Exit");

    ansLabel->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                            ";font-size: 14px"
                            ";text-align: center"
                            ";border-radius: 2px"
                            ";background-color:white"
                            ";color: black");
    subLabel->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                            ";font-size: 14px"
                            ";text-align: center"
                            ";border-radius: 2px"
                            ";background-color:white"
                            ";color: black");
    multLabel->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                            ";font-size: 14px"
                            ";text-align: center"
                            ";border-radius: 2px"
                            ";background-color:white"
                            ";color: black");
    divLabel->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                            ";font-size: 14px"
                            ";text-align: center"
                            ";border-radius: 2px"
                            ";background-color:white"
                            ";color: black");



    label00->setStyleSheet("font-family: Georgia"
                            ";font-size: 14px");

    label10->setStyleSheet("font-family: Georgia"
                            ";font-size: 14px");

    aLabel->setStyleSheet("font-family: Georgia"
                            ";font-size: 14px");

    edit01->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                          ";font-size: 14px"
                          ";border-radius: 2px"
                            "; background-color:white"
                            "; color: black");

    edit11->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                          ";font-size: 14px"
                          ";border-radius: 2px"
                          "; background-color:white"
                          "; color: black");

    calcBtn->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                           ";font-size: 14px"
                           ";border-radius: 5px"
                           "; background-color: rgb(124, 203, 255)"
                           "; color: white");

    exitBtn->setStyleSheet("border: 5px solid rgb(124, 203, 255)"
                           ";font-size: 14px"
                           ";border-radius: 5px"
                           "; background-color: rgb(124, 203, 255)"
                           "; color: white");



    //Adding components to layouts
    form->addRow(label00,edit01);
    form->addRow(label10,edit11);
    form->addRow("Sum",ansLabel);
    form->addRow("Differance",subLabel);
    form->addRow("Product",multLabel);
    form->addRow("Quotient",divLabel);

    btnLayout->addWidget(calcBtn);
    btnLayout->addStretch();
    btnLayout->addWidget(exitBtn);

    mainlayout->addLayout(form);
    //mainlayout->addLayout(answerLayout);
    mainlayout->addStretch();
    mainlayout->addLayout(btnLayout);

    connect(calcBtn, SIGNAL(clicked()),this,SLOT(calculate()));
    connect(exitBtn, SIGNAL(clicked()), this, SLOT(close()));

}

Dialog::~Dialog()
{

}

void Dialog::calculate()
{
    int number1 = edit01->text().toInt();
    int number2 = edit11->text().toInt();

    int addition = number1 + number2;
    int substraction = number1 - number2;
    int multiplication = number1 * number2;
    double division = number1 / number2;

    ansLabel->setText(QString("%1").arg(addition));
    subLabel->setText(QString("%1").arg(substraction));
    multLabel->setText(QString("%1").arg(multiplication));
    divLabel->setText(QString("%1").arg(division));


}
