#include "Customer.h"

Customer::Customer(int id, string name, string phone, string gender, string address, string email, string password)
{
    this->ID = id;
    this->Name = name;
    this->Email = email;
    this->Password = password;
    this->PhoneNumber = phone;
    this->Address = address;
    this->Gender = gender;
}

Customer::Customer(int id, string name, string phone, string gender, string address, string email, string password, string photo)
{
    this->ID = id;
    this->Name = name;
    this->Email = email;
    this->Password = password;
    this->PhoneNumber = phone;
    this->Address = address;
    this->Gender = gender;
    this->PathPhoto = photo;
}


Customer::Customer() {}

Customer::~Customer() {}

Product* Customer::Search(string name)
{
return nullptr;
}
