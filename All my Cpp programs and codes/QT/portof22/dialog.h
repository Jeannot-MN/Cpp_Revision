#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMainWindow>
#include<QLineEdit>
#include<QFormLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include <QFile>
#include <QTextStream>
#include<QLabel>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    QLineEdit *stdNum;
    QLineEdit *passWord;

    QLabel *status;

    QPushButton *logBtn;
    QPushButton *exitBtn;
    QString file = "data.txt";

private slots:
    void login();
};

#endif // DIALOG_H
