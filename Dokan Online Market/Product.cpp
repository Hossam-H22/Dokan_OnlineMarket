#include "Product.h"
#include <cmath>
Product::Product() {}
Product::~Product() {}

Product::Product(int id, std::string name, float price, int quantity, std::string categoty_name, int sellerID, int offer_percentage, int delivery, std::string photo)
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
}


void Product::CalculateRate(int UserRate)
{
	Total_Rate += UserRate;
	NoOfVoters++;
	FinalRate = round((double)Total_Rate / (double)NoOfVoters);
}
void Product::CalculatePrice()
{
	PriceAfterOffer = (Price * Offer_Percentage) / 100.0;
}