#include "Cart.h"


Cart::Cart(void) { TotalPrice = 0; };
Cart::~Cart(void) {}
double Cart::DisplayPrice()
{
	return TotalPrice;
}
void Cart::AddProduct(Product p)
{
	TotalPrice += Product->Price;
	AddedProducts.push_back(&p);
}
void Cart::RemoveProduct(Product p,int pos)
{
	//AddedProducts.erase(&p);
	TotalPrice -= Product.Price;
	AddedProducts.erase(AddedProducts.begin() + pos);
}
;

