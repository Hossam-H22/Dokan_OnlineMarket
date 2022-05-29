#include "HomeGui.h"
#include "./ui_HomeGui.h"


HomeGui::HomeGui(Controller *users, QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::HomeGui)
{
    ui->setupUi(this);
    this->users = users;
    IsSeller = false;
    ui->stackedWidget_main->setCurrentIndex(0);


    Connection();
    SetHomePage();
}

HomeGui::~HomeGui()
{
    delete ui;
}


void HomeGui::Connection() // All Pages
{
    time1 = new QTimer(this);
    time1->start(10000);

    time2 = new QTimer(this);
    time2->start(4000);

    connect(ui->btn_start_0, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_1, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_2, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_logout_4, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_LogOut_5, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn2_frm1_login_3, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn1_frm1_signUp_3, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(ui->btn_frm1_Login_7, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn_frm1_Register_7, &QPushButton::clicked, this, &HomeGui::SignUp);
    connect(ui->btn_login_2, &QPushButton::clicked, this, &HomeGui::login);
    connect(ui->btn_register_1, &QPushButton::clicked, this, &HomeGui::SignUp);

    // Back to last Page
    connect(ui->btn_back_4, &QPushButton::clicked, this, &HomeGui::BackToLastPage);
    connect(ui->btn_back_7, &QPushButton::clicked, this, &HomeGui::BackToLastPage);
    connect(ui->btn_back_6, &QPushButton::clicked, this, &HomeGui::BackToLastPage);

    // Timers
    connect(time1, &QTimer::timeout, this, &HomeGui::SwitchAd);
    connect(time2, &QTimer::timeout, this, &HomeGui::HideItems);

    // Button in Bar without Functionality
    connect(ui->btn1_frm2_3, &QPushButton::clicked, this, &HomeGui::ShowErrorPage);
    connect(ui->btn2_frm2_3, &QPushButton::clicked, this, &HomeGui::ShowErrorPage);
    connect(ui->btn3_frm2_3, &QPushButton::clicked, this, &HomeGui::ShowErrorPage);
    connect(ui->btn4_frm2_3, &QPushButton::clicked, this, &HomeGui::ShowErrorPage);
    connect(ui->btn_frm3_ContactUs_3, &QPushButton::clicked, this, &HomeGui::ShowErrorPage);

    // Back to Home
    connect(ui->btn_logo_3, &QPushButton::clicked, this, &HomeGui::BackToHome);
    connect(ui->btn_logo_4, &QPushButton::clicked, this, &HomeGui::BackToHome);
    connect(ui->btn_logo_5, &QPushButton::clicked, this, &HomeGui::BackToHome);
    connect(ui->btn_logo_6, &QPushButton::clicked, this, &HomeGui::BackToHome);
    connect(ui->btn_logo_7, &QPushButton::clicked, this, &HomeGui::BackToHome);

    // Eye of Password
    connect(ui->btn_eye_1, &QPushButton::clicked, this, &HomeGui::EyePassword);
    connect(ui->btn_eye_2, &QPushButton::clicked, this, &HomeGui::EyePassword);
    connect(ui->btn_eye_3_4, &QPushButton::clicked, this, &HomeGui::EyePassword);
    connect(ui->btn_eye_4_5, &QPushButton::clicked, this, &HomeGui::EyePassword);

}
void HomeGui::SwitchAd() // All Pages
{
    SwitchAd_Home();
    SwitchAd_SetSellerViewPage();
    SwitchAd_SellerProfile();
    SwitchAd_ProductPage();
    SwitchAd_CustomerPage();
}
void HomeGui::clearLayout(QLayout *layout) // All Pages
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
void HomeGui::GoToProductProfile(int id, int page) // All Pages
{
    users->p = users->data->ProductArr2[id];
    users->data->BackToPage.push({page, id}); //last Page
    on_btn_frm1_Home_7_clicked();
}
void HomeGui::AddFeeedBackLabels(QLayout *ly, QFrame *f, string color, vector<string> v) // Bassant + Aya + Karim
{
    clearLayout(ly);
    f->setMinimumHeight(430);
    string s1="background-color: ", s3="; border-radius: 30px; padding: 0 25px 0 25px; font: 12pt \"Segoe UI\"; color: #ffffff; margin: 0 5px 0 5px;";
    QLabel *lb;
    for (int i=0 ; i<v.size() ; i++)
    {
        lb = new QLabel(v[i].c_str());
        lb->setMinimumHeight(60);
        lb->setMaximumHeight(60);
        lb->setStyleSheet((s1+color+s3).c_str());
        f->setMinimumHeight(65*(i+1));
        ly->addWidget(lb);
    }
    QSpacerItem *space = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Expanding);
    ly->addItem(space);
}
void HomeGui::AddProductToLists(QLayout *ly, QFrame *f, string color, unordered_map<int, Product*> &list, string container, int PageNum) // Omar + Aya
{
    unordered_map<int, Product*>::iterator it;
    clearLayout(ly);
    f->setMinimumHeight(200);
    int count=1;
    for (it=list.begin() ; it!= list.end() ; it++)
    {
        if (it->second->ID == 0 /*|| !it->second->Avaliability*/) continue;
        else
        {
            crt = new ProductGuiWidget_2(it->second, users->data->PathOfFile+"img/Products/", container, color, 1);
            connect(crt->Btn_name, &QPushButton::clicked, this, [this, it, PageNum](){GoToProductProfile(it->second->ID, PageNum);});
            if (container=="Favorite")
                connect(crt->Btn_action, &QPushButton::clicked, this, [this, it, container](){RemoveFromList(it->second->ID, container);});
            else if (container=="Available")
            {
                connect(crt->Btn_action, &QPushButton::clicked, this, [this, it, ly](){DeleteProductForEver(it->second->ID, ly);});
                connect(crt->Btn_action2, &QPushButton::clicked, this, [this, it](){EditProduct(it->second); });
            }

            f->setMinimumHeight(212*count);
            ly->addWidget(crt);
            count++;
        }
    }

}
void HomeGui::CheckSeller()  // Hossam + Karim
{
    if(IsSeller)
    {
        ui->btn_sellerName_0_7->setVisible(false);
        ui->lb_sellerName_0_7->setVisible(false);
        ui->btn_addCart_0_7->setVisible(false);
        ui->btn_addFavorite_0_7->setVisible(false);
        ui->btn_AddRate_1_7->setVisible(false);
        ui->lb_welcome_1->setText("Hello Seller");
        ui->lb_welcome_2->setText("Hello Seller");
        ui->btn_login_1->setGeometry(660, 560, 210, 40);
        ui->btn_back_1->setGeometry(422, 560, 210, 40);
        ui->frm_register_1->setGeometry(530, 620, 230, 45);
        ui->frm_register_1->setVisible(true);
        ui->frm_login_2->setVisible(true);
        ui->frm_quantityOfProduct_7->setVisible(false);
    }
    else
    {
        ui->btn_sellerName_0_7->setVisible(true);
        ui->lb_sellerName_0_7->setVisible(false);
        ui->btn_addCart_0_7->setVisible(true);
        ui->btn_addFavorite_0_7->setVisible(true);
        ui->btn_AddRate_1_7->setVisible(true);
        ui->lb_welcome_1->setText("Welcome");
        ui->lb_welcome_2->setText("Welcome");
        ui->btn_login_1->setGeometry(540, 560, 210, 40);
        ui->btn_back_1->setGeometry(540, 610, 210, 40);
        ui->frm_register_1->setVisible(false);
        ui->frm_login_2->setVisible(false);
        ui->frm_quantityOfProduct_7->setVisible(true);
    }
}
void HomeGui::BackToLastPage() // Bassant + Aya + Omar
{
    if (users->data->BackToPage.top().first==3) BackToHome();
    else
    {
        ui->stackedWidget_main->setCurrentIndex(users->data->BackToPage.top().first);
        users->p = users->data->ProductArr2[users->data->BackToPage.top().second];
        users->data->BackToPage.pop();
        SetProductPage();
    }
}
void HomeGui::BackToHome() // Bassant + Hossam + Omar + Karim
{
    if (IsSeller) ui->stackedWidget_main->setCurrentIndex(5);
    else ui->stackedWidget_main->setCurrentIndex(3);
    users->ClearSatck();   // clear back stack
    users->p = nullptr;

    if (IsSeller) users->ReloadData();

    if (!CategoryName.empty())
    {
        ui->lineEdit_frm1_search_1_3->clear();
        ui->radioButton_frm1_rubbish_1_3->setChecked(true);
        GoToCategoryPage(users->data->CategoryArr[CategoryName], CategoryName);
    }
}
void HomeGui::GoToHome() // Hossam + Omar + Aya
{
    BackToHome();

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
    ui->radioButton_frm1_rubbish_2->setChecked(true);

    ui->lineEdit_username_1->setText("");
    ui->lineEdit_password_1->setText("");


    IsSeller = false;

}
void HomeGui::login() // Hossam + Karim
{
    eye_password=0;
    EyePassword();

    CheckSeller();
    users->c = nullptr;
    users->s = nullptr;
    ui->stackedWidget_main->setCurrentIndex(1);
    if (users->p == nullptr) users->data->BackToPage.push({3, 100});
    else users->data->BackToPage.push({7, users->p->ID});
}
void HomeGui::SignUp() // Hossam + Karim
{
    eye_password=0;
    EyePassword();

    CheckSeller();
    if (ui->btn1_frm1_signUp_3->text() == "Sign up")
    {
        ui->stackedWidget_main->setCurrentIndex(2);
        users->c = nullptr;
        users->s = nullptr;
        if (users->p == nullptr) users->data->BackToPage.push({3, 100});
        else users->data->BackToPage.push({7, users->p->ID});
    }
    else
    {
        if (IsSeller)
        {
            ui->stackedWidget_main->setCurrentIndex(5); // ----->>>> Seller Profile
            users->ClearSatck();
            SetSellerProfile();
        }
        else
        {
            ui->stackedWidget_main->setCurrentIndex(4); // ------>>>> Customer Profile
            if (users->p == nullptr) users->data->BackToPage.push({3, 100});
            else users->data->BackToPage.push({7, users->p->ID});
            SetCustomerProfile();
        }


    }
}
void HomeGui::EyePassword()
{
    if (eye_password)
    {
        ui->lineEdit_password_2->setEchoMode(QLineEdit::Normal);
        ui->lineEdit_password_1->setEchoMode(QLineEdit::Normal);
        ui->lineEdit_pass_3_4->setEchoMode(QLineEdit::Normal);
        ui->lineEdit_pass_4_5->setEchoMode(QLineEdit::Normal);
        QIcon ico(":/img/assets/img/icons/icons8-open-eye-64.png");
        ui->btn_eye_1->setIcon(ico);
        ui->btn_eye_2->setIcon(ico);
        ui->btn_eye_3_4->setIcon(ico);
    }
    else
    {
        ui->lineEdit_password_2->setEchoMode(QLineEdit::Password);
        ui->lineEdit_password_1->setEchoMode(QLineEdit::Password);
        ui->lineEdit_pass_3_4->setEchoMode(QLineEdit::Password);
        ui->lineEdit_pass_4_5->setEchoMode(QLineEdit::Password);
        QIcon ico(":/img/assets/img/icons/icons8-closed-eye-100.png");
        ui->btn_eye_1->setIcon(ico);
        ui->btn_eye_2->setIcon(ico);
        ui->btn_eye_3_4->setIcon(ico);
    }

    eye_password = !eye_password;
}
void HomeGui::HideItems()
{
    ui->lb_NotEnough_0_7->setVisible(false);
    ui->lb_deliver_0_7->setVisible(true);
    ui->lb_done_0_7->setVisible(false);
    ui->lb_errorCheckout_1_4->setVisible(false);
    ui->lb_wrongLogin_1->setVisible(false);
    ui->lb_validMail_2->setVisible(false);
    ui->lb_passCount_2->setVisible(false);
    ui->lb_validPhone_2->setVisible(false);
    ui->lb_fieldEmpty_fname_2->setVisible(false);
    ui->lb_fieldEmpty_lname_2->setVisible(false);
    ui->lb_fieldEmpty_mail_2->setVisible(false);
    ui->lb_fieldEmpty_pass_2->setVisible(false);
    ui->lb_fieldEmpty_phone_2->setVisible(false);
    ui->lb_fieldEmpty_gender_2->setVisible(false);
    ui->lb_validaionRight_0_6->setVisible(false);
    ui->lb_validaionWrong_0_6->setVisible(false);
    ui->lb_validaionRight_0_7->setVisible(false);
    ui->lb_validaionWrong_0_7->setVisible(false);
}



//   -------->  Hosam  <-----------
void HomeGui::SetHomePage()
{
    clearLayout(ui->horizontalLayout_8);
    ui->frm_scroll_0_3->setMinimumWidth(430*14);
    string path;
    for (int i=0 ; i<14 ; i++)
    {
        path = ":/img/assets/img/categories/" + to_string(i+1) + ".png";
        string s = users->data->CategoryName[i];
        categoryItem = new CategoryGuiWidget(s, path);
        connect(categoryItem->Btn_Name, &QPushButton::clicked, this, [this, s](){ GoToCategoryPage(users->data->CategoryArr[s], s);});
        ui->horizontalLayout_8->addWidget(categoryItem);
    }

    ui->radioButton_frm1_rubbish_1_3->setVisible(false);
    ui->radioButton_frm1_rubbish_2->setVisible(false);

    ui->lineEdit_password_2->setEchoMode(QLineEdit::Password);

    ui->stackedWidget_Content_3->setCurrentIndex(0);

}
void HomeGui::GoToCategoryPage(vector<Product*> &pro, string s)
{
    users->data->ProductArrView = pro;
    CategoryName = s;
    clearLayout(ui->gridLayout_3);


    if (pro.empty()) ui->lb_NoProduct_1_3->setVisible(true);
    else ui->lb_NoProduct_1_3->setVisible(false);

    ui->lb_CategoryName_1_3->setText(CategoryName.c_str());
    ui->frm_scroll_1_3->setMinimumHeight(500);
    int x = ceil(pro.size() / 4.0), count =0;
    for (int i=0 ; i<x ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            if (count >= pro.size()) break;
            if (pro[count]->ID == 0 /*|| !pro[count]->Avaliability*/) continue;
            else
            {
                productItem = new ProductGuiWidget(pro[count], users->data->PathOfFile+"img/Products/");
                connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, pro, count](){ GoToProductProfile(pro[count]->ID, 3); });
                ui->frm_scroll_1_3->setMinimumHeight(363*(i+1));
                ui->gridLayout_3->addWidget(productItem, i, j);
                count++;
            }
        }
    }
    ui->stackedWidget_Content_3->setCurrentIndex(1);
}
void HomeGui::SwitchAd_Home() // Swicht Ads
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
    if (IsSeller)
    {
        users->LogSeller(email, password);
        if (users->s == nullptr || users->s->ID == 0)
            ui->lb_wrongLogin_1->setVisible(true);
        else
        {
            SetSellerProfile();
            ui->stackedWidget_main->setCurrentIndex(5);    //  Go to seller page ->>

            ui->btn2_frm1_login_3->setText("Log out");                      // Home page
            ui->btn1_frm1_signUp_3->setText(users->s->FirstName.c_str());   // Home page

            ui->btn_frm1_Login_7->setText("Log out");                       // Product page
            ui->btn_frm1_Register_7->setText(users->s->FirstName.c_str());  // Product page

        }
    }
    else
    {
        users->LogCustomer(email, password);
        if (users->c == nullptr || users->c->ID == 0)
            ui->lb_wrongLogin_1->setVisible(true);
        else
        {
            ui->btn2_frm1_login_3->setText("Log out");                      // Home page
            ui->btn1_frm1_signUp_3->setText(users->c->FirstName.c_str());   // Home page

            ui->btn_frm1_Login_7->setText("Log out");                       // Product page
            ui->btn_frm1_Register_7->setText(users->c->FirstName.c_str());  // Product page

            if (users->data->BackToPage.top().first==3) BackToHome();
            else
            {
                ui->stackedWidget_main->setCurrentIndex(users->data->BackToPage.top().first);    //   back to last page;
                users->data->BackToPage.pop();
            }
        }
    }
    ui->lineEdit_username_1->setText("");
    ui->lineEdit_password_1->setText("");

}
void HomeGui::on_btn_sign_2_clicked()
{
    // -->  take data from user
    string fname, lname, phone, mail, pass, gender;
    fname = ui->lineEdit_FisrtName_2->text().toStdString();
    lname = ui->lineEdit_LastName_2->text().toStdString();
    phone = ui->lineEdit_phone_2->text().toStdString();
    mail = ui->lineEdit_username_2->text().toStdString();
    pass = ui->lineEdit_password_2->text().toStdString();
    if (ui->radioButton_femail_2->isChecked()) gender = "Female";
    if (ui->radioButton_mail_2->isChecked()) gender = "Male";
    //*************************************************************************



    // --> Check Validation of data
    if (fname.empty())
    {
        ui->lb_fieldEmpty_fname_2->setVisible(true);
        return;
    }
    if (lname.empty())
    {
        ui->lb_fieldEmpty_lname_2->setVisible(true);
        return;
    }
    if (mail.empty())
    {
        ui->lb_fieldEmpty_mail_2->setVisible(true);
        return;
    }
    if (mail.find('@') == -1 || mail.size()<5)
    {
        ui->lb_validMail_2->setVisible(true);
        return;
    }
    if (pass.empty())
    {
        ui->lb_fieldEmpty_pass_2->setVisible(true);
        return;
    }
    if (pass.size()<8 || pass.size()>14)
    {
        ui->lb_passCount_2->setVisible(true);
        return;
    }
    if (phone.empty())
    {
        ui->lb_fieldEmpty_phone_2->setVisible(true);
        return;
    }
    if (!users->CkeckNumber(phone) || phone.size()<6)
    {
        ui->lb_validPhone_2->setVisible(true);
        return;
    }
    if (gender.empty())
    {
        ui->lb_fieldEmpty_gender_2->setVisible(true);
        return;
    }
    transform(fname.begin(), fname.end(), fname.begin(), ::tolower);
    transform(lname.begin(), lname.end(), lname.begin(), ::tolower);
    fname[0]-=32;
    lname[0]-=32;
    // **************************************************************************




    // save data in my data structure
    if (IsSeller)
    {
        users->RegisterSeller(fname, lname, phone, mail, pass, gender);
        SetSellerProfile();

        ui->btn2_frm1_login_3->setText("Log out");
        ui->btn1_frm1_signUp_3->setText(users->s->FirstName.c_str());

        ui->btn_frm1_Login_7->setText("Log out");
        ui->btn_frm1_Register_7->setText(users->s->FirstName.c_str());


        ui->stackedWidget_main->setCurrentIndex(5);
    }
    else
    {
        users->RegisterCustomer(fname, lname, phone, gender, mail, pass);
        ui->btn2_frm1_login_3->setText("Log out");
        ui->btn1_frm1_signUp_3->setText(users->c->FirstName.c_str());

        ui->btn_frm1_Login_7->setText("Log out");
        ui->btn_frm1_Register_7->setText(users->c->FirstName.c_str());

        if (users->data->BackToPage.top().first==3) BackToHome();
        else
        {
            ui->stackedWidget_main->setCurrentIndex(users->data->BackToPage.top().first);    //   back to last page;
            users->data->BackToPage.pop();
        }
    }
    //*************************************************************************


    // --> Clear fields
    ui->lineEdit_FisrtName_2->setText("");
    ui->lineEdit_LastName_2->setText("");
    ui->lineEdit_username_2->setText("");
    ui->lineEdit_password_2->setText("");
    ui->lineEdit_phone_2->setText("");
    ui->radioButton_frm1_rubbish_2->setChecked(true);
    //*************************************************************************
}
void HomeGui::on_btn_frm3_EnterSeller_3_clicked()
{
    GoToHome();
    IsSeller = true;
    SignUp();
}
void HomeGui::on_btn_frm3_policy_3_clicked()
{
    TermsAndConditions terms;
    terms.setModal(true);
    terms.exec();
}
void HomeGui::ShowErrorPage()
{
    ErrorPage error;
    error.setModal(true);
    error.exec();
}
void HomeGui::on_btn_frm1_search_1_3_clicked()
{
    string name = ui->lineEdit_frm1_search_1_3->text().toStdString();
    if (!name.empty())
        users->Search(name, users->data->ProductArrView);
    else
        users->data->ProductArrView = users->data->CategoryArr[CategoryName];

    on_btn_frm1_setfilter_1_3_clicked();
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

    if (ui->radioButton_frm1_Name_1_3->isChecked()) filter = "Name";
    else if (ui->radioButton_frm1_PriceUp_1_3->isChecked()) filter = "PriceUp";
    else if (ui->radioButton_frm1_PriceDown_1_3->isChecked()) filter = "PriceDown";
    else if (ui->radioButton_frm1_RateUp_1_3->isChecked()) filter = "RateUp";
    else if (ui->radioButton_frm1_RateDown_1_3->isChecked()) filter = "RateDown";
    else go = false;

    if (go) users->Sort(filter, users->data->ProductArrView);
    GoToCategoryPage(users->data->ProductArrView, CategoryName);
}
void HomeGui::on_btn_frm1_clear2_1_3_clicked()
{
    ui->radioButton_frm1_rubbish_1_3->setChecked(true);
    users->data->ProductArrView = users->data->CategoryArr[CategoryName];
    on_btn_frm1_search_1_3_clicked();
}
void HomeGui::on_btn_frm1_back_1_3_clicked()
{
    ui->stackedWidget_Content_3->setCurrentIndex(0);
    ui->lineEdit_frm1_search_1_3->clear();
    ui->radioButton_frm1_rubbish_1_3->setChecked(true);
    CategoryName.clear();
}




//   -------->  Omar  <-----------
void HomeGui::SetCustomerProfile()
{
    ui->lb_frm1_name_4->setText((users->c->FirstName + " " + users->c->SecondName).c_str());
    ui->lb_frm1_phone_4->setText(users->c->PhoneNumber.c_str());
    ui->lb_frm1_email_4->setText(users->c->Email.c_str());
    ui->lb_frm1_address_4->setText(users->c->Address.c_str());
    string path;
    if (users->c->PathPhoto.empty()) path = ":/img/assets/img/icons/avatar-profile-icon.jpg";
    else path = users->data->PathOfFile+"img/Customers/"+users->c->PathPhoto;
    QPixmap pixel (path.c_str());
    ui->lb_frm1_img_4->setPixmap(pixel);
    QRegion *region = new QRegion(5, 5, ui->lb_frm1_img_6->width()+50, ui->lb_frm1_img_6->height()+50, QRegion::Ellipse);
    ui->lb_frm1_img_4->setMask(*region);

    if (users->c->ProfileCompleted)
    {
        ui->btn_edit_4->setText("Edit profile");
        ui->lb_frm1_VerifiedBadge_4->setVisible(true);
    }
    else
    {
        ui->btn_edit_4->setText("Complite profile");
        ui->lb_frm1_VerifiedBadge_4->setVisible(false);
    }


    ui->lb_errorCheckout_1_4->setVisible(false);

    on_btn_frm2_Home_4_clicked();
}
void HomeGui::on_btn_frm2_Home_4_clicked() // Home
{
    clearLayout(ui->horizontalLayout_16);

    if (!users->data->ProductArr2.empty())
    {
        int r1 = rand()%users->data->ProductArr2.size();
        while (users->data->ProductArr2[r1+100] == nullptr || !users->data->ProductArr2[r1+100]->Avaliability) r1 = rand()%users->data->ProductArr2.size();
        productItem = new ProductGuiWidget(users->data->ProductArr2[r1+100], users->data->PathOfFile+"img/Products/");
        connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, r1](){GoToProductProfile(users->data->ProductArr2[r1+100]->ID, 4);});
        ui->horizontalLayout_16->addWidget(productItem);

        int r2 = rand()%users->data->ProductArr2.size();
        while (r2==r1 || users->data->ProductArr2[r2+100] == nullptr || !users->data->ProductArr2[r2+100]->Avaliability) r2 = rand()%users->data->ProductArr2.size();
        productItem = new ProductGuiWidget(users->data->ProductArr2[r2+100], users->data->PathOfFile+"img/Products/");
        connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, r2](){GoToProductProfile(users->data->ProductArr2[r2+100]->ID, 4);});
        ui->horizontalLayout_16->addWidget(productItem);

        int r3 = rand()%users->data->ProductArr2.size();
        while (r3==r2 || r3==r1 || users->data->ProductArr2[r3+100] == nullptr || !users->data->ProductArr2[r3+100]->Avaliability) r3 = rand()%users->data->ProductArr2.size();
        productItem = new ProductGuiWidget(users->data->ProductArr2[r3+100], users->data->PathOfFile+"img/Products/");
        connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, r3](){GoToProductProfile(users->data->ProductArr2[r3+100]->ID, 4);});
        ui->horizontalLayout_16->addWidget(productItem);
    }






    ui->stackedWidget_cust_4->setCurrentIndex(0);
}
void HomeGui::on_btn_frm2_fav_4_clicked() // Favorite
{
    if (!users->c->Favorite.empty()) ui->lb_NoProduct_2_4->setVisible(false);
    else ui->lb_NoProduct_2_4->setVisible(true);

    AddProductToLists(ui->verticalLayout_28, ui->frm_scroll_2_4, "#0c3d5a", users->c->Favorite, "Favorite", 4);
    ui->stackedWidget_cust_4->setCurrentIndex(2);
}
void HomeGui::on_btn_frm2_Cart_4_clicked() // Cart
{
    users->c->My_Cart.TotalPrice = 0;
    users->c->My_Cart.MaxNumberOfDays=0;

    clearLayout(ui->verticalLayout_25);
    ui->frm_scroll_1_4->setMinimumHeight(200);

    int count=1;
    bool flag = true;
    for (auto it : users->c->My_Cart.AddedProducts)
    {
        if (/*it.second.first->Quantity <= it.second.second || */it.second.first->ID==0) continue;
        else
        {
            flag = false;
            crt = new ProductGuiWidget_2(it.second.first, users->data->PathOfFile+"img/Products/", "Cart", "#0c3d5a", it.second.second);
            connect(crt->Btn_name, &QPushButton::clicked, this, [this, it](){GoToProductProfile(it.second.first->ID, 4);});
            connect(crt->Btn_action, &QPushButton::clicked, this, [this, it](){RemoveFromList(it.second.first->ID, "Cart");});
            ui->frm_scroll_1_4->setMinimumHeight(212*count);
            ui->verticalLayout_25->addWidget(crt);
            count++;

            users->c->My_Cart.TotalPrice += (it.second.first->PriceAfterOffer * it.second.second);
            users->c->My_Cart.MaxNumberOfDays = max(users->c->My_Cart.MaxNumberOfDays, it.second.first->NoOfDeliveryDays);

        }
    }
    ui->lb_tatalPrice_1_4->setText(("Total Price = "+QString::number(users->c->My_Cart.TotalPrice, 'f', 2)+" EGP"));

    if (users->c->My_Cart.AddedProducts.empty() || flag)
    {
        ui->lb_NoProduct_1_4->setVisible(true);
        ui->lb_tatalPrice_1_4->setVisible(false);
        ui->btn_checkOut_1_4->setVisible(false);
    }
    else
    {
        ui->lb_NoProduct_1_4->setVisible(false);
        ui->lb_tatalPrice_1_4->setVisible(true);
        ui->btn_checkOut_1_4->setVisible(true);
    }

    ui->stackedWidget_cust_4->setCurrentIndex(1);
}
void HomeGui::on_btn_edit_4_clicked()
{
    eye_password=0;
    EyePassword();

    ImgPath.clear();
    ui->lineEdit_fname_3_4->setText(users->c->FirstName.c_str());
    ui->lineEdit_lname_3_4->setText(users->c->SecondName.c_str());
    ui->lineEdit_phone_3_4->setText(users->c->PhoneNumber.c_str());
    ui->lineEdit_address_3_4->setText(users->c->Address.c_str());
    ui->lb_mail_3_4->setText(users->c->Email.c_str());
    ui->lineEdit_pass_3_4->setText(users->c->Password.c_str());
    string path;
    if (users->c->PathPhoto.empty()) path = ":/img/assets/img/icons/icons8-add-image-96.png";
    else ImgPath = path = users->data->PathOfFile+"img/Customers/"+users->c->PathPhoto;

    QPixmap pix(path.c_str());
    ui->lb_ImgOfCustomer_3_4->setPixmap(pix);

    ui->stackedWidget_cust_4->setCurrentIndex(3);
}
void HomeGui::on_btn_addPhoto_3_4_clicked()
{
    ImgPath = (QFileDialog::getOpenFileName(this, tr("Choose "), "", tr("Image(*.jpg *.jpeg)"))).toStdString();
    QImage img;
    img.load(ImgPath.c_str());
    img.save((users->data->PathOfFile+"img/Customers/"+to_string(users->c->ID)+".jpg").c_str());
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfCustomer_3_4->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfCustomer_3_4->width(), Qt::SmoothTransformation);


    ui->lb_ImgOfCustomer_3_4->setPixmap(QPixmap::fromImage(img));
}
void HomeGui::on_btn_done_3_4_clicked()
{
    string fname, lname, phone, address, pass;
    fname = ui->lineEdit_fname_3_4->text().toStdString();
    lname = ui->lineEdit_lname_3_4->text().toStdString();
    phone = ui->lineEdit_phone_3_4->text().toStdString();
    address = ui->lineEdit_address_3_4->text().toStdString();
    pass = ui->lineEdit_pass_3_4->text().toStdString();

    if (fname.empty()||lname.empty()||phone.empty()||address.empty()||pass.empty()||ImgPath.empty())
    {
        QMessageBox::warning(this, "Warning !", "There is an empty field !");
        return;
    }
    if (!users->CkeckNumber(phone))
    {
        QMessageBox::warning(this, "Warning !", "Invalid phone number  !                 ");
        return;
    }

    users->c->FirstName = fname;
    users->c->SecondName = lname;
    users->c->PhoneNumber = phone;
    users->c->Address = address;
    users->c->Password = pass;
    users->c->PathPhoto = to_string(users->c->ID)+".jpg";
    users->c->IsCompletedProfile();
    ImgPath.clear();
    SetCustomerProfile();
    on_btn_frm2_Home_4_clicked();
}
void HomeGui::RemoveFromList(int id, string container)
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "",("Are you sure you want remove product from "+container+" ?").c_str());
    if (reply == QMessageBox::No) return;

    if (container == "Favorite")
    {
        users->c->RemoveProductFromFavorite(id);
        on_btn_frm2_fav_4_clicked();
    }
    else
    {
        users->c->My_Cart.RemoveProduct(id);
        on_btn_frm2_Cart_4_clicked();
    }
//    QMessageBox::information(this, "Successful operation",("Product successfully removed from "+container+" !").c_str());
}
void HomeGui::on_btn_checkOut_1_4_clicked() // **********************************************************
{
    users->c->IsCompletedProfile();
    if (!users->c->ProfileCompleted)
    {
        ui->lb_errorCheckout_1_4->setVisible(true);
        return;
    }

    clearLayout(ui->verticalLayout_25);
    DoneShoppingGui CheckOut(users->GetDate(users->c->My_Cart.MaxNumberOfDays), users->c->Address, users->c->My_Cart.TotalPrice);
    CheckOut.setModal(true);
    CheckOut.exec();


    for(auto it: users->c->My_Cart.AddedProducts)
    {
        it.second.first->Quantity -= it.second.second;
        if (it.second.first->Quantity < 1)
        {
            it.second.first->Avaliability=0;
            it.second.first->Quantity=0;
        }
        users->data->SellerArr[it.second.first->Seller_mail].AddToWallet(it.second.first, it.second.second);

        for(auto cust: users->data->CustomerArr)
        {
            if (cust.second.ID == users->c->ID) continue;
            if (cust.second.My_Cart.AddedProducts[it.first].second > it.second.first->Quantity)
                cust.second.My_Cart.RemoveProduct(it.first);
        }
    }
    users->c->My_Cart.AddedProducts.clear();
    on_btn_frm2_Cart_4_clicked();
}
void HomeGui::SwitchAd_CustomerPage() // Swicht Ads
{
    if (IndexOfAdCustomerProfile > 5) IndexOfAdCustomerProfile=1;
    string pathOfferHome = ":/img/assets/img/Ads/CustomerPage/";
    QPixmap pix((pathOfferHome+to_string(IndexOfAdCustomerProfile)+".png").c_str());
    ui->lb_ad_0_4->setPixmap(pix);
    IndexOfAdCustomerProfile++;
}



//   -------->  Karim  <-----------
void HomeGui::SetProductPage()
{
    ui->lb_name_0_7->setText(users->p->Name.c_str());
    ui->lb_oldPrice_0_7->setText(QString::number(users->p->Price)+" EGP");
    ui->lb_offer_0_7->setText(("-"+to_string(users->p->Offer_Percentage)+"%").c_str());//20% off
    ui->lb_price_0_7->setText(QString::number(users->p->PriceAfterOffer, 'f', 2)+" EGP");
    ui->textBrowser_description_0_7->setText(users->p->Description.c_str());
    ui->lb_deliver_0_7->setText(to_string(users->p->NoOfDeliveryDays).c_str());
    ui->btn_sellerName_0_7->setText((users->data->SellerArr[users->p->Seller_mail].FirstName +" "+ users->data->SellerArr[users->p->Seller_mail].SecondName).c_str());
    ui->lb_NoVoters_0_7->setText(("( "+to_string(users->p->NoVoters)+" )").c_str());
    ui->lb_Category_0_7->setText(users->p->Category.c_str());

    ui->lb_NotEnough_0_7->setVisible(false);
    ui->lb_done_0_7->setVisible(false);

    NumberOfProductForOrder=1;
    ui->lb_NumOfProduct_0_7->setText(to_string(NumberOfProductForOrder).c_str());

    if (users->p->FinalRate ==0) ui->progressBar_rate_0_7->setValue(0);
    else ui->progressBar_rate_0_7->setValue(((users->p->FinalRate)/5.0)*100);

    if (!users->p->Avaliability) ui->lb_availability_0_7->setVisible(true);
    else ui->lb_availability_0_7->setVisible(false);


    string delivery = "Delivered on " + users->GetDate(users->p->NoOfDeliveryDays);
    ui->lb_deliver_0_7->setText(delivery.c_str());

//     set size of photo
    QImage img;
    img.load((users->data->PathOfFile+"img/Products/"+users->p->PathOfPhoto).c_str());
    if (img.height() >= img.width()) img.scaledToHeight(ui->lb_img_0_7->height(), Qt::SmoothTransformation);
    else img.scaledToWidth(ui->lb_img_0_7->width(), Qt::SmoothTransformation);
    ui->lb_img_0_7->setPixmap(QPixmap::fromImage(img));

    if (users->p->Offer_Percentage == 0)
    {
        ui->lb_offer_0_7->setVisible(false);
        ui->lb_oldPrice_0_7->setVisible(false);
    }
    else
    {
        ui->lb_offer_0_7->setVisible(true);
        ui->lb_oldPrice_0_7->setVisible(true);
    }

    ui->btn_back_7->setStyleSheet("color: #2880AE; border: 2px solid #2880AE; border-radius: 10px;");


    CheckSeller();
    ui->stackedWidget_product_7->setCurrentIndex(0);
}
void HomeGui::on_btn_frm1_Home_7_clicked()  // SetProductPage
{
    SetProductPage();
    ui->stackedWidget_main->setCurrentIndex(7);
    ui->lb_NotEnough_0_7->setVisible(false);
}
void HomeGui::on_btn_frm1_Feedaback_7_clicked()
{
    if (users->p->Comments.empty()) ui->lb_NoFeedBack_1_7->setVisible(true);
    else ui->lb_NoFeedBack_1_7->setVisible(false);

    AddFeeedBackLabels(ui->verticalLayout_56, ui->frm2_scroll_1_7, "#2880AE", users->p->Comments);


    int one, two, three, four, five;
    one = ( (double)users->p->One / users->p->NoVoters)*100;
    two = ((double)users->p->Two / (double)users->p->NoVoters)*100;
    three = ((double)users->p->Three / (double)users->p->NoVoters)*100;
    four = ((double)users->p->Four / (double)users->p->NoVoters)*100;
    five = ((double)users->p->Five / (double)users->p->NoVoters)*100;

    if (users->p->NoVoters == 0) one=two=three=four=five=0;

    ui->progressBar_1star_1_7->setValue(one);
    ui->lb_1star_1_7->setText((to_string(one)+"%").c_str());


    ui->progressBar_2star_1_7->setValue(two);
    ui->lb_2star_1_7->setText((to_string(two)+"%").c_str());


    ui->progressBar_3star_1_7->setValue(three);
    ui->lb_3star_1_7->setText((to_string(three)+"%").c_str());


    ui->progressBar_4star_1_7->setValue(four);
    ui->lb_4star_1_7->setText((to_string(four)+"%").c_str());


    ui->progressBar_5star_1_7->setValue(five);
    ui->lb_5star_1_7->setText((to_string(five)+"%").c_str());


    ui->frm1_AddFeedback_1_7->setVisible(false);


    ui->btn_back_7->setStyleSheet("background-color:#E3BA5A; color: #ffffff; border-radius: 10px;");

    ui->stackedWidget_product_7->setCurrentIndex(1);
}
void HomeGui::on_btn_sellerName_0_7_clicked()
{
    users->s = &users->data->SellerArr[users->p->Seller_mail];
    users->data->BackToPage.push({7, users->p->ID});
    SetSellerViewPage();
}
void HomeGui::on_btn_addCart_0_7_clicked()
{
    ui->lb_NotEnough_0_7->setVisible(false);
    if (ui->btn_frm1_Login_7->text() == "Log in")
    {
        QMessageBox::information(this, "",  "Please Login first ");
        return;
    }
    if (users->p->Quantity >= NumberOfProductForOrder)
    {
        users->c->My_Cart.AddProduct(users->p, NumberOfProductForOrder);
        ui->lb_done_0_7->setVisible(true);
    }
    else
    {
        ui->lb_deliver_0_7->setVisible(false);
        ui->lb_NotEnough_0_7->setVisible(true);
    }

}
void HomeGui::on_btn_addFavorite_0_7_clicked()
{
    if (ui->btn_frm1_Login_7->text() == "Log in")
    {
        QMessageBox::information(this, "",  "Please Login first      ");
        return;
    }
    users->c->Favorite[users->p->ID] = users->p;
    ui->lb_done_0_7->setVisible(true);
}
void HomeGui::on_btn_AddRate_1_7_clicked()
{
    if (ui->btn_frm1_Login_7->text() == "Log in")
    {
        QMessageBox::information(this, "",  "Please Login first ");
        return;
    }

    HideItems();

    ui->frm1_AddFeedback_1_7->setVisible(true);
}
void HomeGui::on_btn_Submit_1_7_clicked()
{
    ui->frm1_AddFeedback_1_7->setVisible(false);

    bool Comment = false, IsNum = users->CkeckNumber(ui->txtEdit_frm1_Rate_1_7->toPlainText().toStdString());

    if(!ui->txtEdit_frm1_Rate_1_7->toPlainText().toStdString().empty())
    {
        if (IsNum)
        {
            if (stoi(ui->txtEdit_frm1_Rate_1_7->toPlainText().toStdString())>= 0 && stoi(ui->txtEdit_frm1_Rate_1_7->toPlainText().toStdString())<= 5)
            {
                users->p->CalculateRate(stof(ui->txtEdit_frm1_Rate_1_7->toPlainText().toStdString()));

                if (!ui->lineEdit_frm1_comment_1_7->text().toStdString().empty())
                {
                    users->p->Comments.push_back(ui->lineEdit_frm1_comment_1_7->text().toStdString());
                    Comment=true;
                }
                if (Comment)
                {
                    ui->lb_validaionRight_0_7->setText("Your Rate and Comment have been successfully recorded");
                    ui->lb_validaionRight_0_7->setVisible(true);
                }
                else if (!Comment)
                {
                    ui->lb_validaionRight_0_7->setText("Your Rate has been successfully recorded");
                    ui->lb_validaionRight_0_7->setVisible(true);
                }
            }
            else ui->lb_validaionWrong_0_6->setVisible(true);
        }
        else ui->lb_validaionWrong_0_6->setVisible(true);
    }
    else ui->lb_validaionWrong_0_6->setVisible(true);

    ui->txtEdit_frm1_Rate_1_7->setText("");
    ui->lineEdit_frm1_comment_1_7->setText("");
    on_btn_frm1_Feedaback_7_clicked();
}
void HomeGui::on_btn_plus_0_7_clicked()
{
    NumberOfProductForOrder++;
    ui->lb_NumOfProduct_0_7->setText(to_string(NumberOfProductForOrder).c_str());
}
void HomeGui::on_btn_minus_0_7_clicked()
{
    NumberOfProductForOrder--;
    if (NumberOfProductForOrder<1) NumberOfProductForOrder=1;
    ui->lb_NumOfProduct_0_7->setText(to_string(NumberOfProductForOrder).c_str());
}
void HomeGui::SwitchAd_ProductPage() // Swicht Ads
{
    if (IndexOfProductads > 5) IndexOfProductads=1;
    string pathOfferHome = ":/img/assets/img/Ads/ProductPage/";
    QPixmap pix((pathOfferHome+to_string(IndexOfProductads)+".png").c_str());
    ui->lb_ad_0_7->setPixmap(pix);
    IndexOfProductads++;
}



//   -------->  Aya  <-----------
void HomeGui::SetSellerProfile()
{
    ui->lb_frm1_Name_5->setText((users->s->FirstName + " " + users->s->SecondName).c_str());
    ui->lb_frm1_ID_5->setText((to_string(users->s->ID)).c_str());
    ui->lb_frm1_phone_5->setText(users->s->Phone.c_str());
    ui->lb_frm1_mail_5->setText(users->s->Email.c_str());
    ui->lb_frm1_address_5->setText(users->s->Address.c_str());
    ui->textBrowser_About_0_5->setText(users->s->Description.c_str());
    string path;
    if (users->s->Path_photo.empty()) path =":/img/assets/img/icons/avatar-profile-icon.jpg";
    else path = (users->data->PathOfFile+"img/Sellers/"+users->s->Path_photo).c_str();
    QPixmap pixel (path.c_str());
    ui->lb_frm1_img_5->setPixmap(pixel);

    QRegion *region = new QRegion(0, 0, ui->lb_frm1_img_6->width()-6, ui->lb_frm1_img_6->height()-6, QRegion::Ellipse);
    ui->lb_frm1_img_5->setMask(*region);

    on_btn_frm2_Home_5_clicked();
    ui->stackedWidget_main->setCurrentIndex(5);
}
void HomeGui::on_btn_frm2_Home_5_clicked()
{
    if (users->s->ProfileCompleted)
    {
        ui->lb_frm1_VerifiedBadge_5->setVisible(true);
        ui->btn_frm1_EditProfile_5->setText("Edit Profile");
    }
    else
    {
        ui->lb_frm1_VerifiedBadge_5->setVisible(false);
        ui->btn_frm1_EditProfile_5->setText("Complete Profile");
    }


    ui->stackedWidget_SellerProfile_5->setCurrentIndex(0);
}
void HomeGui::on_btn_frm2_Products_5_clicked()
{
    if (!users->s->SelledProducts.empty()) ui->lb_NoProduct_1_5->setVisible(false);
    else ui->lb_NoProduct_1_5->setVisible(true);

    AddProductToLists(ui->verticalLayout_30, ui->frm_scroll_1_5, "#2880AE", users->s->SelledProducts, "Available", 5);
    ui->stackedWidget_SellerProfile_5->setCurrentIndex(1);
}
void HomeGui::on_btn_frm2_Wallet_5_clicked()
{
    if (users->s->Wallet_History2.empty()) ui->lb_NoProduct_2_5->setVisible(true);
    else ui->lb_NoProduct_2_5->setVisible(false);

    users->s->Wallet=0;

    clearLayout(ui->verticalLayout_59);
    ui->frm_scroll_3_6->setMinimumHeight(450);

    for(int i=0 ; i<users->s->Wallet_History2.size() ; i++)
    {
        walletItem = new WalletGuiWidget(users->s->Wallet_History2[i]);
        ui->frm_scroll_3_6->setMinimumHeight(70*(i+1));
        ui->verticalLayout_59->addWidget(walletItem);

        users->s->Wallet += users->s->Wallet_History2[i].price;
    }
    QSpacerItem *space = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->verticalLayout_59->addItem(space);

    ui->lb_wallet_2_5->setText(QString::number(users->s->Wallet, 'f', 2)+" EGP");

    ui->stackedWidget_SellerProfile_5->setCurrentIndex(2);
}
void HomeGui::on_btn_frm2_Feedback_5_clicked()
{
    if (users->s->Comments.empty()) ui->lb_NoFeedBack_2_5->setVisible(true);
    else ui->lb_NoFeedBack_2_5->setVisible(false);

    AddFeeedBackLabels(ui->verticalLayout_53, ui->frm_scroll_3_5, "#2880AE", users->s->Comments);

    int x = (users->s->FinalRate/5.0)*100;
    if (users->s->NoOfVoters==0) x=0;
    ui->lb_rate_3_5->setText(to_string(x).c_str());
    ui->progressbar_rate_3_5->setValue(x);

    ui->stackedWidget_SellerProfile_5->setCurrentIndex(3);
}
void HomeGui::on_btn_frm1_EditProfile_5_clicked()
{
    eye_password=0;
    EyePassword();

    ui->lineEdit_fname_4_5->setText(users->s->FirstName.c_str());
    ui->lineEdit_lname_4_5->setText(users->s->SecondName.c_str());
    ui->lineEdit_phone_4_5->setText(users->s->Phone.c_str());
    ui->lineEdit_address_4_5->setText(users->s->Address.c_str());
    ui->lb_mail_4_5->setText(users->s->Email.c_str());
    ui->lineEdit_pass_4_5->setText(users->s->Password.c_str());
    ui->plainTextEdit_description_4_5->setPlainText(users->s->Description.c_str());
    string path;
    if (users->s->Path_photo.empty()) path = ":/img/assets/img/icons/icons8-add-image-96.png";
    else path = (users->data->PathOfFile+"img/Sellers/"+users->s->Path_photo).c_str();

    QPixmap pix(path.c_str());
    ui->lb_ImgOfSeller_4_5->setPixmap(pix);

    ui->stackedWidget_SellerProfile_5->setCurrentIndex(4);
}
void HomeGui::on_btn_addPhotoProfile_4_5_clicked()
{
    ImgPath = (QFileDialog::getOpenFileName(this, tr("Choose "), "", tr("Image(*.jpg *.jpeg)"))).toStdString();
    QImage img;
    img.load(ImgPath.c_str());
    img.save((users->data->PathOfFile+"img/Sellers/"+to_string(users->s->ID)+".jpg").c_str());
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfSeller_4_5->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfSeller_4_5->width(), Qt::SmoothTransformation);

    ui->lb_ImgOfSeller_4_5->setPixmap(QPixmap::fromImage(img));
}
void HomeGui::on_btn_done_4_5_clicked()
{
    string fname, lname, phone, address, pass, description;
    fname = ui->lineEdit_fname_4_5->text().toStdString();
    lname = ui->lineEdit_lname_4_5->text().toStdString();
    phone = ui->lineEdit_phone_4_5->text().toStdString();
    address = ui->lineEdit_address_4_5->text().toStdString();
    pass = ui->lineEdit_pass_4_5->text().toStdString();
    description = ui->plainTextEdit_description_4_5->toPlainText().toStdString();


    if (fname.empty()||lname.empty()||phone.empty()||address.empty()||pass.empty()||description.empty()||ImgPath.empty())
    {
        QMessageBox::warning(this, "Warning !", "There is an empty field !");
        return;
    }
    if (!users->CkeckNumber(phone))
    {
        QMessageBox::warning(this, "Warning !", "Invalid phone number  !                 ");
        return;
    }

    replace( description.begin(), description.end(), ',', '.');
    replace( description.begin(), description.end(), '\n', '.');

    users->s->FirstName = fname;
    users->s->SecondName = lname;
    users->s->Phone = phone;
    users->s->Address = address;
    users->s->Password = pass;
    users->s->Description = description;
    users->s->Path_photo = to_string(users->s->ID)+".jpg";
    users->s->IsCompletedProfile();
    ImgPath.clear();

    SetSellerProfile();
}
void HomeGui::on_btn_search_5_clicked()
{
    SellerSearchGui search(users);
    search.setModal(true);
    search.exec();
}
void HomeGui::EditProduct(Product *pro)
{
    users->p = pro;
    IsEditProduct=true;

    ui->lineEdit_name_5_5->setText(users->p->Name.c_str());
    ui->comboBox_category_5_5->setCurrentText(users->p->Category.c_str());
    ui->lineEdit_price_5_5->setText(to_string(users->p->Price).c_str());
    ui->lineEdit_quantity_5_5->setText(to_string(users->p->Quantity).c_str());
    ui->lineEdit_delivary_5_5->setText(to_string(users->p->NoOfDeliveryDays).c_str());
    ui->lineEdit_offer_5_5->setText(to_string(users->p->Offer_Percentage).c_str());
    ui->plainTextEdit_description_5->setPlainText(users->p->Description.c_str());

    QImage img;
    ImgPath = users->data->PathOfFile+"img/Products/"+users->p->PathOfPhoto;
    img.load(ImgPath.c_str());
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfProduct_5->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfProduct_5->width(), Qt::SmoothTransformation);
    ui->lb_ImgOfProduct_5->setPixmap(QPixmap::fromImage(img));


    ui->stackedWidget_SellerProfile_5->setCurrentIndex(5);
}
void HomeGui::on_btn_AddProduct_1_5_clicked()
{
    IsEditProduct=false;
    ImgPath.clear();

    ui->lineEdit_name_5_5->setText("");
    ui->comboBox_category_5_5->setCurrentText("");
    ui->lineEdit_price_5_5->setText("");
    ui->lineEdit_quantity_5_5->setText("");
    ui->lineEdit_delivary_5_5->setText("");
    ui->lineEdit_offer_5_5->setText("");
    ui->plainTextEdit_description_5->setPlainText("");
    QImage img;
    img.load(":/img/assets/img/icons/icons8-add-image-96.png");
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfProduct_5->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfProduct_5->width(), Qt::SmoothTransformation);
    ui->lb_ImgOfProduct_5->setPixmap(QPixmap::fromImage(img));


    ui->stackedWidget_SellerProfile_5->setCurrentIndex(5);

}
void HomeGui::on_btn_addPhotoProduct_5_5_clicked()
{
    int id;
    if (IsEditProduct) id = users->p->ID;
    else id = users->data->CountProduct;
    ImgPath = (QFileDialog::getOpenFileName(this, tr("Choose "), "", tr("Image(*.jpg *.jpeg)"))).toStdString();
    QImage img;
    img.load(ImgPath.c_str());
    img.save((users->data->PathOfFile+"img/Products/"+to_string(id)+".jpg").c_str());
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfProduct_5->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfProduct_5->width(), Qt::SmoothTransformation);
    ui->lb_ImgOfProduct_5->setPixmap(QPixmap::fromImage(img));
}
void HomeGui::on_btn_done_5_5_clicked()
{
    // --------->> Take data from User <<--------------
    string name, category, price, quantity, delivery, offer, description;
    name = ui->lineEdit_name_5_5->text().toStdString();
    category = ui->comboBox_category_5_5->currentText().toStdString();
    price = ui->lineEdit_price_5_5->text().toStdString();
    quantity = ui->lineEdit_quantity_5_5->text().toStdString();
    delivery = ui->lineEdit_delivary_5_5->text().toStdString();
    offer = ui->lineEdit_offer_5_5->text().toStdString();
    description = ui->plainTextEdit_description_5->toPlainText().toStdString();
    // ----------------------------------------------


    //  ---->> Check Validaion <<-------
    if (name.empty()||category.empty()||price.empty()||quantity.empty()||delivery.empty()||offer.empty()||description.empty()||ImgPath.empty())
    {
        QMessageBox::warning(this, "Warning !", "There is an empty field !");
        return;
    }
    if (!users->CkeckNumber(price))
    {
        QMessageBox::warning(this, "Warning !", "Invalid Price  !                 ");
        return;
    }
    if (!users->CkeckNumber(quantity))
    {
        QMessageBox::warning(this, "Warning !", "Invalid Quantity  !              ");
        return;
    }
    if (!users->CkeckNumber(delivery))
    {
        QMessageBox::warning(this, "Warning !", "Invalid Number Of Delivery  !     ");
        return;
    }
    if (!users->CkeckNumber(offer))
    {
        QMessageBox::warning(this, "Warning !", "Invalid Offer Percentage !        ");
        return;
    }
    if (stoi(offer)>100 || stoi(offer)<0)
    {
        QMessageBox::warning(this, "Warning !", "Please enter offer percentage between ( 0 ~ 100 ) !");
        return;
    }
    replace( description.begin(), description.end(), ',', '.');
    replace( description.begin(), description.end(), '\n', '.');
    //  -----------------------------------------



    //  ----->>  Product added  <<------
    if (IsEditProduct)
    {
        users->p->Name = name;
        users->p->Price = stof(price);
        users->p->Quantity = stoi(quantity);
        users->p->NoOfDeliveryDays = stoi(delivery);
        users->p->Offer_Percentage = stoi(offer);
        users->p->Description = description;
        users->p->CalculatePrice();
        users->p->PathOfPhoto = to_string(users->p->ID)+".jpg";
        if (users->p->Quantity > 0) users->p->Avaliability=1;
        else users->p->Avaliability=0;
        QMessageBox::information(this, "Successful operation","Product updated successfully    !");
    }
    else
    {
        users->AddProduct(name, stof(price), stoi(quantity), description, category, stoi(offer),
                          stoi(delivery), (to_string(users->data->CountProduct)+".jpg"), users->s->Email);
        QMessageBox::information(this, "Successful operation","Product added successfully    !");
    }
    // -----------------------------------------



    //  -------->>>>>  clear fields  <<<<<---------
    IsEditProduct=false;
    ImgPath.clear();

    ui->lineEdit_name_5_5->setText("");
    ui->comboBox_category_5_5->setCurrentText("");
    ui->lineEdit_price_5_5->setText("");
    ui->lineEdit_quantity_5_5->setText("");
    ui->lineEdit_delivary_5_5->setText("");
    ui->lineEdit_offer_5_5->setText("");
    ui->plainTextEdit_description_5->setPlainText("");
    QImage img;
    img.load(":/img/assets/img/icons/icons8-add-image-96.png");
    if (img.height() >= img.width()) img=img.scaledToHeight(ui->lb_ImgOfProduct_5->height(), Qt::SmoothTransformation);
    else img=img.scaledToWidth(ui->lb_ImgOfProduct_5->width(), Qt::SmoothTransformation);
    ui->lb_ImgOfProduct_5->setPixmap(QPixmap::fromImage(img));
    //  -------------------------------------------------------


    on_btn_frm2_Home_5_clicked();
}
void HomeGui::DeleteProductForEver(int id, QLayout *ly)
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "", "Are you sure you want remove product ?");
    if (reply == QMessageBox::No) return;

    clearLayout(ly);
    users->RemoveProduct(id);
    on_btn_frm2_Products_5_clicked();
}
void HomeGui::SwitchAd_SellerProfile() // Swicht Ads
{
    if(IndexOfAdSellerProfile>4) IndexOfAdSellerProfile=1;
       string Ad_Path=":/img/assets/img/Ads/SellerProfile/";
       QPixmap p ((Ad_Path+to_string(IndexOfAdSellerProfile)+".png").c_str());
       ui->lb_Ad_0_5->setPixmap(p);
       IndexOfAdSellerProfile++;
}




//   -------->  Bassant  <-----------
void HomeGui::SetSellerViewPage()
{
    ui->lb_frm1_Name_6->setText((users->s->FirstName + " " + users->s->SecondName).c_str());
    ui->lb_frm1_ID_6->setText(to_string(users->s->ID).c_str());
    ui->lb_frm1_mail_6->setText(users->s->Email.c_str());
    ui->lb_frm1_phone_6->setText(users->s->Phone.c_str());
    ui->txtbrowser_Description_0_6->setText(users->s->Description.c_str());

    string path;
    if (users->s->Path_photo.empty()) path =":/img/assets/img/icons/avatar-profile-icon.jpg";
    else path = (users->data->PathOfFile+"img/Sellers/"+users->s->Path_photo).c_str();
    QPixmap pixel (path.c_str());
    ui->lb_frm1_img_6->setPixmap(pixel);

    QRegion *region = new QRegion(5, 5, ui->lb_frm1_img_6->width()-12, ui->lb_frm1_img_6->height()-20, QRegion::Ellipse);
    ui->lb_frm1_img_6->setMask(*region);

    ui->stackedWidget_main->setCurrentIndex(6);
    on_btn_frm2_Home_6_clicked();
}
void HomeGui::on_btn_frm2_Home_6_clicked()
{
    ui->stackedWidget_SellerView_6->setCurrentIndex(0);
}
void HomeGui::on_btn_frm2_avaliable_6_clicked()
{
    clearLayout(ui->gridLayout_7);
    ui->frm_scroll_1_6->setMinimumHeight(363*round(users->s->SelledProducts.size()/3.0));

    unordered_map<int, Product*>::iterator it;
    int x=0, y=0;
    for (it=users->s->SelledProducts.begin() ; it!=users->s->SelledProducts.end() ; it++)
    {
        productItem = new ProductGuiWidget(it->second, users->data->PathOfFile+"img/Products/");
        connect(productItem->Btn_Name, &QPushButton::clicked, this, [this, it](){GoToProductProfile(it->second->ID, 6);});
        if (x==3)
        {
            x=0;
            y++;
        }
        ui->gridLayout_7->addWidget(productItem, y, x);
        x++;
    }

    ui->stackedWidget_SellerView_6->setCurrentIndex(1);
}
void HomeGui::on_btn_frm2_Feedback_6_clicked()
{
    if (users->s->Comments.empty()) ui->lb_NoFeedBack_2_6->setVisible(true);
    else ui->lb_NoFeedBack_2_6->setVisible(false);


    AddFeeedBackLabels(ui->verticalLayout_7, ui->frm_scroll_2_6, "#2880AE", users->s->Comments);


    if (users->s->FinalRate==0) ui->progressbar_rate_2_6->setValue(0);
    else ui->progressbar_rate_2_6->setValue(((users->s->FinalRate)/5.0)*100);

    ui->lb_rate_2_6->setText("( "+QString::number(users->s->FinalRate, 'f', 1)+" )");
    ui->stackedWidget_SellerView_6->setCurrentIndex(2);
}
void HomeGui::on_btn_frm1_AddRate_6_clicked()
{
    if (ui->btn_frm1_Login_7->text() == "Log in")
    {
        QMessageBox::information(this, "",  "Please Login first ");
        return;
    }

    HideItems();

    ui->stackedWidget_SellerView_6->setCurrentIndex(0);
    ui->txtbrowser_Description_0_6->setFixedHeight(265);
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
                 users->s->CalculateRate(stof(ui->txtEdit_frm3_Rate_0_6->toPlainText().toStdString()));
                if (!ui->txtEdit_frm3_Comment_0_6->toPlainText().toStdString().empty())
                {
                     users->s->Comments.push_back(ui->txtEdit_frm3_Comment_0_6->toPlainText().toStdString());
                    Comment=true;
                }
                if (Comment)
                {
                    ui->lb_validaionRight_0_6->setText("Your Rate and Comment have been successfully recorded");
                    ui->lb_validaionRight_0_6->setVisible(true);
                }
                else if (!Comment)
                {
                    ui->lb_validaionRight_0_6->setText("Your Rate has been successfully recorded");
                    ui->lb_validaionRight_0_6->setVisible(true);
                }
            }
            else ui->lb_validaionWrong_0_6->setVisible(true);
        }
        else ui->lb_validaionWrong_0_6->setVisible(true);
    }
    else ui->lb_validaionWrong_0_6->setVisible(true);


    ui->txtEdit_frm3_Rate_0_6->setText("");
    ui->txtEdit_frm3_Comment_0_6->setText("");
}
void HomeGui::SwitchAd_SetSellerViewPage() // Swicht Ads
{
    if (IndexOfAdSellerInfoView > 3) IndexOfAdSellerInfoView=1;
    string pathOfferHome = ":/img/assets/img/Ads/SellerInfoView/";
    QPixmap pix((pathOfferHome+to_string(IndexOfAdSellerInfoView)+".png").c_str());
    ui->lb_ad_0_6->setPixmap(pix);
    IndexOfAdSellerInfoView++;
}



