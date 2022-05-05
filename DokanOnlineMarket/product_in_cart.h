#ifndef PRODUCT_IN_CART_H
#define PRODUCT_IN_CART_H

#include <QWidget>

namespace Ui {
class product_in_cart;
}

class product_in_cart : public QWidget
{
    Q_OBJECT

public:
    explicit product_in_cart(QWidget *parent = nullptr);
    ~product_in_cart();

private:
    Ui::product_in_cart *ui;
};

#endif // PRODUCT_IN_CART_H
