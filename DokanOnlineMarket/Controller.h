#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<iostream>
#include <string>
#include <vector>
#include <map>
#include "Seller.h"
#include "Customer.h"
#include "Product.h"
#include "Model.h"

using namespace std;

class Controller
{

public:
    Model *data;

    Seller *s;
    Customer *c;
    Product *p;

    Controller(Model *data);
    ~Controller(void);

    void LogSeller(string Email, string Password);
    void LogCustomer(string Email, string Password);

    void RegisterSeller(string FirstName, string SecondName, string Phone, string Email, string Password, string Gender);
    void RegisterCustomer(string FirstName, string SecondName, string PhoneNumber, string Gender, string Email, string Password);



};

#endif // CONTROLLER_H
