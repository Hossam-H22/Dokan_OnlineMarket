#include <string>
class Product
{
	int ID, Quantity, Seller_ID, Total_Rate, NoOfVoters, Offer_Percentage, NoOfDeliveryDays;
	float Price, PriceAfterOffer, FinalRate;
	bool Avaliability; 
	std::string Name, Category, PathOfPhoto;

	void CalculateRate();
	void CalculatePrice();
};