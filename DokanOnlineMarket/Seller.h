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
    string FirstName, SecondName, Email, Gender, Phone, Address, Password, Path_photo, Description;
    float Wallet, FinalRate, Total_Rate;
    bool ProfileCompleted;
    vector<string> Comments;
    vector<Product*> SelledProducts, Wallet_History;

    Seller(void);
    Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender, string Address,
           string Description, float Wallet, int NoOfVoters, float Total_Rate, string photo, bool ProfileCompleted);

    Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender);
    ~Seller(void);
    void CalculateRate(float = -1);
    void IsCompletedProfile();

};

#endif // SELLER_H
