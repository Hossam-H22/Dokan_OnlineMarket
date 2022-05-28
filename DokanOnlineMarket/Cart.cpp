#include "Cart.h"


Cart::Cart(void)
{
    TotalPrice = 0;
}

Cart::~Cart(void) {}


void Cart::AddProduct(Product* p, int quantity)
{
    AddedProducts[p->ID] = {p, quantity};
}



void Cart::RemoveProduct(int id, int Check)
{

    if (Check != -1)
    {
        if (AddedProducts[id].second == 0) return;
        else if (AddedProducts[id].first->Avaliability)
        {
            Product *pp = AddedProducts[id].first;
//            AddedProducts[id] = {pp, min(AddedProducts[id].second, AddedProducts[id].first->Quantity)};
            AddProduct(pp, min(AddedProducts[id].second, AddedProducts[id].first->Quantity));
            qDebug() << "it set with min 00000000000000000000000000000000";
        }
        else
        {
            AddedProducts.erase(id);
        }
    }
    else
    {
        AddedProducts.erase(id);
    }

}
