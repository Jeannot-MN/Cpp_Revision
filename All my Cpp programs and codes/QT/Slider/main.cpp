#include <QApplication>
#include<QSlider>
#include<QLabel>
#include<QVBoxLayout>
#include<QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);
    QLabel *label = new QLabel("0");
    QSpinBox *spb = new QSpinBox;
    QSlider *sl= new QSlider(Qt::Horizontal);

    layout->addWidget(label);
    layout->addWidget(spb);
    layout->addWidget(sl);

    QObject::connect(spb, SIGNAL(valueChanged(int)),sl, SLOT(setValue(int)));

    QObject::connect(spb, SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));

    QObject::connect(sl, SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));

    QObject::connect(sl,SIGNAL(valueChanged(int)),spb,SLOT(setValue(int)));

    window.show();

    return a.exec();
}
