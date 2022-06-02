#include "Cart.h"


Cart::Cart(void)
{
    TotalPrice = 0;
}

Cart::~Cart(void) {}

/**
 * @brief Cart::AddProduct ->> add chosed product to cart
 * @param p ->> pointer of product
 * @param quantity ->> the quantity what the user want it from this product in his cart
 */
void Cart::AddProduct(Product* p, int quantity)
{
    AddedProducts[p->ID] = {p, quantity};
}


/**
 * @brief Cart::RemoveProduct  ->> remove product from cart
 * @param id ->> the id of product you want to remove
 */
void Cart::RemoveProduct(int id)
{
    AddedProducts.erase(id);
}
