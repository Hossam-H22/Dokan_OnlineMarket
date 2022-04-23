#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<iostream>
#include <vector>
#include <map>
#include "Seller.h"
#include "Customer.h"
#include "Product.h"

using namespace std;

class Controller
{

public:

    map<string, Seller> SellerArr;
    map<string, Customer> CustomerArr;
    vector<Product> ProductArr;


//	string	Product_PhotoPath = "Online Marketplace\\images\\Products\\",
//		Seller_PhotoPath = "Online Marketplace\\images\\Seller\\",
//		Customer_PhotoPath = "Online Marketplace\\images\\Customer\\";

    int CountSeller = 1000, CountCustomer = 1000, CountProduct = 100;


    Controller(void);
    ~Controller(void);

    Seller* LogSeller(string, string);
    Customer* LogCustomer(string, string);

    Seller* RegisterSeller(string, string, string, string, string, string, string);
    Customer* RegisterCustomer(string, string, string, string, string, string);

//    void ReadSellerDetails(void);
};

#endif // CONTROLLER_H
