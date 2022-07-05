#include "Seller.h"


Seller::Seller(void)
{
    this->ID = 0;
    this->FirstName = "0";
    this->SecondName = "0";
    this->Phone = "0";
    this->Email = "0";
    this->Password = "0";
    this->Gender = "0";
    this->Address = "";
    this->Description = "";
    this->Wallet = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->Path_photo = "";
    this->ProfileCompleted = 0;
}
Seller::~Seller(void)
{

}

Seller::Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender, string Address,
               string Description, int NoOfVoters, float Total_Rate, bool ProfileCompleted)
{
    this->ID = Id;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->Phone = Phone;
    this->Email = Email;
    this->Password = Password;
    this->Gender = Gender;
    this->Address = Address;
    this->Description = Description;
    this->Wallet = 0;
    this->NoOfVoters = NoOfVoters;
    this->Total_Rate = Total_Rate;
    this->Path_photo = "";
    this->ProfileCompleted = ProfileCompleted;
    CalculateRate();
}

Seller::Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender)
{
    this->ID = Id;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->Phone = Phone;
    this->Email = Email;
    this->Password = Password;
    this->Gender = Gender;
    this->Address = "";
    this->Description = "";
    this->Wallet = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->Path_photo = "";
    this->ProfileCompleted = 0;
    CalculateRate();
}


/**
 * @brief Seller::CalculateRate
 * @param UserRate ->> the rate that user add it
 * calculate final rate after user add his rate
 */
void Seller::CalculateRate(float UserRate)
{
    if (UserRate != -1)
    {
        Total_Rate += UserRate;
        NoOfVoters++;
    }
    if (NoOfVoters==0) FinalRate=5;
    else FinalRate = Total_Rate / (double)NoOfVoters;
}

void Seller::IsCompletedProfile(){

    if (Path_photo=="" || Description=="" || Address=="")
        ProfileCompleted = false;
    else
        ProfileCompleted = true;
}

/**
 * @brief Seller::AddToWallet
 * @param pro ->> pointer of product
 * @param quantity ->> quantity of this product
 * add details of selled product to wallet of seller
 */
void Seller::AddToWallet(Product *pro, int quantity)
{
    WalletData a;
    a.id = pro->ID;
    a.name = pro->Name;
    a.price = pro->PriceAfterOffer;
    a.date = QDate::currentDate().toString("dd/MM/yyyy").toStdString();
    a.quantity = quantity;
    Wallet_History2.push_back(a);
    Wallet += pro->PriceAfterOffer;
}

/**
 * @brief Seller::RemoveProduct
 * @param id ->> product id who will remove for ever
 */
void Seller::RemoveProduct(int id)
{
    SelledProducts.erase(id);
}
