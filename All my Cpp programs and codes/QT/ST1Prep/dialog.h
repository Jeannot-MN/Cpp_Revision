#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>
#include<QLineEdit>
#include<QFormLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>


class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    QLabel* label00;
    QLabel* label10;
    QLabel *ansLabel;
    QLabel *subLabel;
    QLabel *divLabel;
    QLabel *multLabel;

    QLineEdit* edit01;
    QLineEdit* edit11;

    QPushButton* calcBtn;
    QPushButton* exitBtn;

private slots:
    void calculate();

};

#endif // DIALOG_H
