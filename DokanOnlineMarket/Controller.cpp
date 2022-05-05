#include "Controller.h"
#include <cctype>

Controller::Controller(Model *data)
{
    this->data = data;
//    this->c = new Customer();
//    this->s = new Seller();
//    this->p = new Product();
}

Controller::~Controller() {}

void Controller::LogSeller(string Email, string Password)
{
    if (data->SellerArr[Email].Email==Email && data->SellerArr[Email].Password == Password)
    {
        s = &data->SellerArr[Email];
        return;
    }
    s = nullptr;
}

void Controller::LogCustomer(string Email, string Password)
{
    if (data->CustomerArr[Email].Email==Email && data->CustomerArr[Email].Password == Password)
    {
        c = &data->CustomerArr[Email];
        return;
    }
    c = nullptr;
}

void Controller::RegisterSeller(string FirstName, string SecondName, string Phone, string Email, string Password, string Gender)
{
    Seller new_seller(data->CountSeller++, FirstName, SecondName, Phone, Email, Password, Gender);
    data->SellerArr[Email] = new_seller;
    s = &data->SellerArr[Email];
}

void Controller::RegisterCustomer(string FirstName, string SecondName, string PhoneNumber, string Gender, string Email, string Password)
{
    Customer new_customer(data->CountCustomer++, FirstName, SecondName, PhoneNumber, Gender, Email, Password);
    data->CustomerArr[Email] = new_customer;
    c = &data->CustomerArr[Email];
}

bool Controller::CkeckNumber(string Number)
{
    for (int i=0 ; i<Number.size() ; i++)
    {
        if (Number[i]<=43 || Number[i]>=57) return false;
    }
    return true;
}
