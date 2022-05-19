#ifndef CART_H
#define CART_H
#include <iostream>
#include <vector>
#include <unordered_map>
#include "Product.h"

using namespace std;

class Cart
{
public:
    double TotalPrice;
    unordered_map<int, Product*> AddedProducts;

    Cart(void);
    ~Cart(void);
    void AddProduct(Product*);
    void RemoveProduct(int);
};

#endif // CART_H
