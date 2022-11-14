#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);
    QLabel *label = new QLabel("0");
    QPushButton *btn = new QPushButton("Quit");
    QSpinBox *spin = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    layout->addWidget(label);
    layout->addWidget(spin);
    layout->addWidget(slider);
    layout->addWidget(btn);

    QObject::connect(spin,SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));
    QObject::connect(spin,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spin,SLOT(setValue(int)));

    QObject::connect(btn,SIGNAL(clicked(bool)),&window,SLOT(hide()));

    window.show();


    return a.exec();
}
