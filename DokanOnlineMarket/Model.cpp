#include "Model.h"


Model::Model(string s)
{
    this->PathOfFile = s;
//    start();
    Get_Data();
}
Model::Model()
{
//    Get_Data();
}
Model::~Model()
{

}


//void Model::test()
//{
//    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
//    mydb.setDatabaseName("E:/test.sqlite");
//    if (mydb.open()) qDebug() << "Opennnnnn";
//    else qDebug() << "Neverrrrr";
//}











void Model::start()
{
    //****************************************************************
    Product *p1=new Product, *p2=new Product, *p3=new Product, *p4=new Product, *p5=new Product, *p6=new Product;

    p1->Category = CategoryName[0];
    p2->Category = CategoryName[0];
    p3->Category = CategoryName[0];
    p4->Category = CategoryName[0];
    p5->Category = CategoryName[0];
    p6->Category = CategoryName[1];
    p1->Name = "product 1";
    p2->Name = "product 3";
    p3->Name = "product 4";
    p4->Name = "product 2";
    p5->Name = "product 5";
    p6->Name = "product 6";
    p1->Quantity=3;
    p2->Quantity=5;
    p3->Quantity=5;
    p4->Quantity=5;
    p5->Quantity=5;
    p6->Quantity=0;
    p1->Avaliability=1;
    p1->NoOfDeliveryDays=6;
    p6->Avaliability = 0;
    p1->ID = 100;
    p2->ID = 101;
    p3->ID = 102;
    p4->ID = 103;
    p5->ID = 104;
    p6->ID = 105;
    p1->Price=20;
    p1->Offer_Percentage = 50;
    p1->PriceAfterOffer = 10;
    p2->PriceAfterOffer = 15;
    p3->PriceAfterOffer = 7;
    p4->PriceAfterOffer = 20;
    p5->PriceAfterOffer = 3;
    p1->Seller_mail="11";
    p2->Seller_mail="11";
    p3->Seller_mail="11";
    p4->Seller_mail="11";
    p5->Seller_mail="11";
    p6->Seller_mail="11";
    CountProduct = 106;
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->Comments.push_back("testttttt");
    p1->CalculateRate(2.5);
    p1->PathOfPhoto = "100.jpg";
    p2->PathOfPhoto = "100.jpg";
    p3->PathOfPhoto = "100.jpg";
    p4->PathOfPhoto = "100.jpg";
    p5->PathOfPhoto = "100.jpg";
    p6->PathOfPhoto = "100.jpg";


    ProductArr2[p1->ID] = p1;
    ProductArr2[p2->ID] = p2;
    ProductArr2[p3->ID] = p3;
    ProductArr2[p4->ID] = p4;
    ProductArr2[p5->ID] = p5;
    ProductArr2[p6->ID] = p6;


    CategoryArr[p1->Category].push_back(ProductArr2[p1->ID]);
    CategoryArr[p2->Category].push_back(ProductArr2[p2->ID]);
    CategoryArr[p3->Category].push_back(ProductArr2[p3->ID]);
    CategoryArr[p4->Category].push_back(ProductArr2[p4->ID]);
    CategoryArr[p5->Category].push_back(ProductArr2[p5->ID]);
    CategoryArr[p6->Category].push_back(ProductArr2[p6->ID]);
    ProductArr2[p2->ID]->Name = "test";





    Seller s1(1000, "h", "o", "00000", "11", "11", "0");
    SellerArr["11"]=s1;
    SellerArr["11"].SelledProducts[ProductArr2[p1->ID]->ID] = ProductArr2[p1->ID];
    SellerArr["11"].SelledProducts[ProductArr2[p2->ID]->ID] = ProductArr2[p2->ID];
    SellerArr["11"].SelledProducts[ProductArr2[p3->ID]->ID] = ProductArr2[p3->ID];
    SellerArr["11"].SelledProducts[ProductArr2[p4->ID]->ID] = ProductArr2[p4->ID];
    SellerArr["11"].SelledProducts[ProductArr2[p5->ID]->ID] = ProductArr2[p5->ID];
    SellerArr["11"].SelledProducts[ProductArr2[p6->ID]->ID] = ProductArr2[p6->ID];




    SellerArr["11"].AddToWallet(ProductArr2[p6->ID], 1);
    SellerArr["11"].AddToWallet(ProductArr2[p2->ID], 2);
    SellerArr["11"].AddToWallet(ProductArr2[p3->ID], 1);
    SellerArr["11"].AddToWallet(ProductArr2[p5->ID], 4);






    Customer c1(1000, "HH", "BB", "0010101", "male", "11", "11");
    CustomerArr["11"]=c1;
    CustomerArr["11"].Favorite[ProductArr2[p6->ID]->ID] = ProductArr2[p6->ID];
    CustomerArr["11"].Favorite[ProductArr2[p2->ID]->ID] = ProductArr2[p2->ID];

    CustomerArr["11"].My_Cart.AddProduct(ProductArr2[p1->ID], 2);
    CustomerArr["11"].My_Cart.AddProduct(ProductArr2[p3->ID], 1);
    CustomerArr["11"].My_Cart.AddProduct(ProductArr2[p4->ID], 1);



    Customer c2(1001, "TT", "VV", "0010101", "male", "00", "00");
    CustomerArr["00"]=c2;
    CustomerArr["00"].Favorite[ProductArr2[p6->ID]->ID] = ProductArr2[p6->ID];
    CustomerArr["00"].Favorite[ProductArr2[p2->ID]->ID] = ProductArr2[p2->ID];

    CustomerArr["00"].My_Cart.AddProduct(ProductArr2[p1->ID], 3);
    CustomerArr["00"].My_Cart.AddProduct(ProductArr2[p3->ID], 1);
    CustomerArr["00"].My_Cart.AddProduct(ProductArr2[p4->ID], 1);



    //*******************************************************************

}



/**
 * @brief Model::Get_Data
 */
void Model::Get_Data()
{
    Get_Seller_Data();
    Get_SellerComments_Data();
    Get_SellerWalletHistory_Data();
    Get_Product_Data();
    Get_ProductComments_Data();
    Get_Customer_Data();
    Get_CustomerFavorite_Data();
    Get_CustomerCartProduct_Data();
}

/**
 * @brief Model::Get_Seller_Data
 */
void Model::Get_Seller_Data()
{
    int ID, NoOfVoters;
    string FirstName, SecondName, Email, Gender, Phone, Address, Password, Path_photo, Description;
    float Total_Rate;
    bool ProfileCompleted;

    string x = PathOfFile + "data/Seller.csv";
    QFile file(x.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<<"File Product data Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Product data Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        ID = stoi(list[0].toStdString());
        FirstName = list[1].toStdString();
        SecondName = list[2].toStdString();
        Phone = list[3].toStdString();
        Email = list[4].toStdString();
        Password = list[5].toStdString();
        Gender = list[6].toStdString();
        Address = list[7].toStdString();
        Description = list[8].toStdString();
        NoOfVoters = stoi(list[9].toStdString());
        Total_Rate = stof(list[10].toStdString());
        ProfileCompleted = stoi(list[11].toStdString());
        Seller s(ID, FirstName, SecondName, Phone, Email, Password, Gender, Address, Description,
                 NoOfVoters, Total_Rate, ProfileCompleted);

        s.CalculateRate();
        if (ProfileCompleted) s.Path_photo = to_string(ID)+".jpg";
        SellerArr[Email] = s;
        CountSeller = max(ID, CountSeller);
    }
    file.close();
    file.remove();

}

/**
 * @brief Model::Get_SellerComments_Data
 */
void Model::Get_SellerComments_Data()
{
    string Seller_mail, Comment;

    string x = PathOfFile + "data/Seller Comment.csv";
    QFile file(x.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Comments of Seller Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Product data Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        Seller_mail = list[0].toStdString();
        Comment = list[1].toStdString();

        SellerArr[Seller_mail].Comments.push_back(Comment);
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_SellerWalletHistory_Data
 */
void Model::Get_SellerWalletHistory_Data()
{
    string Seller_mail;

    string x = PathOfFile + "data/Seller Wallet History.csv";
    QFile file(x.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Wallet History of Seller Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Wallet History of Seller Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Seller::WalletData new_data;
        Seller_mail = list[0].toStdString();
        new_data.id = stoi(list[1].toStdString());
        new_data.name = list[2].toStdString();
        new_data.quantity = stoi(list[3].toStdString());
        new_data.price = stof(list[4].toStdString());
        new_data.date = list[5].toStdString();

        SellerArr[Seller_mail].Wallet_History2.push_back(new_data);
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_Product_Data
 */
void Model::Get_Product_Data()
{
    string Name, Category, Seller_mail, Description;
    int ID, Quantity, Offer_Percentage, NoOfDeliveryDays;
    int Zero, One, Two, Three, Four, Five;
    float Price;
    bool Avaliability;

    string x = PathOfFile + "data/Product.csv";
    QFile file(x.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<<"File Product data Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Product data Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        ID = stoi(list[0].toStdString());
        Name = list[1].toStdString();
        Price = stof(list[2].toStdString());
        Quantity = stoi(list[3].toStdString());
        Description = list[4].toStdString();
        Category = list[5].toStdString();
        Offer_Percentage = stoi(list[6].toStdString());
        NoOfDeliveryDays = stoi(list[7].toStdString());
        Zero = stoi(list[8].toStdString());
        One = stoi(list[9].toStdString());
        Two = stoi(list[10].toStdString());
        Three = stoi(list[11].toStdString());
        Four = stoi(list[12].toStdString());
        Five = stoi(list[13].toStdString());
        Avaliability = stoi(list[14].toStdString());
        Seller_mail = list[15].toStdString();

        Product *p = new Product(ID, Name, Price, Quantity, Description, Category, Offer_Percentage, NoOfDeliveryDays,
               Zero, One, Two, Three, Four, Five, Avaliability, Seller_mail);
        p->CalculateRate();
        p->CalculatePrice();
        p->PathOfPhoto = to_string(ID)+".jpg";

        ProductArr2[ID] = p;
        SellerArr[Seller_mail].SelledProducts[ID] = p;
        CategoryArr[Category].push_back(p);
        CountProduct = max(ID,CountProduct);
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_ProductComments_Data
 */
void Model::Get_ProductComments_Data()
{
    int Product_ID;
    string Comment;

    string x = PathOfFile + "data/Product Comments.csv";
    QFile file(x.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Comment of Product Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Comment of Product Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        Product_ID = stoi(list[0].toStdString());
        Comment = list[1].toStdString();

        ProductArr2[Product_ID]->Comments.push_back(Comment);
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_Customer_Data
 */
void Model::Get_Customer_Data()
{
    int ID;
    string  FirstName, SecondName, PhoneNumber, Gender, Email, Password, PathPhoto, Interested, Address;
    bool ProfileCompleted;

    string x = PathOfFile + "data/Customer.csv";
    QFile file(x.c_str());

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Customer data Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Customer data Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        ID = stoi(list[0].toStdString());
        FirstName = list[1].toStdString();
        SecondName = list[2].toStdString();
        PhoneNumber = list[3].toStdString();
        Gender = list[4].toStdString();
        Email = list[5].toStdString();
        Password = list[6].toStdString();
        Address = list[7].toStdString();
        ProfileCompleted = stoi(list[8].toStdString());

        Customer c(ID, FirstName, SecondName, PhoneNumber, Gender, Email, Password, Address, ProfileCompleted);
        if (ProfileCompleted) c.PathPhoto = to_string(ID)+".jpg";
        CustomerArr[Email] = c;
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_CustomerFavorite_Data
 */
void Model::Get_CustomerFavorite_Data()
{
    int Product_ID;
    string Customer_mail;

    string x = PathOfFile + "data/Customer Favorites.csv";
    QFile file(x.c_str());

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Favorite of Customer Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Favorite of Customer Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Customer_mail = list[0].toStdString();
        Product_ID = stoi(list[1].toStdString());

        CustomerArr[Customer_mail].Favorite[Product_ID] = ProductArr2[Product_ID];
    }
    file.close();
    file.remove();
}

/**
 * @brief Model::Get_CustomerCartProduct_Data
 */
void Model::Get_CustomerCartProduct_Data()
{
    int Product_ID, quantity;
    string Customer_mail;

    string x = PathOfFile + "data/Customer Cart Product.csv";
    QFile file(x.c_str());

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug()<< "File Cart data of Customer Opened Successfully for reading";
    else qDebug() << file.errorString() << "    File Cart data of Customer Not Opened for reading";

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Customer_mail = list[0].toStdString();
        Product_ID = stoi(list[1].toStdString());
        quantity = stoi(list[2].toStdString());

        CustomerArr[Customer_mail].My_Cart.AddProduct(ProductArr2[Product_ID], quantity);
    }
    file.close();
    file.remove();
}






/**
 * @brief Model::Push_Data
 *
 * This function call all functions where used to push data from program (data structure)
 * to local storage in your computer in CSV files
 */
void Model::Push_Data()
{
    Push_Seller_Data();
    Push_Customer_Data();
    Push_Product_Data();
}

/**
 * @brief Model::Push_Seller_Data
 *
 * this fuction take data of seller (Personal info, Comments, wallet History) where saved in data structure
 *
 * -->>  unordered_map<string, Seller> SellerArr
 *
 * and push them in files CSV to store them in your local storage in your computer
 */
void Model::Push_Seller_Data()
{
    // Open file of Sellers
    string x1 = PathOfFile + "data/Seller.csv";
    QFile seller(x1.c_str());
    if(seller.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Seller data Opened Successfully";
    else qDebug()<<seller.errorString() << "    File Product data Not Opened";
    QTextStream sell(&seller);


    // open file of Comments for seller
    string x2 = PathOfFile + "data/Seller Comment.csv";
    QFile comments(x2.c_str());
    if(comments.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Seller Comments Opened Successfully";
    else qDebug()<<comments.errorString()<<"    File Seller Comments Not Opened";
    QTextStream comm(&comments);


    // open file of Wallet History for seller
    string x3 = PathOfFile + "data/Seller Wallet History.csv";
    QFile Wallet(x3.c_str());
    if(Wallet.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Seller Wallet Opened Successfully";
    else qDebug()<<Wallet.errorString()<<"    File Seller Comments Not Opened";
    QTextStream wall(&Wallet);



    for (auto mpsel: SellerArr)
    {
        // skip wrong data
        if (mpsel.second.ID ==0) continue;

        // Push Seller data to file
        sell<<mpsel.second.ID<<','<<mpsel.second.FirstName.c_str()<<','<<mpsel.second.SecondName.c_str()<<','
           <<mpsel.second.Phone.c_str()<<','<<mpsel.second.Email.c_str()<<','<<mpsel.second.Password.c_str()<<','
             <<mpsel.second.Gender.c_str()<<','<<mpsel.second.Address.c_str()<<','<<mpsel.second.Description.c_str()<<','
               <<mpsel.second.NoOfVoters<<','<<mpsel.second.Total_Rate<<','<<mpsel.second.ProfileCompleted<<'\n';


        // Push Seller Comments to file
        for (auto vecCom: mpsel.second.Comments)
        {
            //    Seller E-mail   --     Comment
            comm<<mpsel.first.c_str()<<','<<vecCom.c_str()<<'\n';
        }


        // Push Wallet History of seller to file
        for (auto vecWal: mpsel.second.Wallet_History2)
        {
            // Seller E-mail - Product ID  -  Product name  -  Quantity  -  price  -  Date Sold
            wall<<mpsel.first.c_str()<<','<<vecWal.id<<','<<vecWal.name.c_str()<<','<<vecWal.quantity
               <<','<<vecWal.price<<','<<vecWal.date.c_str()<<'\n';
        }

    }


    //  close all files
    comments.flush();
    comments.close();

    Wallet.flush();
    Wallet.close();

    seller.flush();
    seller.close();
}

/**
 * @brief Model::Push_Customer_Data
 *
 * this fuction take data of Customer (Personal info, Favorit list, Cart dat) where saved in data structure
 *
 * -->>  unordered_map<string, Customer> CustomerArr
 *
 * and push them in files CSV to store them in your local storage in your computer
 */
void Model::Push_Customer_Data()
{
    // Open file of Customer
    string x1 = PathOfFile + "data/Customer.csv";
    QFile customer(x1.c_str());
    if(customer.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Customer data Opened Successfully";
    else qDebug() << customer.errorString() << "    File Product data Not Opened";
    QTextStream cust(&customer);


    // Open file of Favorites list of Customer
    string x2 = PathOfFile + "data/Customer Favorites.csv";
    QFile favorite(x2.c_str());
    if(favorite.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Favorite list of Customer Opened Successfully";
    else qDebug() << favorite.errorString() << "    File Favorite list of Customer Not Opened";
    QTextStream fav(&favorite);


    // Open file of Cart info of Customer Product
    string x3 = PathOfFile + "data/Customer Cart Product.csv";
    QFile cart(x3.c_str());
    if(cart.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Cart info of Customer Opened Successfully";
    else qDebug() << cart.errorString() << "    File Cart info of Customer Not Opened";
    QTextStream ca(&cart);



    for (auto mpcust: CustomerArr)
    {
        // skip wrong data
        if (mpcust.second.ID ==0) continue;

        // Push Customer data to file
        cust<<mpcust.second.ID<<','<<mpcust.second.FirstName.c_str()<<','<<mpcust.second.SecondName.c_str()<<','
           <<mpcust.second.PhoneNumber.c_str()<<','<<mpcust.second.Gender.c_str()<<','<<mpcust.second.Email.c_str()<<','
            <<mpcust.second.Password.c_str()<<','<<mpcust.second.Address.c_str()<<','<<mpcust.second.ProfileCompleted<<'\n';

        // Push favorite list of Customer to file
        for (auto mpfav: mpcust.second.Favorite)
        {
            //    Customer E-mail    --      Product ID
            fav<<mpcust.first.c_str()<<','<<mpfav.first<<'\n';
        }

        // Push Cart data of Customer to file
        for (auto mpCart: mpcust.second.My_Cart.AddedProducts)
        {
            //  Customer E-mail  -  Product ID  -  Product Quantity
            ca<<mpcust.first.c_str()<<','<<mpCart.second.first->ID<<','<<mpCart.second.second<<'\n';
        }

    }


    // Close all files
    cart.flush();
    cart.close();

    favorite.flush();
    favorite.close();

    customer.flush();
    customer.close();
}

/**
 * @brief Model::Push_Product_Data
 *
 * this fuction take data of Product (info, Comments) where saved in data structure
 *
 * -->> unordered_map<int, Product*> ProductArr2
 *
 * and push them in files CSV to store them in your local storage in your computer
 */
void Model::Push_Product_Data()
{
    // Open file of Product
    string x = PathOfFile + "data/Product.csv";
    QFile product(x.c_str());
    if(product.open(QFile::WriteOnly | QFile::Text)) qDebug()<<"File Product data Opened Successfully";
    else qDebug()<<product.errorString() << "    File Product data Not Opened";
    QTextStream prod(&product);


    // Open file of Product Comments
    string x1 = PathOfFile + "data/Product Comments.csv";
    QFile comments(x1.c_str());
    if(comments.open(QFile::WriteOnly |QFile::Truncate)) qDebug()<<"File Comments for Product Opened Successfully";
    else qDebug()<<comments.errorString()<< "    File Comments for Product Not Opened";
    QTextStream comm(&comments);


    // Push Product data to file
    for (auto mpPro: ProductArr2)
    {
        // skip wrong data
        if (mpPro.second->ID == 0) continue;

        prod<<mpPro.second->ID<<','<<mpPro.second->Name.c_str()<<','<<mpPro.second->Price<<','
           <<mpPro.second->Quantity<<','<<mpPro.second->Description.c_str()<<','<<mpPro.second->Category.c_str()<<','
          <<mpPro.second->Offer_Percentage<<','<<mpPro.second->NoOfDeliveryDays<<','
         <<mpPro.second->Zero<<','<<mpPro.second->One<<','<<mpPro.second->Two<<','<<mpPro.second->Three<<','
        <<mpPro.second->Four<<','<<mpPro.second->Five<<','<<mpPro.second->Avaliability<<','<<mpPro.second->Seller_mail.c_str()<<'\n';


        // Push Comments of product to file
        for (auto vecCom: mpPro.second->Comments)
        {
            //    Product ID    --     Comment
            comm<<mpPro.second->ID<<','<<vecCom.c_str()<<'\n';
        }
    }


    // Close all files
    comments.flush();
    comments.close();

    product.flush();
    product.close();
}


