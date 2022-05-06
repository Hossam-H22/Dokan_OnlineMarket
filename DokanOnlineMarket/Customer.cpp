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
    this->Address = "0";
    this->Interested = "0";
    this->PathPhoto = "0";
    this->ProfileCompleted = 0;
}

Customer::~Customer() {}

Customer::Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
                   string Password, string Address, string Interested, string PathPhoto, bool ProfileCompleted)
{
    this->ID = ID;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->PhoneNumber = PhoneNumber;
    this->Gender = Gender;
    this->Email = Email;
    this->Password = Password;
    this->Address = Address;
    this->Interested = Interested;
    this->PathPhoto = PathPhoto;
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
    this->Address = "0";
    this->Interested = "0";
    this->PathPhoto = "0";
    this->ProfileCompleted = 0;
}

void Customer::IsCompletedProfile(){

    if (PathPhoto=="" || Interested=="" || Address.empty())
        ProfileCompleted = false;
    else
        ProfileCompleted = true;
}

Product* Customer::Search(string name)
{
return nullptr;
}
