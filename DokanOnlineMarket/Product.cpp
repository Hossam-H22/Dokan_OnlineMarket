#include "Product.h"


Product::Product() {}
Product::~Product() {}

Product::Product(int id, string name, float price, int quantity, string categoty_name, int sellerID, int offer_percentage, int delivery, string photo)
{
    this->ID = id;
    this->Name = name;
    this->Price = price;
    this->Quantity = quantity;
    this->Category = categoty_name;
    this->Seller_ID = sellerID;
    this->Offer_Percentage = offer_percentage;
    this->NoOfDeliveryDays = delivery;
    this->FinalRate = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->PathOfPhoto = photo;
    this->Avaliability = true;
}

Product::Product(int id, string name, float price, int quantity, string categoty_name, int sellerID, int offer_percentage, int delivery)
{
    this->ID = id;
    this->Name = name;
    this->Price = price;
    this->Quantity = quantity;
    this->Category = categoty_name;
    this->Seller_ID = sellerID;
    this->Offer_Percentage = offer_percentage;
    this->NoOfDeliveryDays = delivery;
    this->FinalRate = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->PathOfPhoto = "";
    this->Avaliability = true;
}

void Product::CalculateRate(float UserRate)
{
    Total_Rate += UserRate;
    NoOfVoters++;
    FinalRate = Total_Rate / (double)NoOfVoters;
}

void Product::CalculatePrice()
{
    PriceAfterOffer = (Price * Offer_Percentage) / 100.0;
}
