#include "Customer.h"

Customer::Customer()
{
    this->ID = 0;
    this->FirstName = "";
    this->SecondName = "";
    this->PhoneNumber = "";
    this->Gender = "";
    this->Email = "";
    this->Password = "";
    this->Interested = "";
    this->PathPhoto = "";
    this->ProfileCompleted = 0;
}

Customer::~Customer() {}

Customer::Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
                   string Password, string Interested, string PathPhoto, bool ProfileCompleted)
{
    this->ID = ID;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->PhoneNumber = PhoneNumber;
    this->Gender = Gender;
    this->Email = Email;
    this->Password = Password;
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
    this->Interested = "";
    this->PathPhoto = "";
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
