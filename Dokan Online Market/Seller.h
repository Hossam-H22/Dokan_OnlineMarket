#include <iostream>
#include <vector>
#include "Product.h"

class Seller
{
public:
	int Id;
	std::string Name, Email, Gender, Phone, Address, Password, Path_photo;
	std::vector<Product> *items[];

public:
	Seller(int Id, std::string name, std::string email, std::string gender, std::string phone, std::string address, std::string password, std::string Path_photo,Product item[]);

};
