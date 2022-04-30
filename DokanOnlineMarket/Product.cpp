#include "Product.h"


Product::Product()
{
    this->ID = 0;
    this->Name = "";
    this->Price = 0;
    this->Quantity = 0;
    this->Category = "";
    this->Offer_Percentage = 0;
    this->NoOfDeliveryDays = 0;
    this->PathOfPhoto = "";
    this->Zero = 0;
    this->One = 0;
    this->Two = 0;
    this->Three = 0;
    this->Four = 0;
    this->Five = 0;
    this->FinalRate = 0;
    this->Avaliability = 0;
    this->Seller_mail = "";
}
Product::~Product() {}

Product::Product(int ID, string Name, float Price, int Quantity, string Category, int Offer_Percentage, int NoOfDeliveryDays, string PathOfPhoto,
                 int Zero, int One, int Two, int Three, int Four, int Five, bool Avaliability, string Seller_mail)
{
    this->ID = ID;
    this->Name = Name;
    this->Price = Price;
    this->Quantity = Quantity;
    this->Category = Category;
    this->Offer_Percentage = Offer_Percentage;
    this->NoOfDeliveryDays = NoOfDeliveryDays;
    this->PathOfPhoto = PathOfPhoto;
    this->Zero = Zero;
    this->One = One;
    this->Two = Two;
    this->Three = Three;
    this->Four = Four;
    this->Five = Five;
    this->FinalRate = 0;
    this->Avaliability = Avaliability;
    this->Seller_mail = Seller_mail;
}

Product::Product(int ID, string Name, float Price, int Quantity, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                 string PathOfPhoto, string Seller_mail)
{
    this->ID = ID;
    this->Name = Name;
    this->Price = Price;
    this->Quantity = Quantity;
    this->Category = Category;
    this->Offer_Percentage = Offer_Percentage;
    this->NoOfDeliveryDays = NoOfDeliveryDays;
    this->PathOfPhoto = PathOfPhoto;
    this->Zero = 0;
    this->One = 0;
    this->Two = 0;
    this->Three = 0;
    this->Four = 0;
    this->Five = 0;
    this->FinalRate = 0;
    this->Avaliability = true;
    this->Seller_mail = Seller_mail;
}

void Product::CalculateRate(float UserRate)
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
    FinalRate = (double)(One+(2*Two)+(3*Three)+(4*Four)+(5*Five)) / (double)(Zero+One+Two+Three+Four+Five);
}

void Product::CalculatePrice()
{
    PriceAfterOffer = (Price * Offer_Percentage) / 100.0;
}
