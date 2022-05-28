#ifndef SELLER_H
#define SELLER_H
#include <iostream>
#include <vector>
#include <unordered_map>
#include <QDate>
#include "Product.h"

using namespace std;

class Seller
{
public:
    struct WalletData{
        int id;
        string name;
        float price;
        string date;
        int quantity;
    };


    int ID, NoOfVoters;
    string FirstName, SecondName, Email, Gender, Phone, Address, Password, Path_photo, Description;
    float Wallet, FinalRate, Total_Rate;
    bool ProfileCompleted;
    vector<string> Comments;
    unordered_map<int, Product*> SelledProducts;
    vector<WalletData> Wallet_History2;

    Seller(void);
    Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender, string Address,
           string Description, int NoOfVoters, float Total_Rate, bool ProfileCompleted);

    Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender);
    ~Seller(void);
    void CalculateRate(float = -1);
    void IsCompletedProfile();
    void AddToWallet(Product *pro, int quantity);
    void RemoveProduct(int id);

};

#endif // SELLER_H
