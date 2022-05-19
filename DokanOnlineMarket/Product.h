#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <vector>
#include <QImage>
using namespace std;

class Product
{
public:
    int ID, Quantity, Offer_Percentage, NoOfDeliveryDays;
    int Zero, One, Two, Three, Four, Five, NoVoters;
    float Price, PriceAfterOffer, FinalRate;
    bool Avaliability;
    QImage img;
    string Name, Category, Seller_mail, PathOfPhoto, Description;
    vector<string> Comments;


    Product(void);
    ~Product(void);
    Product(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays, string PathOfPhoto,
           int Zero, int One, int Two, int Three, int Four, int Five, bool Avaliability, string Seller_mail);
    Product(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
            string PathOfPhoto, string Seller_mail);

    void CalculateRate(float = -1);
    void CalculatePrice();

};

#endif // PRODUCT_H
