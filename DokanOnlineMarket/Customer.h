#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <fstream>
#include <iostream>
#include<algorithm>
#include <vector>
#include <unordered_map>
#include"Product.h"
#include "Cart.h"

using namespace std;

class Customer
{
public:
    int ID;
    string  FirstName, SecondName, PhoneNumber, Gender, Email, Password, PathPhoto, Address;
    bool ProfileCompleted;
    unordered_map<int, Product*> Favorite;
    Cart My_Cart ;


    Customer(void);
    Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
             string Password, string Address, string PathPhoto, bool ProfileCompleted);

    Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email, string Password);
    ~Customer(void);
    void IsCompletedProfile();
    void RemoveProductFromFavorite(int id);

};

#endif // CUSTOMER_H
