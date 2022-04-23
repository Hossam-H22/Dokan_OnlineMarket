#include "Seller.h"


Seller::Seller(void) {}
Seller::~Seller(void) {}

Seller::Seller(int Id, string Name, string Email, string Gender, string Phone, string Address, string Password, string photo)
{
    this->ID = Id;
    this->Name = Name;
    this->Email = Email;
    this->Phone = Phone;
    this->Gender = Gender;
    this->Address = Address;
    this->Password = Password;
    this->Path_photo = photo;
}

Seller::Seller(int Id, string Name, string Email, string Gender, string Phone, string Address, string Password)
{
    this->ID = Id;
    this->Name = Name;
    this->Email = Email;
    this->Phone = Phone;
    this->Gender = Gender;
    this->Address = Address;
    this->Password = Password;
    this->Path_photo = "";
}

void Seller::CalculateRate(float UserRate)
{
    Total_Rate += UserRate;
    NoOfVoters++;
    FinalRate = Total_Rate / (double)NoOfVoters;
}
