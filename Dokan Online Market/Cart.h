#pragma once
#include <iostream>
#include<vector>
#include "Product.h"
class Cart
{
public:
	double TotalPrice;
	std::vector<Product*> AddedProducts;

	Cart(void);
	~Cart(void);
	double DisplayPrice();
	void AddProduct(Product);
	void RemoveProduct(Product,int);

};

