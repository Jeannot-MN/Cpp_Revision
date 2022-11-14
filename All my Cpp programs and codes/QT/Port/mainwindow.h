#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QInputDialog>
#include<QDir>
#include<QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_AddBtn_released();

    void on_EditBtn_released();

    void on_RemoveBtn_released();

    void on_UpBtn_released();

    void on_DownBtn_released();

    void on_SortBtn_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
