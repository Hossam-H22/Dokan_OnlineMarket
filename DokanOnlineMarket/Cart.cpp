#include "Cart.h"


Cart::Cart(void)
{
    TotalPrice = 0;
}

Cart::~Cart(void) {}


void Cart::AddProduct(Product* p)
{
    TotalPrice += p->Price;
    AddedProducts[p->ID] = p;
}

void Cart::RemoveProduct(int id)
{
    if (AddedProducts[id] == nullptr) return;

    TotalPrice -= AddedProducts[id]->Price;
    AddedProducts.erase(id);
//    unordered_map<int, Product*>::iterator it;
//    for (it=AddedProducts.begin() ; it!=AddedProducts.end() ; it++)
//    {
//        if (it->first > id)
//        {
//            AddedProducts[it->second->ID-1] = it->second;
//            AddedProducts[it->first] = nullptr;
//        }
//    }
}

