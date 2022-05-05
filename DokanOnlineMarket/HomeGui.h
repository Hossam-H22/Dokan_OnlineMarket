#ifndef HOMEGUI_H
#define HOMEGUI_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "ProductGuiWidget.h"
#include "Controller.h"
#include "product_in_cart.h"


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

    //Hosam
    void on_btn_login_1_clicked();
    void on_btn_sign_2_clicked();
    void on_btn_back_1_3_clicked();
    void on_btn_frm1_nameCategory_0_3_clicked();
    void on_btn_frm2_nameCategory_0_3_clicked();
    void on_btn_frm3_nameCategory_0_3_clicked();
    void on_btn_frm4_nameCategory_0_3_clicked();
    void on_btn_frm5_nameCategory_0_3_clicked();
    void on_btn_frm6_nameCategory_0_3_clicked();
    void on_btn_frm7_nameCategory_0_3_clicked();
    void on_btn_frm8_nameCategory_0_3_clicked();
    void on_btn_frm9_nameCategory_0_3_clicked();
    void on_btn_frm10_nameCategory_0_3_clicked();
    void on_btn_frm11_nameCategory_0_3_clicked();
    void on_btn_frm12_nameCategory_0_3_clicked();
    void on_btn_frm13_nameCategory_0_3_clicked();
    void on_btn_frm14_nameCategory_0_3_clicked();



    //Omar
    void on_btn_back_4_clicked();
    void on_btn_frm2_fav_4_clicked();
    void on_btn_frm2_Cart_4_clicked();
    void on_btn_frm2_Home_4_clicked();


    //Karim
    void on_btn_frm1_Home_7_clicked();
    void on_btn_frm1_Feedaback_7_clicked();


    //Aya
    void on_btn_frm2_Home_5_clicked();
    void on_btn_frm2_Products_5_clicked();
    void on_btn_frm2_Wallet_5_clicked();
    void on_btn_frm2_Feedback_5_clicked();


    //Bassant
    void on_btn_frm1_AddRate_6_clicked();
    void on_btn_frm3_Submit_0_6_clicked();




public:
    void Connection();


    //Hosam
    void GoToHome();
    void login();
    void SignUp();
    void SwitchAd();

    //Omar
    void SetCustomerProfile();

    //karim
    void SetProductPage();

    //Aya
    void SetSellerProfile();

    //Bassant
    void SetSellerViewPage();

public:
    Ui::HomeGui *ui;
    Controller *users;

    string CategoryName;
    bool IsSeller;
    QTimer *time1;
    int IndexOfAdHome=1;

    ProductGuiWidget *productItem;
    product_in_cart *crt;

};
#endif // HOMEGUI_H
