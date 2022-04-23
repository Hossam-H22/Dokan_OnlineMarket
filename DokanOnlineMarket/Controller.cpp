#include <fstream>
#include "Controller.h"


Controller::Controller() {}
Controller::~Controller() {}

Seller* Controller::LogSeller(string email, string password)
{
    if (&SellerArr[email]!=nullptr && SellerArr[email].Password == password)
    {
        return &SellerArr[email];
    }

    return nullptr;
}

Customer* Controller::LogCustomer(string email, string password)
{
    if (&CustomerArr[email]!=nullptr && CustomerArr[email].Password == password)
    {
        return &CustomerArr[email];
    }
    return nullptr;
}

Seller* Controller::RegisterSeller(string name, string number, string address, string phone, string gender, string email, string password)
{
    Seller new_seller(CountSeller++, name, email, gender, phone, address, password);
    SellerArr[email] = new_seller;
    return &SellerArr[email];
}

Customer* Controller::RegisterCustomer(string name, string number, string address, string gender, string email, string password)
{
    Customer new_customer(CountCustomer++, name, number, gender, address, email, password);
    CustomerArr[email] = new_customer;
    return &CustomerArr[email];
}




//void Controller::ReadSellerDetails()
//{
//    ifstream ReadSeller;
//    ReadSeller.open("ReadSeller.csv");
//    //ReadSeller.open("C:\\Users\\Hosam\\source\\repos\\Online Marketplace\\ReadSeller.csv");
//    while (ReadSeller.good())
//    {
//        Seller s;
//        string line;
//        getline(ReadSeller, line, ',');
//        s.ID = stoi(line);
//        getline(ReadSeller, s.Name, ',');
//        getline(ReadSeller, s.PhoneNumber, ',');
//        getline(ReadSeller, s.Address, ',');
//        getline(ReadSeller, s.Email, ',');
//        getline(ReadSeller, s.Password, ',');
//        SellerArr.push_back(s);
//    }
//    ReadSeller.close();

//}

