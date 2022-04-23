#ifndef SELLER_H
#define SELLER_H
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

class Seller
{
public:
    int ID;
    string Name, Email, Gender, Phone, Address, Password, Path_photo;
    vector<Product*> SelledProducts;

    Seller(void);
    Seller(int, string, string, string, string, string, string, string);
    Seller(int, string, string, string, string, string, string);
    ~Seller(void);

};

#endif // SELLER_H
