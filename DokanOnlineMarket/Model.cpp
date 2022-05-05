#include "Model.h"


Model::Model(string s)
{
    this->PathOfFile = s;
    Get_Data();
    Product p(0, "0", 0, 0, "0", 0, 0, "0", "0");
    ProductArr.push_back(p);
}
Model::Model()
{
    Get_Data();
    Product p(0, "0", 0, 0, "0", 0, 0, "0", "0");
    ProductArr.push_back(p);
}
Model::~Model()
{

}



void Model::Get_Data()
{
    Get_Seller_Data();
    Get_SellerComments_Data();
    Get_Product_Data();
    Get_ProductComments_Data();
    Get_SellerWalletHistory_Data();
    Get_Customer_Data();
    Get_CustomerAddress_Data();
    Get_CustomerFavorite_Data();
    Get_CustomerCartProduct_Data();
}
void Model::Get_Seller_Data()
{
    int ID, NoOfVoters;
    string FirstName, SecondName, Email, Gender, Phone, Address, Password, Path_photo, Description;
    float Wallet, Total_Rate;
    bool ProfileCompleted;

    QFile file(":/data/assets/data/Seller.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
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
        Wallet = stof(list[9].toStdString());
        NoOfVoters = stoi(list[10].toStdString());
        Total_Rate = stof(list[11].toStdString());
        Path_photo = list[12].toStdString();
        ProfileCompleted = stoi(list[13].toStdString());
        Seller s(ID, FirstName, SecondName, Phone, Email, Password, Gender, Address, Description, Wallet,
                 NoOfVoters, Total_Rate, Path_photo, ProfileCompleted);

        s.CalculateRate();
        SellerArr[Email] = s;
        CountSeller = ID;
    }
    file.close();

}
void Model::Get_SellerComments_Data()
{
    string Seller_mail, Comment;
    QFile file(":/data/assets/data/Seller Comment.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        Seller_mail = list[0].toStdString();
        Comment = list[1].toStdString();

        SellerArr[Seller_mail].Comments.push_back(Comment);
    }
    file.close();
}
void Model::Get_Product_Data()
{
    int ID, Quantity, Offer_Percentage, NoOfDeliveryDays;
    int Zero, One, Two, Three, Four, Five;
    float Price;
    bool Avaliability;
    string Name, Category, Seller_mail, PathOfPhoto;

    QFile file(":/data/assets/data/Product.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        ID = stoi(list[0].toStdString());
        Name = list[1].toStdString();
        Price = stof(list[2].toStdString());
        Quantity = stoi(list[3].toStdString());
        Category = list[4].toStdString();
        Offer_Percentage = stoi(list[5].toStdString());
        NoOfDeliveryDays = stoi(list[6].toStdString());
        PathOfPhoto = list[7].toStdString();
        Zero = stoi(list[8].toStdString());
        One = stoi(list[9].toStdString());
        Two = stoi(list[10].toStdString());
        Three = stoi(list[11].toStdString());
        Four = stoi(list[12].toStdString());
        Five = stoi(list[13].toStdString());
        Avaliability = stoi(list[14].toStdString());
        Seller_mail = list[15].toStdString();


        Product p(ID, Name, Price, Quantity, Category, Offer_Percentage, NoOfDeliveryDays, PathOfPhoto,
               Zero, One, Two, Three, Four, Five, Avaliability, Seller_mail);
        p.CalculateRate();
        p.CalculatePrice();

        ProductArr.push_back(p);
        Product *new_P = new Product();
        new_P = &p;
        SellerArr[Seller_mail].SelledProducts.push_back(new_P);
        CategoryArr[Category].push_back(new_P);
        CountProduct = ID;
    }
    file.close();

}
void Model::Get_ProductComments_Data()
{
    int Product_ID;
    string Comment;
    QFile file(":/data/assets/data/Product Comments.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        Product_ID = stoi(list[0].toStdString());
        Comment = list[1].toStdString();

        ProductArr[Product_ID-100].Comments.push_back(Comment);
    }
    file.close();
}
void Model::Get_SellerWalletHistory_Data()
{
    int Product_ID;
    string Seller_mail;
    QFile file(":/data/assets/data/Seller Wallet History.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Seller_mail = list[0].toStdString();
        Product_ID = stoi(list[1].toStdString());

        Product *p = new Product();
        p = &ProductArr[Product_ID-100];
        SellerArr[Seller_mail].Wallet_History.push_back(p);
    }
    file.close();
}
void Model::Get_Customer_Data()
{
    int ID;
    string  FirstName, SecondName, PhoneNumber, Gender, Email, Password, PathPhoto, Interested;
    bool ProfileCompleted;

    QFile file(":/data/assets/data/Customer.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        ID = stoi(list[0].toStdString());
        FirstName = list[1].toStdString();
        SecondName = list[2].toStdString();
        PhoneNumber = list[3].toStdString();
        Gender = list[4].toStdString();
        Email = list[5].toStdString();
        Password = list[6].toStdString();
        Interested = list[7].toStdString();
        PathPhoto = list[8].toStdString();
        ProfileCompleted = stoi(list[9].toStdString());

        Customer c(ID, FirstName, SecondName, PhoneNumber, Gender, Email, Password, Interested, PathPhoto, ProfileCompleted);
        CustomerArr[Email] = c;
    }
    file.close();
}
void Model::Get_CustomerAddress_Data()
{
    string Customer_mail, Address;

    QFile file(":/data/assets/data/Customer Address.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));
        Customer_mail = list[0].toStdString();
        Address = list[1].toStdString();

        CustomerArr[Customer_mail].Address.push_back(Address);
    }
    file.close();
}
void Model::Get_CustomerFavorite_Data()
{
    int Product_ID;
    string Customer_mail;

    QFile file(":/data/assets/data/Customer Favorites.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Customer_mail = list[0].toStdString();
        Product_ID = stoi(list[1].toStdString());

        Product *p = new Product();
        p = &ProductArr[Product_ID-100];
        CustomerArr[Customer_mail].Favorite.push_back(p);
    }
    file.close();
}
void Model::Get_CustomerCartProduct_Data()
{
    int Product_ID;
    string Customer_mail;

    QFile file(":/data/assets/data/Customer Cart Product.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) qDebug() << "file not opennnn";

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list  =line.split(QLatin1Char(','));

        Customer_mail = list[0].toStdString();
        Product_ID = stoi(list[1].toStdString());

        Product *p = new Product();
        p = &ProductArr[Product_ID-100];
        CustomerArr[Customer_mail].My_Cart.AddProduct(p);
    }
    file.close();
}



void Model::Push_Data()
{
    Push_Seller_Data();
    Push_Customer_Data();
    Push_Product_Data();
}
void Model::Push_Seller_Data()
{
    // ----->>>  Seller  <<<---------
    string x = PathOfFile + "Seller.csv";
    QFile seller(x.c_str());
    if(seller.open(QFile::WriteOnly |QFile::Truncate))
    {
        QTextStream sell(&seller);
        unordered_map<string, Seller>::iterator it;
        for (it = SellerArr.begin(); it != SellerArr.end(); it++)
        {
            if (it->second.ID ==0) break;

            sell<<it->second.ID<<','<<it->second.FirstName.c_str()<<','<<it->second.SecondName.c_str()<<','
               <<it->second.Phone.c_str()<<','<<it->second.Email.c_str()<<','<<it->second.Password.c_str()<<','
                 <<it->second.Gender.c_str()<<','<<it->second.Address.c_str()<<','<<it->second.Description.c_str()<<','
                   <<it->second.Wallet<<','<<it->second.NoOfVoters<<','<<it->second.Total_Rate<<','<<it->second.Path_photo.c_str()<<','
                     <<it->second.ProfileCompleted<<'\n';




            // ----->>>  Seller Comment  <<<---------
            string x2 = PathOfFile + "Seller Comment.csv";
            QFile comments(x2.c_str());
            if(comments.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream comm(&comments);
                for (int i=0 ; i<SellerArr[it->first].Comments.size() ; i++)
                {
                    comm<<it->first.c_str()<<','<<SellerArr[it->first].Comments[i].c_str()<<'\n';
                }
            }
            comments.close();



            // ----->>>  Seller Wallet History  <<<---------
            string x3 = PathOfFile + "Seller Wallet History.csv";
            QFile Wallet(x3.c_str());
            if(Wallet.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream wall(&Wallet);
                for (int i=0 ; i<SellerArr[it->first].SelledProducts.size() ; i++)
                {
                    wall<<it->first.c_str()<<','<<SellerArr[it->first].SelledProducts[i]->ID<<'\n';
                }
            }
            Wallet.close();



        }
    }
    seller.close();
}
void Model::Push_Customer_Data()
{
    // ----->>>  Customer  <<<---------
    string x = PathOfFile + "Customer.csv";
    QFile customer(x.c_str());
    if(customer.open(QFile::WriteOnly |QFile::Truncate))
    {
        QTextStream cust(&customer);
        unordered_map<string, Customer>::iterator it;
        for (it = CustomerArr.begin(); it != CustomerArr.end(); it++)
        {
            if (it->second.ID ==0) break;

            cust<<it->second.ID<<','<<it->second.FirstName.c_str()<<','<<it->second.SecondName.c_str()<<','
               <<it->second.PhoneNumber.c_str()<<','<<it->second.Gender.c_str()<<','<<it->second.Email.c_str()<<','
                 <<it->second.Password.c_str()<<','<<it->second.Interested.c_str()<<','<<it->second.PathPhoto.c_str()<<','
                     <<it->second.ProfileCompleted<<'\n';




            // ----->>>  Customer Address  <<<---------
            string x1 = PathOfFile + "Customer Address.csv";
            QFile addresses(x1.c_str());
            if(addresses.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream addr(&addresses);
                for (int i=0 ; i<CustomerArr[it->first].Address.size() ; i++)
                {
                    addr<<it->first.c_str()<<','<<CustomerArr[it->first].Address[i].c_str()<<'\n';
                }
            }
            addresses.close();



            // ----->>> Customer Favorites  <<<---------
            string x2 = PathOfFile + "Customer Favorites.csv";
            QFile favorite(x2.c_str());
            if(favorite.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream fav(&favorite);
                for (int i=0 ; i<CustomerArr[it->first].Favorite.size() ; i++)
                {
                    fav<<it->first.c_str()<<','<<CustomerArr[it->first].Favorite[i]->ID<<'\n';
                }
            }
            favorite.close();



            // ----->>>  Customer Cart Product  <<<---------
            string x3 = PathOfFile + "Customer Cart Product.csv";
            QFile cart(x3.c_str());
            if(favorite.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream ca(&cart);
                for (int i=0 ; i<CustomerArr[it->first].My_Cart.AddedProducts.size() ; i++)
                {
                    ca<<it->first.c_str()<<','<<CustomerArr[it->first].My_Cart.AddedProducts[i]->ID<<'\n';
                }
            }
            cart.close();



        }
    }
    customer.close();
}
void Model::Push_Product_Data()
{
    // ----->>>  Product  <<<---------
    string x = PathOfFile + "Product.csv";
    QFile product(x.c_str());
//    product.resize(0);
    if(product.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream prod(&product);
        for (int it=0 ; it<ProductArr.size() ; it++)
        {

            prod<<ProductArr[it].ID<<','<<ProductArr[it].Name.c_str()<<','<<ProductArr[it].Price<<','
               <<ProductArr[it].Quantity<<','<<ProductArr[it].Category.c_str()<<','<<ProductArr[it].Offer_Percentage<<','
                 <<ProductArr[it].NoOfDeliveryDays<<','<<ProductArr[it].PathOfPhoto.c_str()<<','<<ProductArr[it].Zero<<','
                    <<ProductArr[it].One<<','<<ProductArr[it].Two<<','<<ProductArr[it].Three<<','<<ProductArr[it].Four<<','
                      <<ProductArr[it].Five<<','<<ProductArr[it].Avaliability<<','<<ProductArr[it].Seller_mail.c_str()<<'\n';





            // ----->>>  Product Comments  <<<---------
            string x1 = PathOfFile + "Product Comments.csv";
            QFile comments(x1.c_str());
            if(comments.open(QFile::WriteOnly |QFile::Truncate))
            {
                QTextStream comm(&comments);
                for (int i=0 ; i<ProductArr[it].Comments.size() ; i++)
                {
                    comm<<ProductArr[it].ID<<','<<ProductArr[it].Comments[i].c_str()<<'\n';
                }
            }
            comments.flush();
            comments.close();




        }
    }
    else qDebug() << product.errorString() << "   productt not opennnn";
    product.flush();
    product.close();
}


