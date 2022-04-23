#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
public:
    int ID, Quantity, Seller_ID, NoOfVoters, Offer_Percentage, NoOfDeliveryDays;
    float Price, PriceAfterOffer, FinalRate, Total_Rate;
    bool Avaliability;
    string Name, Category, PathOfPhoto;


    Product(void);
    ~Product(void);
    Product(int, string, float, int, string, int, int, int, string);
    Product(int, string, float, int, string, int, int, int);
    void CalculateRate(float);
    void CalculatePrice();

};

#endif // PRODUCT_H
