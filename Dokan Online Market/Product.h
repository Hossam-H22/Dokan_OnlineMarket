#pragma once
#include <iostream>
class Product
{
public:
	int ID, Quantity, Seller_ID, Total_Rate, NoOfVoters, Offer_Percentage, NoOfDeliveryDays;
	float Price, PriceAfterOffer, FinalRate;
	bool Avaliability;
	std::string Name, Category, PathOfPhoto;


	Product(void);
	~Product(void);
	Product(int, std::string, float, int, std::string, int, int, int, std::string);
	void CalculateRate(int);
	void CalculatePrice();
};
<<<<<<< HEAD
=======

>>>>>>> 437c9ad1ca26b74f151432796ea42aa646c922a5
