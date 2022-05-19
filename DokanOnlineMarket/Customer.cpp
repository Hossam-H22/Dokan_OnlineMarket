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
    this->Address = "No Address";
    this->PathPhoto = ":/img/assets/img/icons/avatar-profile-icon.jpg";
    this->ProfileCompleted = 0;
}

Customer::~Customer() {}

Customer::Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
                   string Password, string Address, string PathPhoto, bool ProfileCompleted)
{
    this->ID = ID;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->PhoneNumber = PhoneNumber;
    this->Gender = Gender;
    this->Email = Email;
    this->Password = Password;
    this->Address = Address;
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
    this->Address = "No Address";
    this->PathPhoto = ":/img/assets/img/icons/avatar-profile-icon.jpg";
    this->ProfileCompleted = 0;
}

void Customer::IsCompletedProfile()
{
    if (PathPhoto=="" || Address.empty()) ProfileCompleted = false;
    else ProfileCompleted = true;
}
void Customer::RemoveProductFromFavorite(int id)
{
    if (Favorite[id] == nullptr) return;

    Favorite.erase(id);

//    unordered_map<int, Product*>::iterator it;
//    for (it=Favorite.begin() ; it!=Favorite.end() ; it++)
//    {
//        if (it->first > id)
//        {
//            Favorite[it->second->ID-1] = it->second;
//            Favorite[it->first] = nullptr;
//        }
//    }
}
