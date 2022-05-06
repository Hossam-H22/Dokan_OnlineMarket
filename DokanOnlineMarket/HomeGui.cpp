#include "HomeGui.h"
#include "./ui_HomeGui.h"

HomeGui::HomeGui(Controller *users, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeGui)
{
    ui->setupUi(this);
    this->users = users;
    IsSeller = false;
    ui->stackedWidget_main->setCurrentIndex(0);

    time1 = new QTimer(this);
    time1->start(10000);



    ui->frm_scroll_1_3->setMinimumHeight(363*8);
    for (int i=0 ; i<8 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
                productItem = new ProductGuiWidget;
                ui->gridLayout_3->addWidget(productItem, i, j);
        }
    }



    Connection();
}

HomeGui::~HomeGui()
{
    delete ui;
}



//   -------->  Hosam  <-----------
void HomeGui::Connection()
{
    connect(ui->btn_start_0, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_1, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_2, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_logout_4, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn2_frm1_login_3, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn1_frm1_signUp_3, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(ui->btn_frm1_Login_7, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn_frm1_Register_7, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(time1, &QTimer::timeout, this, &HomeGui::SwitchAd);
}
void HomeGui::clearLayout(QLayout *layout)
{
    if (layout == NULL) return;
    QLayoutItem *item;
    while (item = ui->gridLayout_3->takeAt(0))
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
void HomeGui::SwitchAd()
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
void HomeGui::on_btn_back_1_3_clicked()
{
    ui->stackedWidget_Content_3->setCurrentIndex(0);
}
void HomeGui::on_btn_frm1_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm1_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);

}
void HomeGui::on_btn_frm2_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm2_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm3_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm3_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm4_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm4_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm5_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm5_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm6_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm6_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm7_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm7_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm8_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm8_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm9_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm9_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm10_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm10_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm11_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm11_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm12_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm12_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm13_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm13_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::on_btn_frm14_nameCategory_0_3_clicked()
{
    CategoryName = ui->btn_frm14_nameCategory_0_3->text().toStdString();
    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->stackedWidget_Content_3->setCurrentIndex(1);
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
void HomeGui::SetCustomerProfile()
{

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
void HomeGui::SetProductPage()
{

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
void HomeGui::SetSellerProfile()
{

}




//   -------->  Bassant  <-----------
void HomeGui::on_btn_frm1_AddRate_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(0);
    ui->txtbrowser_Description_0_6->setFixedHeight(251);
    ui->frm3_AddFeedback_0_6->setGeometry(0, 340, 881, 71);
}
void HomeGui::on_btn_frm3_Submit_0_6_clicked()
{
    ui->frm3_AddFeedback_0_6->setGeometry(0, 440, 881, 71);
    ui->txtbrowser_Description_0_6->setFixedHeight(331);
}
void HomeGui::SetSellerViewPage()
{

}




