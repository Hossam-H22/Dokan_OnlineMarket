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
    void on_btn_frm3_EnterSeller_3_clicked();
    void on_btn_frm3_policy_3_clicked();


    // Omar
    void on_btn_frm2_fav_4_clicked();
    void on_btn_frm2_Cart_4_clicked();
    void on_btn_frm2_Home_4_clicked();
    void on_btn_edit_4_clicked();
    void on_btn_addPhoto_3_4_clicked();
    void on_btn_done_3_4_clicked();
    void on_btn_checkOut_1_4_clicked();


    // Karim
    void on_btn_frm1_Home_7_clicked();
    void on_btn_frm1_Feedaback_7_clicked();
    void on_btn_sellerName_0_7_clicked();
    void on_btn_addCart_0_7_clicked();
    void on_btn_addFavorite_0_7_clicked();
    void on_btn_Submit_1_7_clicked();
    void on_btn_AddRate_1_7_clicked();
    void on_btn_plus_0_7_clicked();
    void on_btn_minus_0_7_clicked();




    // Aya
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



    // Bassant
    void on_btn_frm1_AddRate_6_clicked();
    void on_btn_frm3_Submit_0_6_clicked();
    void on_btn_frm2_Home_6_clicked();
    void on_btn_frm2_avaliable_6_clicked();
    void on_btn_frm2_Feedback_6_clicked();





public:
    void Connection(); // All Pages
    void SwitchAd(); // All Pages
    void clearLayout(QLayout *layout); // All Pages
    void GoToProductProfile(int id, int page); // All Pages
    void AddFeeedBackLabels(QLayout *ly, QFrame *f, string color, vector<string> v); // Bassant + Aya + Karim
    void AddProductToLists(QLayout *ly, QFrame *f, string color, unordered_map<int, Product*> &list, string container, int PageNum); // Omar + Aya
    void CheckSeller(); // Hossam + Karim
    void BackToLastPage(); // Bassabt + Aya + Omar
    void BackToHome(); // Bassant + Hossam + Omar + Karim
    void GoToHome(); // Hossam + Omar + Aya
    void login(); // Hossam + Karim
    void SignUp(); // Hossam + Karim
    void HideItems();
    void EyePassword();


    // Hosam
    void SwitchAd_Home();
    void GoToCategoryPage(vector<Product *> &pro, string s);
    void SetHomePage();
    void ShowErrorPage();


    // Omar
    void SetCustomerProfile();
    void SwitchAd_CustomerPage();
    void RemoveFromList(int id, string container);



    // karim
    void SwitchAd_ProductPage();
    void SetProductPage();


    // Aya
    void SetSellerProfile();
    void SwitchAd_SellerProfile();
    void EditProduct(Product *pro);
    void DeleteProductForEver(int id, QLayout *ly);


    // Bassant
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
    int NumberOfProductForOrder=1;
};
#endif // HOMEGUI_H
