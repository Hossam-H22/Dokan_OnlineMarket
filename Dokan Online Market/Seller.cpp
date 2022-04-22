#include "Seller.h"


Seller::Seller(void) {}
Seller::~Seller(void) {}

Seller::Seller(int Id, std::string Name, std::string Email, std::string Gender, std::string Phone, std::string Address, std::string Password, std::string Path_photo) {
	this->ID = Id;
	this->Name = Name;
	this->Email = Email;
	this->Phone = Phone;
	this->Gender = Gender;
	this->Address = Address;
	this->Password = Password;
	this->Path_photo = Path_photo;
}