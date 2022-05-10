#include "HomeGui.h"
#include "./ui_HomeGui.h"


HomeGui::HomeGui(Controller *users, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeGui)
{
    ui->setupUi(this);
    this->users = users;
    IsSeller = false;
    ui->stackedWidget_main->setCurrentIndex(5);
    ui->stackedWidget_Content_3->setCurrentIndex(0);

    time1 = new QTimer(this);
    time1->start(10000);





    SetHomePage();
    Connection();
}

HomeGui::~HomeGui()
{
    delete ui;
}


void HomeGui::Connection()
{
    connect(ui->btn_start_0, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_1, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_2, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_logout_4, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_LogOut_5, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn2_frm1_login_3, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn1_frm1_signUp_3, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(ui->btn_frm1_Login_7, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn_frm1_Register_7, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(time1, &QTimer::timeout, this, &HomeGui::SwitchAd);
}
void HomeGui::SwitchAd()
{
    SwitchAd_Home();
    SwitchAd_SetSellerViewPage();
    SwitchAd_SellerProfile();
    SwitchAd_ProductPage();
    SwitchAd_CustomerPage();
}
void HomeGui::clearLayout(QLayout *layout)
{
    if (layout == NULL) return;
    QLayoutItem *item;
    while (item = layout->takeAt(0))
    {
        if (item->layout())
        {
            clearLayout(item->layout());
            item->layout();
        }
        if (item->widget()) delete item->widget();
        delete item;
    }
}



//   -------->  Hosam  <-----------
void HomeGui::GoToHome()
{
    ui->stackedWidget_main->setCurrentIndex(3);
    users->c = nullptr;
    users->s = nullptr;
    ui->btn2_frm1_login_3->setText("Log in");
    ui->btn1_frm1_signUp_3->setText("Sign up");

    ui->btn_frm1_Login_7->setText("Log in");
    ui->btn_frm1_Register_7->setText("Sign up");


    ui->lineEdit_FisrtName_2->setText("");
    ui->lineEdit_LastName_2->setText("");
    ui->lineEdit_username_2->setText("");
    ui->lineEdit_password_2->setText("");
    ui->lineEdit_phone_2->setText("");
    ui->radioButton_mail_2->setChecked(false);
    ui->radioButton_femail_2->setChecked(false);


    ui->lineEdit_username_1->setText("");
    ui->lineEdit_password_1->setText("");


    IsSeller = false;

}
void HomeGui::login()
{
    users->c = nullptr;
    users->s = nullptr;
    ui->stackedWidget_main->setCurrentIndex(1);
}
void HomeGui::SignUp()
{
    if (ui->btn1_frm1_signUp_3->text() == "Sign up")
    {
        ui->stackedWidget_main->setCurrentIndex(2);
        users->c = nullptr;
        users->s = nullptr;
    }
    else
    {
        ui->stackedWidget_main->setCurrentIndex(4); // Customer Profile ------->>>> put page index
        SetCustomerProfile();
    }
}
void HomeGui::SwitchAd_Home()
{
    if (IndexOfAdHome > 8) IndexOfAdHome=1;
    string pathOfferHome = ":/img/assets/img/Offer Home/offer_";
    QPixmap pix((pathOfferHome+to_string(IndexOfAdHome)+".jpg").c_str());
    ui->lb_offer_0_3->setPixmap(pix);
    IndexOfAdHome++;
}
void HomeGui::on_btn_login_1_clicked()
{
    string email, password;
    email = ui->lineEdit_username_1->text().toStdString();
    password = ui->lineEdit_password_1->text().toStdString();
    users->LogCustomer(email, password);
    if (users->c == nullptr || users->c->ID == 0)
    {
        QMessageBox::warning(this, "Attention please !", "Invalid email or password  !");
    }
    else
    {
        ui->btn2_frm1_login_3->setText("Log out");                      // Home page
        ui->btn1_frm1_signUp_3->setText(users->c->FirstName.c_str());   // Home page

        ui->btn_frm1_Login_7->setText("Log out");                       // Product page
        ui->btn_frm1_Register_7->setText(users->c->FirstName.c_str());  // Product page

        ui->lineEdit_username_1->setText("");
        ui->lineEdit_password_1->setText("");
        ui->stackedWidget_main->setCurrentIndex(3);    //   back to last page;
    }
}
void HomeGui::on_btn_sign_2_clicked()
{
    string fname, lname, phone, mail, pass, gender;
    fname = ui->lineEdit_FisrtName_2->text().toStdString();
    lname = ui->lineEdit_LastName_2->text().toStdString();
    phone = ui->lineEdit_phone_2->text().toStdString();
    mail = ui->lineEdit_username_2->text().toStdString();
    pass = ui->lineEdit_password_2->text().toStdString();
    if (ui->radioButton_femail_2->isChecked()) gender = "Female";
    if (ui->radioButton_mail_2->isChecked()) gender = "Male";

    if (fname.empty() || lname.empty() || phone.empty() || mail.empty() || pass.empty() || gender.empty())
    {
        QMessageBox::warning(this, "Warning !", "There is an empty field !");
        return;
    }
    transform(fname.begin(), fname.end(), fname.begin(), ::tolower);
    transform(lname.begin(), lname.end(), lname.begin(), ::tolower);
    fname[0]-=32;
    lname[0]-=32;
    if (!users->CkeckNumber(phone))
    {
        QMessageBox::warning(this, "Warning !", "Invalid data  !");
        return;
    }

    if (IsSeller)
    {
        users->RegisterSeller(fname, lname, phone, mail, pass, gender);
        ui->stackedWidget_main->setCurrentIndex(5);
    }
    else
    {
        users->RegisterCustomer(fname, lname, phone, gender, mail, pass);
        ui->btn2_frm1_login_3->setText("Log out");
        ui->btn1_frm1_signUp_3->setText(users->c->FirstName.c_str());

        ui->btn_frm1_Login_7->setText("Log out");
        ui->btn_frm1_Register_7->setText(users->c->FirstName.c_str());

        ui->stackedWidget_main->setCurrentIndex(3);          //   back to last page;
    }

    ui->lineEdit_FisrtName_2->setText("");
    ui->lineEdit_LastName_2->setText("");
    ui->lineEdit_username_2->setText("");
    ui->lineEdit_password_2->setText("");
    ui->lineEdit_phone_2->setText("");
    ui->radioButton_mail_2->setChecked(false);
    ui->radioButton_femail_2->setChecked(false);
    IsSeller = false;
}
void HomeGui::on_btn_frm1_back_1_3_clicked()
{
    ui->stackedWidget_Content_3->setCurrentIndex(0);
    ui->lineEdit_frm1_search_1_3->clear();
//    ui->radioButton_frm1_Name_1_3->setChecked(false);
//    ui->radioButton_frm1_Price_1_3->setChecked(false);
//    ui->radioButton_frm1_Rate_1_3->setChecked(false);
    ui->radioButton_frm1_rubbish_1_3->setChecked(true);
}
void HomeGui::SetHomePage()
{
    ui->frm_scroll_0_3->setMinimumWidth(430*14);
    string path;
    for (int i=0 ; i<14 ; i++)
    {
        path = ":/img/assets/img/categories/" + to_string(i+1) + ".png";
        string s = users->data->CategoryName[i];
        categoryItem = new CategoryGuiWidget(s, path);
        connect(categoryItem->Btn_Name, &QPushButton::clicked, this, [this, i, s](){ GoToCategoryPage(users->data->CategoryArr[s], s);});
        ui->horizontalLayout_8->addWidget(categoryItem);
    }

    ui->radioButton_frm1_rubbish_1_3->setVisible(false);
}
void HomeGui::GoToCategoryPage(vector<Product*> &pro, string s)
{
    users->data->ProductArrView = pro;
    CategoryName = s;
    clearLayout(ui->gridLayout_3);

    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->frm_scroll_1_3->setMinimumHeight(500);
    int x = ceil(pro.size() / 4.0), count =0;
    for (int i=0 ; i<x ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            if (count >= pro.size()) break;
            if (pro[count]->ID == 0) continue;
            productItem = new ProductGuiWidget(pro[count]);
            connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, pro, count](){ GoToProductProfile(pro[count]->ID); });
            ui->frm_scroll_1_3->setMinimumHeight(363*(i+1));
            ui->gridLayout_3->addWidget(productItem, i, j);
            count++;
        }
    }
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::GoToProductProfile(int id)
{
    users->p = users->data->ProductArr[id-100];
    SetProductPage();
    ui->stackedWidget_main->setCurrentIndex(7);
}
void HomeGui::on_btn_frm1_search_1_3_clicked()
{
    string name = ui->lineEdit_frm1_search_1_3->text().toStdString();
    if (!name.empty())
        users->Search(name, CategoryName, users->data->ProductArrView);
    else
        users->data->ProductArrView = users->data->CategoryArr[CategoryName];

    on_btn_frm1_setfilter_1_3_clicked();
//    GoToCategoryPage(users->data->ProductArrView, CategoryName);
}
void HomeGui::on_btn_frm1_clear1_1_3_clicked()
{
    ui->lineEdit_frm1_search_1_3->clear();
    users->data->ProductArrView = users->data->CategoryArr[CategoryName];

    on_btn_frm1_setfilter_1_3_clicked();
}
void HomeGui::on_btn_frm1_setfilter_1_3_clicked()
{
    string filter;
    bool go = true;
//    users->data->ProductArrView = users->data->CategoryArr[CategoryName];

    if (ui->radioButton_frm1_Name_1_3->isChecked()) filter = "Name";
    else if (ui->radioButton_frm1_Price_1_3->isChecked()) filter = "Price";
    else if (ui->radioButton_frm1_Rate_1_3->isChecked()) filter = "Rate";
    else go = false;

    if (go) users->Sort(filter, users->data->ProductArrView);
    GoToCategoryPage(users->data->ProductArrView, CategoryName);
}
void HomeGui::on_btn_frm1_clear2_1_3_clicked()
{
//    ui->radioButton_frm1_Name_1_3->setChecked(false);
//    ui->radioButton_frm1_Price_1_3->setChecked(false);
//    ui->radioButton_frm1_Rate_1_3->setChecked(false);
    ui->radioButton_frm1_rubbish_1_3->setChecked(true);
    users->data->ProductArrView = users->data->CategoryArr[CategoryName];
    on_btn_frm1_search_1_3_clicked();
}





//   -------->  Omar  <-----------
void HomeGui::on_btn_back_4_clicked()
{
    ui->stackedWidget_main->setCurrentIndex(3); // back last page
}
void HomeGui::on_btn_frm2_fav_4_clicked() // Favorite
{
    ui->stackedWidget_cust_4->setCurrentIndex(2);
}
void HomeGui::on_btn_frm2_Cart_4_clicked() // Cart
{
    ui->stackedWidget_cust_4->setCurrentIndex(1);

    // product in cart
}
void HomeGui::on_btn_frm2_Home_4_clicked() // Home
{
    ui->stackedWidget_cust_4->setCurrentIndex(0);
}
void HomeGui::SwitchAd_CustomerPage()
{
    if (IndexOfAdCustomerProfile > 5) IndexOfAdCustomerProfile=1;
    string pathOfferHome = ":/img/assets/img/Ads/CustomerPage/1";
    QPixmap pix((pathOfferHome+to_string(IndexOfAdCustomerProfile)+".png").c_str());
    ui->lb_ad_0_4->setPixmap(pix);
    IndexOfAdCustomerProfile++;
}
void HomeGui::SetCustomerProfile()
{
    ui->lb_frm1_name_4->setText((users->c->FirstName + " " + users->c->SecondName).c_str());
    ui->lb_frm1_phone_4->setText(users->c->PhoneNumber.c_str());
    ui->lb_frm1_email_4->setText(users->c->Email.c_str());
    ui->lb_frm1_address_4->setText(users->c->Address.c_str());
}




//   -------->  Karim  <-----------
void HomeGui::on_btn_frm1_Home_7_clicked()
{
    ui->stackedWidget_product_7->setCurrentIndex(0);
}
void HomeGui::on_btn_frm1_Feedaback_7_clicked()
{
    ui->stackedWidget_product_7->setCurrentIndex(1);
}
void HomeGui::on_btn_back_7_clicked()
{
    ui->stackedWidget_main->setCurrentIndex(3);
}
void HomeGui::on_btn_sellerName_0_7_clicked()
{
    ui->stackedWidget_main->setCurrentIndex(6);
}
void HomeGui::SwitchAd_ProductPage()
{
    if (IndexOfProductads > 3) IndexOfProductads=1;
    string pathOfferHome = ":/img/assets/img/Ads/ProductPage/";
    QPixmap pix((pathOfferHome+to_string(IndexOfProductads)+".png").c_str());
    ui->lb_ad_0_7->setPixmap(pix);
    IndexOfProductads++;
}
void HomeGui::SetProductPage()
{
//    ui->lb_name_0_7->setText(users->p->Name.c_str());
//    ui->progressBar_rate_0_7->setValue(((users->p->FinalRate)/5.0)*100);
//    ui->lb_oldPrice_0_7->setText(to_string(users->p->Price).c_str());
//    ui->lb_offer_0_7->setText(to_string(users->p->Offer_Percentage).c_str());//20% off
//    ui->lb_price_0_7->setText(to_string(users->p->PriceAfterOffer).c_str());
//    ui->textBrowser_description_0_7->setText(users->p->Description.c_str());
//    ui->lb_deliver_0_7->setText(to_string(users->p->NoOfDeliveryDays).c_str());
//    QPixmap pix(users->p->PathOfPhoto.c_str());
//    ui->lb_img_0_7->setPixmap(pix);
}
void HomeGui::on_btn_addCart_0_7_clicked()
{
    users->c->My_Cart.AddProduct(users->p);


    // rest of code for added product;
}




//   -------->  Aya  <-----------
void HomeGui::on_btn_frm2_Home_5_clicked()
{
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(0);
}
void HomeGui::on_btn_frm2_Products_5_clicked()
{
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(1);
}
void HomeGui::on_btn_frm2_Wallet_5_clicked()
{
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(2);
}
void HomeGui::on_btn_frm2_Feedback_5_clicked()
{
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(3);
}
void HomeGui::on_btn_frm1_EditProfile_5_clicked()
{
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(4);
}
void HomeGui::SwitchAd_SellerProfile()
{
    if(IndexOfAdSellerProfile>4) IndexOfAdSellerProfile=1;
       string Ad_Path=":/img/assets/img/Ads/SellerProfile/";
       QPixmap p ((Ad_Path+to_string(IndexOfAdSellerProfile)+".png").c_str());
       ui->lb_Ad_0_5->setPixmap(p);
       IndexOfAdSellerProfile++;
}
void HomeGui::SetSellerProfile()
{
//    ui->lb_frm1_Name_5->setText((users->s->FirstName + " " + users->s->SecondName).c_str());
//    ui->lb_frm1_ID_5->setText((to_string(users->s->ID)).c_str());
//    ui->lb_frm1_phone_5->setText(users->s->Phone.c_str());
//    ui->lb_frm1_mail_5->setText(users->s->Email.c_str());
//    ui->lb_frm1_address_5->setText(users->s->Address.c_str());
//    ui->lb_About2_0_5->setText(("About"+(users->s->FirstName + " " + users->s->SecondName)).c_str());
//    ui->textBrowser_About_0_5->setText(users->s->Description.c_str());
//    QPixmap pixel ((users->s->Path_photo).c_str());
//    ui->lb_frm1_img_5->setPixmap(pixel);
//    QRegion *region = new QRegion(0, 0, ui->lb_frm1_img_6->width()-6, ui->lb_frm1_img_6->height()-6, QRegion::Ellipse);
//    ui->lb_frm1_img_5->setMask(*region);

}





//   -------->  Bassant  <-----------
void HomeGui::on_btn_frm1_AddRate_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(0);
    ui->txtbrowser_Description_0_6->setFixedHeight(265);
//    ui->frm3_AddFeedback_0_6->setGeometry(0, 340, 881, 71);
    ui->frm3_AddFeedback_0_6->setGeometry(0, 340, 911, 71);
}
void HomeGui::on_btn_frm3_Submit_0_6_clicked()
{
    ui->frm3_AddFeedback_0_6->setGeometry(0, 440, 911, 71);
    ui->txtbrowser_Description_0_6->setFixedHeight(320);

    bool Comment = false, IsNum = users->CkeckNumber(ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString());

    if(!ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString().empty())
    {
        if (IsNum)
        {
            if (stoi(ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString())>= 0 && stoi(ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString())<= 5)
            {
                // users->s->CalculateRate(stof(ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString()));
                if (!ui->txtEdit_frm3_Comment_0_6->toPlainText().toStdString().empty())
                {
                    // users->s->Comments.push_back(ui->txtEdit_frm3_Comment_0_6->toPlainText().toStdString());
                    Comment=true;
                }
                if (Comment == true)
                {
                    QMessageBox::information(this, "Successful operation","Your Rate and Comment have been successfully recorded !");
                }
                else if (Comment == false)
                {
                    QMessageBox messageBox;
                    //"<font color=\"Green\">
                    messageBox.information(this, "Successful operation",  "Your Rate has been successfully recorded !");
                    messageBox.setStyleSheet("QLabel{font-size: 14px;}");

                }
            }

        }
        else
        {
            QMessageBox::critical(this, "Operation failed", "Your Rate has NOT been recorded, please enter a number between 0 and 5");
        }
    }
    else
    {
        QMessageBox::critical(this, "Operation failed", "Your Rate has NOT been recorded !");
    }
}
void HomeGui::on_btn_frm2_Home_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(0);
}
void HomeGui::on_btn_frm2_avaliable_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(1);
}
void HomeGui::on_btn_frm2_Feedback_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(2);
}
void HomeGui::on_btn_back_6_clicked()
{
    ui->stackedWidget_main->setCurrentIndex(7);
}
void HomeGui::SwitchAd_SetSellerViewPage()
{
    if (IndexOfAdSellerInfoView > 3) IndexOfAdSellerInfoView=1;
    string pathOfferHome = ":/img/assets/img/Ads/SellerInfoView/";
    QPixmap pix((pathOfferHome+to_string(IndexOfAdSellerInfoView)+".png").c_str());
    ui->lb_ad_0_6->setPixmap(pix);
    IndexOfAdSellerInfoView++;
}
void HomeGui::SetSellerViewPage()
{
//    ui->lb_frm1_Name_6->setText((users->s->FirstName + " " + users->s->SecondName).c_str());
//    ui->lb_frm1_ID_6->setText(to_string(users->s->ID).c_str());
//    ui->lb_frm1_mail_6->setText(users->s->Email.c_str());
//    ui->lb_frm1_address_6->setText(users->s->Address.c_str());
//    ui->lb_frm1_phone_6->setText(users->s->Phone.c_str());
//    ui->lb_About_0->setText(("About" + users->s->FirstName).c_str());
//    ui->txtbrowser_Description_0_6->setText(users->s->Description.c_str());

//  QPixmap pixel ((users->s->Path_photo).c_str());
    QPixmap pixel (":/img/assets/img/Person.jpg");
    ui->lb_frm1_img_6->setPixmap(pixel);

    QRegion *region = new QRegion(5, 5, ui->lb_frm1_img_6->width()-12, ui->lb_frm1_img_6->height()-20, QRegion::Ellipse);
    ui->lb_frm1_img_6->setMask(*region);
}

