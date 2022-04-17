#include "Product.h"
#include <cmath>
void Product::CalculateRate()
{
	FinalRate = round ((double) Total_Rate / (double) NoOfVoters);
}
void Product::CalculatePrice()
{
	PriceAfterOffer = (Price * Offer_Percentage) / 100.0; 
}