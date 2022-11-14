#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLineEdit>
#include<QFormLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include <QFile>
#include <QTextStream>
#include<QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QLineEdit *stdNum;
    QLineEdit *passWord;

    QLabel *status;

    QPushButton *logBtn;
    QPushButton *exitBtn;
    QString file = "students.txt";

private slots:
    void login();
};

#endif // MAINWINDOW_H
