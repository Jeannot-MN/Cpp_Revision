#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>
#include<QLineEdit>
#include<QFormLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include <QFile>
#include <QTextStream>
#include <QString>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

    QLineEdit *userName;
    QLineEdit *passWord;

    QLabel *status;

    QPushButton *logBtn;
    QPushButton *signBtn;
    QPushButton *exitBtn;
    QString file = "data.txt";


private slots:
    void login();
    void signup();
};

#endif // DIALOG_H
