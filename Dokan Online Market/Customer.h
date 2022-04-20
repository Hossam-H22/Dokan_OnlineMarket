#pragma once
#include"Product.h"
#include "Cart.h"
#include <iostream>
class Customer
{
	int ID, Phone; 
	std::string  Name, Address, Email, Gender, PathPhoto,Password; 
	Product  Favorite[], NameProduct; 
	Cart cart; 
	Customer(void) {}; 
	Customer(std::string name, int id, int phone, std::string add, std::string pass ,std::string email) {};
    ~Customer(void) {};
	Product Search(Std::string product_name) {}; 
};
