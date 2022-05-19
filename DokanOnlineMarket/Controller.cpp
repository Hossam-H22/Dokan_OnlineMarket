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


void Controller::AddProduct(string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage,
                            int NoOfDeliveryDays, string PathOfPhoto, string Seller_mail)
{
    Product *New_Product = new Product(data->CountProduct++, Name, Price, Quantity, Description, Category, Offer_Percentage, NoOfDeliveryDays, PathOfPhoto, Seller_mail);
    New_Product->CalculatePrice();
//    data->ProductArr.push_back(New_Product);
    data->ProductArr2[New_Product->ID]=New_Product;
//    data->SellerArr[New_Product->Seller_mail].SelledProducts[data->CountProduct-101] = data->ProductArr[data->CountProduct-101];
    data->SellerArr[New_Product->Seller_mail].SelledProducts[data->CountProduct-101] = data->ProductArr2[data->CountProduct-1];
//    data->CategoryArr[New_Product->Category].push_back(data->ProductArr[data->CountProduct-101]);
    data->CategoryArr[New_Product->Category].push_back(data->ProductArr2[data->CountProduct-1]);


}
//void Controller::EditProduct(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
//                string PathOfPhoto, string Seller_mail)
//{

//
//}
void Controller::RemoveProduct(int ID)
{


    s->RemoveProduct(ID); // delete from seller

    unordered_map<string, Customer>::iterator it;
    for (it=data->CustomerArr.begin() ; it!=data->CustomerArr.end() ; it++)
    {
        it->second.RemoveProductFromFavorite(ID); // dalete from Favorite in each customer
        it->second.My_Cart.RemoveProduct(ID); // dalete from Cart in each customer
    }

    data->ProductArr2.erase(ID);

//    for (int i=0 ; i< data->CategoryArr[data->ProductArr[ID-100]->Category].size() ; i++)  // delete Product From category list
//    {
//        if (data->CategoryArr[data->ProductArr[ID-100]->Category][i]->ID == ID)
//        {
//            data->CategoryArr[data->ProductArr[ID-100]->Category].erase(data->CategoryArr[data->ProductArr[ID-100]->Category].begin() + i);
//            break;
//        }
//    }

}

bool Controller::CkeckNumber(string Number)
{
    for (int i=0 ; i<Number.size() ; i++)
    {
        if (Number[i]<43 || Number[i]>57) return false;
    }
    return true;
}
void Controller::Sort(string type, vector<Product*> &p)
{
    if (type == "Name")
        sort(p.begin(), p.end(), CompareName());
    else if (type == "PriceUp")
        sort(p.begin(), p.end(), ComparePriceUp());
    else if (type == "PriceDown")
        sort(p.begin(), p.end(), ComparePriceDown());
    else if (type == "RateUp")
        sort(p.begin(), p.end(), CompareRateUp());
    else if (type == "RateDown")
        sort(p.begin(), p.end(), CompareRateDown());

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

void Controller::ClearSatck()
{
    while (!data->BackToPage.empty())
    {
        data->BackToPage.pop();
    }
}


void Controller::ReloadData()
{
    for (int i=0 ; i<14 ; i++)
    {
        data->CategoryArr[data->CategoryName[0]].clear();
    }

    for (auto& it : data->ProductArr2)
    {
        data->CategoryArr[it.second->Category].push_back(it.second);
    }
}


