#include "Product.h"


Product::Product()
{
    this->ID = 0;
    this->Name = "";
    this->Price = 0;
    this->Quantity = 0;
    this->Category = "";
    this->Offer_Percentage = 0;
    this->PriceAfterOffer = 0;
    this->NoOfDeliveryDays = 0;
    this->Description = "";
    this->PathOfPhoto = "";
    this->Zero = 0;
    this->One = 0;
    this->Two = 0;
    this->Three = 0;
    this->Four = 0;
    this->Five = 0;
    this->FinalRate = 5;
    this->Avaliability =1;
    this->Seller_mail = "0";
    CalculateRate();
}
Product::~Product() {}

Product::Product(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                 int Zero, int One, int Two, int Three, int Four, int Five, bool Avaliability, string Seller_mail)
{
    this->ID = ID;
    this->Name = Name;
    this->Price = Price;
    this->Quantity = Quantity;
    this->Category = Category;
    this->Offer_Percentage = Offer_Percentage;
    this->NoOfDeliveryDays = NoOfDeliveryDays;
    this->Description = Description;
    this->PathOfPhoto = PathOfPhoto;
    this->Zero = Zero;
    this->One = One;
    this->Two = Two;
    this->Three = Three;
    this->Four = Four;
    this->Five = Five;
    this->FinalRate = 5;
    this->Avaliability = Avaliability;
    this->Seller_mail = Seller_mail;
    CalculateRate();
}

Product::Product(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays, string Seller_mail)
{
    this->ID = ID;
    this->Name = Name;
    this->Price = Price;
    this->Quantity = Quantity;
    this->Category = Category;
    this->Offer_Percentage = Offer_Percentage;
    this->NoOfDeliveryDays = NoOfDeliveryDays;
    this->Description = Description;
    this->PathOfPhoto = "";
    this->Zero = 0;
    this->One = 0;
    this->Two = 0;
    this->Three = 0;
    this->Four = 0;
    this->Five = 0;
    this->FinalRate = 5;
    this->Avaliability = 1;
    this->Seller_mail = Seller_mail;
    CalculateRate();
}

void Product::CalculateRate(float UserRate)
{
    if (UserRate !=-1)
    {
        int Rate = round(UserRate);
        switch (Rate) {
        case 0:
            Zero++;
            break;
        case 1:
            One++;
            break;
        case 2:
            Two++;
            break;
        case 3:
            Three++;
            break;
        case 4:
            Four++;
            break;
        case 5:
            Five++;
            break;
        }
    }
    NoVoters = Zero+One+Two+Three+Four+Five;
    if (NoVoters!=0) FinalRate = (double)(One+(2*Two)+(3*Three)+(4*Four)+(5*Five)) / (double)(NoVoters);
}

void Product::CalculatePrice()
{
    if (Offer_Percentage == 0) PriceAfterOffer = Price;
    else PriceAfterOffer = Price - (Price*Offer_Percentage)/100.0;
}
