#ifndef HOMEGUI_H
#define HOMEGUI_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QFrame>
#include <QSpacerItem>
#include <QFileDialog>
#include <QLineEdit>

#include <iostream>
#include <string.h>
#include <cstdlib>

#include "ProductGuiWidget.h"
#include "Controller.h"
#include "ProductGuiWidget_2.h"
#include "CategoryGuiWidget.h"
#include "WalletGuiWidget.h"
#include "SellerSearchGui.h"
#include "ErrorPage.h"
#include "DoneShoppingGui.h"
#include "TermsAndConditions.h"
#include "ContactToUsGui.h"
#include "UserGuiWidget.h"

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

    //   -------->  Home Page  <-----------
    void on_btn_login_1_clicked();
    void on_btn_sign_2_clicked();
    void on_btn_frm1_back_1_3_clicked();
    void on_btn_frm1_search_1_3_clicked();
    void on_btn_frm1_clear1_1_3_clicked();
    void on_btn_frm1_setfilter_1_3_clicked();
    void on_btn_frm1_clear2_1_3_clicked();
    void on_btn_frm3_EnterSeller_3_clicked();
    void on_btn_frm3_policy_3_clicked();
    void on_btn_frm3_ContactUs_3_clicked();


    //   -------->  Customer Profile  <-----------
    void on_btn_frm2_fav_4_clicked();
    void on_btn_frm2_Cart_4_clicked();
    void on_btn_frm2_Home_4_clicked();
    void on_btn_edit_4_clicked();
    void on_btn_addPhoto_3_4_clicked();
    void on_btn_done_3_4_clicked();
    void on_btn_checkOut_1_4_clicked();


    //   -------->  Prodact Page  <-----------
    void on_btn_frm1_Home_7_clicked();
    void on_btn_frm1_Feedaback_7_clicked();
    void on_btn_sellerName_0_7_clicked();
    void on_btn_addCart_0_7_clicked();
    void on_btn_addFavorite_0_7_clicked();
    void on_btn_Submit_1_7_clicked();
    void on_btn_AddRate_1_7_clicked();
    void on_btn_plus_0_7_clicked();
    void on_btn_minus_0_7_clicked();




    //   -------->  Seller Profile  <-----------
    void on_btn_frm2_Home_5_clicked();
    void on_btn_frm2_Products_5_clicked();
    void on_btn_frm2_Wallet_5_clicked();
    void on_btn_frm2_Feedback_5_clicked();
    void on_btn_frm1_EditProfile_5_clicked();
    void on_btn_done_4_5_clicked();
    void on_btn_search_5_clicked();
    void on_btn_AddProduct_1_5_clicked();
    void on_btn_addPhotoProduct_5_5_clicked();
    void on_btn_done_5_5_clicked();
    void on_btn_addPhotoProfile_4_5_clicked();



    //   -------->  Seller View  <-----------
    void on_btn_frm1_AddRate_6_clicked();
    void on_btn_frm3_Submit_0_6_clicked();
    void on_btn_frm2_Home_6_clicked();
    void on_btn_frm2_avaliable_6_clicked();
    void on_btn_frm2_Feedback_6_clicked();



    //   -------->  Admin Page  <-----------
    void on_btn_Home_8_clicked();
    void on_btn_Customers_clicked();
    void on_btn_Sellers_clicked();
    void on_btn_Products_clicked();
    void on_btn_Feedback_clicked();
    void on_btn_ClearComments_3_8_clicked();
    void on_btn_back_8_clicked();



public:
    //   -------->  All  <-----------
    void Connection();
    void SwitchAd();
    void clearLayout(QLayout *layout);
    void GoToProductProfile(int id, int page);
    void AddFeeedBackLabels(QLayout *ly, QFrame *f, string color, vector<string> v);
    void AddProductToLists(QLayout *ly, QFrame *f, string color, unordered_map<int, Product*> &list, string container, int PageNum);
    void CheckSeller();
    void BackToLastPage();
    void BackToHome();
    void GoToHome();
    void login();
    void SignUp();
    void HideItems();
    void EyePassword();


    //   -------->  Home Page  <-----------
    void SwitchAd_Home();
    void GoToCategoryPage(vector<Product *> &pro, string s);
    void SetHomePage();
    void ShowErrorPage();


    //   -------->  Customer Profile  <-----------
    void SetCustomerProfile();
    void SwitchAd_CustomerPage();
    void RemoveFromList(int id, string container);



    //   -------->  Prodact Page  <-----------
    void SwitchAd_ProductPage();
    void SetProductPage();


    //   -------->  Seller Profile  <-----------
    void SetSellerProfile();
    void SwitchAd_SellerProfile();
    void EditProduct(Product *pro);
    void DeleteProductForEver(int id, QLayout *ly);


    //   -------->  Seller View  <-----------
    void SetSellerViewPage();
    void SwitchAd_SetSellerViewPage();



public:
    Ui::HomeGui *ui;

    Controller *users;

    QTimer *time1, *time2;

    string CategoryName, ImgPath;
    bool IsSeller = false, IsEditProduct=false, eye_password=true;
    int IndexOfAdHome=1, IndexOfAdSellerInfoView=1, IndexOfAdSellerProfile=1, IndexOfProductads=1, IndexOfAdCustomerProfile=1;
    CategoryGuiWidget *categoryItem;
    ProductGuiWidget *productItem;
    ProductGuiWidget_2 *crt;
    WalletGuiWidget *walletItem;
    UserGuiWidget *UsersInAdmin;
    int NumberOfProductForOrder=1;
};
#endif // HOMEGUI_H
