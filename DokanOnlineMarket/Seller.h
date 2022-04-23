#ifndef SELLER_H
#define SELLER_H
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

class Seller
{
public:
    int ID, NoOfVoters;
    string Name, Email, Gender, Phone, Address, Password, Path_photo;
    float Wallet, FinalRate, Total_Rate;
    vector<string> Comments, Wallet_Hestory;
    vector<Product*> SelledProducts;

    Seller(void);
    Seller(int, string, string, string, string, string, string, string);
    Seller(int, string, string, string, string, string, string);
    ~Seller(void);
    void CalculateRate(float);

};

#endif // SELLER_H
