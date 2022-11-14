#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTime>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

    QSpinBox *hourCombo;
    QSpinBox *minuteCombo;
    QSpinBox *secondCombo;

    QPushButton *btn;
    QPushButton *exitBtn;

private slots:
    void execute();

};

#endif // DIALOG_H
