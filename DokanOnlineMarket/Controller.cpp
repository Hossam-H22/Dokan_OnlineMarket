#include "Controller.h"
#include <cctype>

Controller::Controller(Model *data)
{
    this->data = data;
}

Controller::~Controller()
{

}

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
    if (data->CustomerArr[Email].Email == Email && data->CustomerArr[Email].Password == Password)
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
    Product *New_Product = new Product(data->CountProduct++, Name, Price, Quantity, Description, Category, Offer_Percentage, NoOfDeliveryDays, Seller_mail);
    New_Product->PathOfPhoto = PathOfPhoto;
    New_Product->CalculatePrice();
    data->ProductArr2[New_Product->ID]=New_Product;
    data->SellerArr[New_Product->Seller_mail].SelledProducts[New_Product->ID] = data->ProductArr2[New_Product->ID];
    data->CategoryArr[New_Product->Category].push_back(data->ProductArr2[New_Product->ID]);
}

void Controller::RemoveProduct(int ID)
{
    s->RemoveProduct(ID); // delete from seller

    unordered_map<string, Customer>::iterator it;
    for (it=data->CustomerArr.begin() ; it!=data->CustomerArr.end() ; it++)
    {
        it->second.RemoveProductFromFavorite(ID); // delete from Favorite in each customer
        it->second.My_Cart.RemoveProduct(ID); // delete from Cart in each customer
    }

    data->ProductArr2.erase(ID); // delete from all products
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
void Controller::Search(string Name, vector<Product*> pro)
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
        data->CategoryArr[data->CategoryName[i]].clear();
    }

    for (auto& it : data->ProductArr2)
    {
        data->CategoryArr[it.second->Category].push_back(it.second);
    }
}
string Controller::GetDate(int num)
{
    string date = QDate::currentDate().toString("dd:MM").toStdString();
    string day1 = "", month1="";
    day1+=date[0];
    day1+=date[1];
    month1+=date[3];
    month1+=date[4];
    int day=stoi(day1), month=stoi(month1);
    day += num;
    if (day > data->NumOfDaysIMonth[month-1])
    {
        day-=data->NumOfDaysIMonth[month-1];
        if (month==12) month=1;
        else month++;
    }

    return to_string(day) +" "+ data->months[month-1];
}
