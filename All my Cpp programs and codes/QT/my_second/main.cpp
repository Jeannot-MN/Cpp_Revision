#include <QApplication>
#include <QString>
#include <QTextStream>
#include<QLabel>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QGridLayout>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;

    QGridLayout *layout = new QGridLayout(&window);


    QLabel label("Hello Welcome to GUI:-)");
    QLabel l("I am the second");
    QPushButton btn("Second");
    QPushButton btn1("First");

    layout->addWidget(&label,0,0);
    layout->addWidget(&l,0,1);
    layout->addWidget(&btn,1,1);
    layout->addWidget(&btn1,1,0);

    QObject::connect(&btn,SIGNAL(clicked()),&l,SLOT(hide()));
    QObject::connect(&btn1,SIGNAL(clicked()),&label,SLOT(hide()));

    window.show();

    return a.exec();
}
