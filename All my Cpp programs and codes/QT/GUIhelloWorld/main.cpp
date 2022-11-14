
#include <QApplication>
#include<Qstring>
#include<QLabel>
#include<QPushButton>
#include<QGridLayout>
#include<QStringList>
#include<cstdlib>
#include<time.h>
#include<QDebug>
#include<QTextStream>

QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    srand(time(0));
    QStringList my_list;

    my_list.append("I am");
    my_list.append("sometimes Pgg is boring");
    my_list.append("But the GUi part is just wow!");
    my_list.append("This is the last one trust me");

    QWidget window;
    QGridLayout *mainLayout = new QGridLayout(&window);

    QLabel *label = new QLabel ("Now you can see me!!!");
    QPushButton *btn1 = new QPushButton ("Show");
    QPushButton *btn2 = new QPushButton ("Hide");
    QPushButton *btn3 = new QPushButton("Change text");

    mainLayout->addWidget(label,0,0,1,2);
    label->hide();
    cout  << label->text();
    mainLayout->addWidget(btn1,1,0);
    mainLayout->addWidget(btn2,1,1);
    mainLayout->addWidget(btn3,2,0,1,2);

    QObject::connect(btn1,SIGNAL(clicked()),label,SLOT(show()));
    QObject::connect(btn2,SIGNAL(clicked()),label,SLOT(hide()));
    QObject::connect(btn3,SIGNAL(clicked()),label,SLOT(setText(QString)));

    window.show();




    return a.exec();
}
