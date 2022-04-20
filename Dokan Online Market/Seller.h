 #pragma once
#include <iostream>
#include <vector>
#include "Product.h"

class Seller
{
public:
	int ID;
	std::string Name, Email, Gender, Phone, Address, Password, Path_photo;
	std::vector<Product*> SelledProducts;

	Seller(void);
	Seller(int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	~Seller(void);

};

