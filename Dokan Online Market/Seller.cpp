#include "Seller.h"

Seller::Seller(int Id, std::string Name, std::string Email, std::string Gender, std::string Phone, std::string Address, std::string Password, std::string Path_photo,Product items []) {
	this->Id = Id;
	this->Name = Name;
	this->Email = Email;;
	this->Phone = Phone;
	this->Gender = Gender;
	this->Address = Address;
	this->Password = Password;
	this->Path_photo = Path_photo;
	//this->items = items;
}
 