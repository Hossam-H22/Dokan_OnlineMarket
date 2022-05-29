#ifndef CART_H
#define CART_H
#include <iostream>
#include <vector>
#include <unordered_map>
#include "Product.h"


#include <QDebug>

using namespace std;

class Cart
{
public:
    double TotalPrice;
    int MaxNumberOfDays=0;

    unordered_map<int, pair<Product*, int>> AddedProducts;

    Cart(void);
    ~Cart(void);
    void AddProduct(Product* p, int quantity);
    void RemoveProduct(int id);
};

#endif // CART_H
