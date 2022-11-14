#ifndef SHOP_H
#define SHOP_H

#include <QMainWindow>

namespace Ui {
class Shop;
}

class Shop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Shop(QWidget *parent = 0);
    ~Shop();

private:
    Ui::Shop *ui;
};

#endif // SHOP_H
