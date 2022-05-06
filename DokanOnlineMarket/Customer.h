#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <fstream>
#include <iostream>
#include<algorithm>
#include <vector>
#include"Product.h"
#include "Cart.h"

using namespace std;

class Customer
{
public:
    int ID;
    string  FirstName, SecondName, PhoneNumber, Gender, Email, Password, PathPhoto, Interested, Address;
    bool ProfileCompleted;
    vector<Product*> Favorite;
//    vector<string> Address;
    Cart My_Cart ;


    Customer(void);
    Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email,
             string Password, string Address, string Interested, string PathPhoto, bool ProfileCompleted);

    Customer(int ID, string FirstName, string SecondName, string PhoneNumber, string Gender, string Email, string Password);
    ~Customer(void);
    void IsCompletedProfile();
    Product* Search(string);

};

#endif // CUSTOMER_H
