#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
//#include <map>
#include <unordered_map>

#include <QDir>
#include <QDebug>
#include <QFile>
#include <QCoreApplication>
//#include <QtSql/QtSql>
//#include <QtSql/QSqlDatabase>
//#include <QFileInfo>

#include "Seller.h"
#include "Customer.h"
#include "Product.h"


using namespace std;

class Model
{
public:

    /**
    * @brief SellerArr
    *
    * unordered_map store data of all Sellers
    *
    * key: E-mail   ---    Value: Object of Seller
    */
    unordered_map<string, Seller> SellerArr;

    /**
    * @brief CustomerArr
    *
    * unordered_map store data of all Customers
    *
    * key: E-mail   ---    Value: Object of Customer
    */
    unordered_map<string, Customer> CustomerArr;

    /**
     * @brief ProductArr2
     *
     * unordered_map store data of all Products as pointer
     *
     * key: ID   ---   Value: Pointer of Product
     */
    unordered_map<int, Product*> ProductArr2;

    /**
     * @brief CategoryArr
     *
     * unordered_map store Products of each Category
     *
     * key: Category name    ---   Value: list Of Products in this category
     */
    unordered_map<string, vector<Product*>> CategoryArr;

    /**
     * @brief ProductArrView
     *
     * vector use as temporary to store product where show for user
     *
     * it can be result of sort or search or all product in currunt Category
     */
    vector<Product*> ProductArrView;

    /**
     * @brief BackToPage
     *
     * stack is use to make BackWard system
     *
     * It is heve to parts :-
     *
     * part 1: Page Number    ---    part 2: Product ID
     */
    stack<pair<int, int>> BackToPage;

    string CategoryName[14] = {
        "Mobiles & Tablets & Accessories",
        "Computer & Office Supplies",
        "TV & Electronics",
        "Women's Fashion",
        "Men's Fashion",
        "Kids Fashion",
        "Health & Beauty & Perfumes",
        "Supermarket",
        "Home & Furniture & Tools",
        "Kitchen & Appliances",
        "Toys & Games & Baby",
        "Sports & Fitness & Outdoors",
        "Books",
        "Automotive"
    };
    string months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int NumOfDaysIMonth [12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


    int CountSeller=1000, CountCustomer=1000, CountProduct=100;
    string PathOfFile;


    void start();

//    void test();




    void Get_Data();
    void Get_Seller_Data();
    void Get_SellerComments_Data();
    void Get_SellerWalletHistory_Data();
    void Get_Product_Data();
    void Get_ProductComments_Data();
    void Get_Customer_Data();
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
