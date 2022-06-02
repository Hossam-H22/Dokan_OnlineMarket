#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QImage>
#include <iostream>
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


    void AddProduct(string Name, float Price, int Quantity, string Description, string Category, int Offer_Percentage, int NoOfDeliveryDays,
                    string PathOfPhoto, string Seller_mail);

    void RemoveProduct(int ID);


    bool CkeckNumber(string Number);
    void Sort(string type, vector<Product*> &p);
    void Search(string Name, vector<Product*> pro);
    void ClearSatck();
    void ReloadData();
    string GetDate(int num);
    void Remove_Customer(string mail);
    void Remove_Seller(string mail);

};


class CompareName {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->Name < b->Name);
    }
};
class ComparePriceUp {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->PriceAfterOffer < b->PriceAfterOffer);
    }
};
class ComparePriceDown {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->PriceAfterOffer > b->PriceAfterOffer);
    }
};
class CompareRateUp {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->FinalRate < b->FinalRate);
    }
};
class CompareRateDown {
  public:
    bool operator() (Product *a, Product *b) {
      return (a->FinalRate > b->FinalRate);
    }
};

#endif // CONTROLLER_H





