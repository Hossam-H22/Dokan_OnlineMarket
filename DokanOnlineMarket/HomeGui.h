#ifndef HOMEGUI_H
#define HOMEGUI_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "ProductGuiWidget.h"
#include "Controller.h"
#include "product_in_cart.h"
#include "CategoryGuiWidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class HomeGui; }
QT_END_NAMESPACE



class HomeGui : public QMainWindow
{
    Q_OBJECT

public:
    HomeGui(Controller *users = nullptr, QWidget *parent = nullptr);
    ~HomeGui();

private slots:

    // Hosam
    void on_btn_login_1_clicked();
    void on_btn_sign_2_clicked();
    void on_btn_frm1_back_1_3_clicked();
    void on_btn_frm1_search_1_3_clicked();
    void on_btn_frm1_clear1_1_3_clicked();
    void on_btn_frm1_setfilter_1_3_clicked();
    void on_btn_frm1_clear2_1_3_clicked();


    // Omar
    void on_btn_back_4_clicked();
    void on_btn_frm2_fav_4_clicked();
    void on_btn_frm2_Cart_4_clicked();
    void on_btn_frm2_Home_4_clicked();


    // Karim
    void on_btn_frm1_Home_7_clicked();
    void on_btn_frm1_Feedaback_7_clicked();
    void on_btn_back_7_clicked();
    void on_btn_sellerName_0_7_clicked();
    void on_btn_addCart_0_7_clicked();

    // Aya
    void on_btn_frm2_Home_5_clicked();
    void on_btn_frm2_Products_5_clicked();
    void on_btn_frm2_Wallet_5_clicked();
    void on_btn_frm2_Feedback_5_clicked();
    void on_btn_frm1_EditProfile_5_clicked();


    // Bassant
    void on_btn_frm1_AddRate_6_clicked();
    void on_btn_frm3_Submit_0_6_clicked();
    void on_btn_frm2_Home_6_clicked();
    void on_btn_frm2_avaliable_6_clicked();
    void on_btn_frm2_Feedback_6_clicked();
    void on_btn_back_6_clicked();




public:
    void Connection();
    void SwitchAd();
    void clearLayout(QLayout *layout);

    // Hosam
    void GoToHome();
    void login();
    void SignUp();
    void SwitchAd_Home();
    void GoToCategoryPage(vector<Product *> &pro, string s);
    void GoToProductProfile(int id);
    void SetHomePage();


    // Omar
    void SetCustomerProfile();
    void SwitchAd_CustomerPage();

    // karim
    void SetProductPage();
    void SwitchAd_ProductPage();


    // Aya
    void SetSellerProfile();
    void SwitchAd_SellerProfile();


    // Bassant
    void SetSellerViewPage();
    void SwitchAd_SetSellerViewPage();



public:
    Ui::HomeGui *ui;
    Controller *users;

    string CategoryName;
    bool IsSeller;
    QTimer *time1;
    int IndexOfAdHome=1, IndexOfAdSellerInfoView=1, IndexOfAdSellerProfile=1, IndexOfProductads=1, IndexOfAdCustomerProfile=1;

    CategoryGuiWidget *categoryItem;
    ProductGuiWidget *productItem;
    product_in_cart *crt;



};
#endif // HOMEGUI_H
