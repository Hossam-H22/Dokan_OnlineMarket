#include "Cart.h"


Cart::Cart(void)
{
    TotalPrice = 0;
}

Cart::~Cart(void) {}


void Cart::AddProduct(Product* p, int quantity)
{
    AddedProducts[p->ID] = {p, quantity};
}



void Cart::RemoveProduct(int id)
{
    AddedProducts.erase(id);
}
