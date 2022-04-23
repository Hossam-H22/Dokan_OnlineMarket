#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <vector>
using namespace std;

class Product
{
public:
    int ID, Quantity, NoOfVoters, Offer_Percentage, NoOfDeliveryDays;
    float Price, PriceAfterOffer, FinalRate, Total_Rate;
    bool Avaliability;
    string Name, Category, Seller_mail, PathOfPhoto;
    vector<string> Comments;


    Product(void);
    ~Product(void);
    Product(int, string, float, int, string, string, int, int, string);
    Product(int, string, float, int, string, string, int, int);
    void CalculateRate(float);
    void CalculatePrice();

};

#endif // PRODUCT_H
