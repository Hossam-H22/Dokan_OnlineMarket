#include "Controller.h"
#include <cctype>

Controller::Controller(Model *data)
{
    this->data = data;
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
void Controller::AddProduct(string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage,
                            int NoOfDeliveryDays, string PathOfPhoto, string Seller_mail)
{
    Product *New_Product = new Product(data->CountProduct++, Name, Price, Quantity, Description, Category, Offer_Percentage, NoOfDeliveryDays, PathOfPhoto, Seller_mail);
    data->ProductArr.push_back(New_Product);
    data->SellerArr[New_Product->Seller_mail].SelledProducts.push_back(data->ProductArr[data->CountProduct-101]);
    data->CategoryArr[New_Product->Category].push_back(data->ProductArr[data->CountProduct-101]);
}
void EditProduct(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                string PathOfPhoto, string Seller_mail)
{

}


void Controller::Sort(string type, vector<Product*> &p)
{
    if (type == "Name")
        sort(p.begin(), p.end(), CompareName());
    else if (type == "Price")
        sort(p.begin(), p.end(), ComparePrice());
    else if (type == "Rate")
        sort(p.begin(), p.end(), CompareRate());

}
void Controller::Search(string Name, string Category, vector<Product*> pro)
{
    data->ProductArrView.clear();
    for (int i=0 ; i< pro.size() ; i++)
    {
        if (pro[i]->Name.find(Name) != -1)
        {
            data->ProductArrView.push_back(pro[i]);
        }
    }
}
