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

    bool CkeckNumber(string Number);
    void AddProduct(string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                    string PathOfPhoto, string Seller_mail);
    void EditProduct(int ID, string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                    string PathOfPhoto, string Seller_mail);

    void Sort(string type, vector<Product*> &p);
    void Search(string Name, string Category, vector<Product*> pro);


};


class CompareName {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->Name < b->Name);
    }
};
class ComparePrice {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->PriceAfterOffer < b->PriceAfterOffer);
    }
};
class CompareRate {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->FinalRate < b->FinalRate);
    }
};

#endif // CONTROLLER_H
