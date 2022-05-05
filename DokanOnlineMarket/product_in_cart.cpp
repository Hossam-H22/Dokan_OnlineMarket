#include "product_in_cart.h"
#include "ui_product_in_cart.h"

product_in_cart::product_in_cart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::product_in_cart)
{
    ui->setupUi(this);
}

product_in_cart::~product_in_cart()
{
    delete ui;
}
