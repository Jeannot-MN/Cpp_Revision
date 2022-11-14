#include "shop.h"
#include "ui_shop.h"

Shop::Shop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Shop)
{
    ui->setupUi(this);
}

Shop::~Shop()
{
    delete ui;
}
