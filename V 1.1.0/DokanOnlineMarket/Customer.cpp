#include "Customer.h"


Customer::Customer()
{
    this->ID = 0;
    this->FirstName = "0";
    this->SecondName = "0";
    this->PhoneNumber = "0";
    this->Gender = "0";
    this->Email = "0";
    this->Password = "0";
    this->Address = "";
    this->PathPhoto = "";
    IsCompletedProfile();
}

Customer::~Customer() {}

Customer::Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
                   string Password, string Address, bool ProfileCompleted)
{
    this->ID = ID;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->PhoneNumber = PhoneNumber;
    this->Gender = Gender;
    this->Email = Email;
    this->Password = Password;
    this->Address = Address;
    this->PathPhoto = "";
    this->ProfileCompleted = ProfileCompleted;
}

Customer::Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email, string Password)
{
    this->ID = ID;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->PhoneNumber = PhoneNumber;
    this->Gender = Gender;
    this->Email = Email;
    this->Password = Password;
    this->Address = "";
    this->PathPhoto = "";
    IsCompletedProfile();
}

void Customer::IsCompletedProfile()
{
    if (PathPhoto=="" || Address.empty()) ProfileCompleted = false;
    else ProfileCompleted = true;
}
void Customer::RemoveProductFromFavorite(int id)
{
    Favorite.erase(id);
}
