#ifndef CART_H
#define CART_H
#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

class Cart
{
public:
    double TotalPrice;
    vector<Product*> AddedProducts;

    Cart(void);
    ~Cart(void);
    double DisplayPrice();
    void AddProduct(Product*);
    void RemoveProduct(int);
};

#endif // CART_H
