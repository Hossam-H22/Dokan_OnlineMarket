#include "Cart.h"


Cart::Cart(void) 
{ 
	TotalPrice = 0; 
}

Cart::~Cart(void) {}

double Cart::DisplayPrice()
{
	return TotalPrice;
}

void Cart::AddProduct(Product* p)
{
	TotalPrice += p->Price;
	AddedProducts.push_back(p);
}

void Cart::RemoveProduct(int pos)
{
	TotalPrice -= AddedProducts[pos]->Price;
	AddedProducts.erase(AddedProducts.begin() + pos);
}


