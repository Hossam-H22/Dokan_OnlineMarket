#include "customer.h"
#include "Product.h"
#include <iostream>
 Customer::Customer() {}; 
void Customer::~Customer() {};
Customer::Customer(std::string name, int id, int phone, std::string add, std::string pass, std::string email) {
	this->Name = name;
	this->ID = id;
	this->Phone = phone;
	this->Address = add;
	this->Password = pass; 
	this->Email = email;
};
Product Customer::Search(std::string name)
{
	if (this->NameProduct.Name == name)
		return NameProduct;
	else
		std::cout << "Not found"; 
}
