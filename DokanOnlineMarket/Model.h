#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include <QDebug>
#include <QFile>
#include <QCoreApplication>

#include "Seller.h"
#include "Customer.h"
#include "Product.h"


using namespace std;

class Model
{
public:

    map<string, Seller> SellerArr;
    map<string, Customer> CustomerArr;
    map<string, vector<Product*>> CategoryArr;
    vector<Product> ProductArr;
    string CategoryName[14] = {
        "Mobiles, Tablets & Accessories",
        "Computer & Office Supplies",
        "TV & Electronics",
        "Women's Fashion",
        "Men's Fashion",
        "Kids Fashion",
        "Health, Beauty & Perfumes",
        "Supermarket",
        "Home, Furniture & Tools",
        "Kitchen & Appliances",
        "Toys, Games & Baby",
        "Sports, Fitness & Outdoors",
        "Books",
        "Automotive"
    };

    int CountSeller = 1000, CountCustomer = 1000, CountProduct = 100;
    string z;

    void Get_Data();
    void Get_Seller_Data();
    void Get_SellerComments_Data();
    void Get_Product_Data();
    void Get_ProductComments_Data();
    void Get_SellerWalletHistory_Data();
    void Get_Customer_Data();
    void Get_CustomerAddress_Data();
    void Get_CustomerFavorite_Data();
    void Get_CustomerCartProduct_Data();

    void Push_Data();
    void Push_Seller_Data();
    void Push_Customer_Data();
    void Push_Product_Data();


    Model();
    Model(string s);
    ~Model();
};

#endif // MODEL_H
