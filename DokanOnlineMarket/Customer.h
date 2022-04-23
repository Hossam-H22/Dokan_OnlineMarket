#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <vector>
#include"Product.h"
#include "Cart.h"

using namespace std;

class Customer
{
public:
    int ID, Phone;
    string  Name, Address, PhoneNumber, Gender, Email, Password, PathPhoto;
    vector<Product*> Favorite;
    Cart My_Cart ;
    Customer(void);
    Customer(int, string, string, string, string, string, string);
    Customer(int, string, string, string, string, string, string, string);
    ~Customer(void);
    Product* Search(string);
};

#endif // CUSTOMER_H
