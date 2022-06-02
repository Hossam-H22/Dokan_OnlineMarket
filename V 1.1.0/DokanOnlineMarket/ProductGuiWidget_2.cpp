#include "ProductGuiWidget_2.h"
#include "ui_ProductGuiWidget_2.h"

ProductGuiWidget_2::ProductGuiWidget_2(Product *p, string path, string container, string color, int quantity, QWidget *parent) :
    QWidget(parent), ui(new Ui::ProductGuiWidget_2)
{
    ui->setupUi(this);

    ui->frame->setStyleSheet(("background-color: "+color+"; border-radius: 20px; color: #ffffff;").c_str());
    ui->btn_name->setText(p->Name.c_str());
    ui->lb_offer->setText(("-"+to_string(p->Offer_Percentage)+"%").c_str());
    ui->lb_Price->setText(QString::number(p->Price, 'f', 2)+"EGP");
    ui->lb_offerPrice->setText("Price : "+QString::number(p->PriceAfterOffer, 'f', 2)+" EGP");

    if (p->Avaliability) ui->lb_availability->setVisible(false);
    else ui->lb_availability->setVisible(true);

    ui->lb_NoVoters->setText(("( "+to_string(p->NoVoters)+" )").c_str());
    if (p->FinalRate ==0) ui->progressBar_rate->setValue(0);
    else ui->progressBar_rate->setValue(((p->FinalRate)/5.0)*100);


    QPixmap pixel((path+p->PathOfPhoto).c_str());
    ui->lb_photo->setPixmap(pixel);

    if (p->Offer_Percentage==0)
    {
        ui->lb_offer->setVisible(false);
        ui->lb_Price->setVisible(false);
    }
    ui->btn_action_2->setVisible(false);

    this->Btn_name = ui->btn_name;
    this->Btn_action = ui->btn_action;
    this->Btn_action2 = ui->btn_action_2;


    ui->lb_quantity->setText(("x "+to_string(quantity)).c_str());
    ui->lb_quantity->setVisible(true);

    ui->lb_Id->setText(("ID :  "+to_string(p->ID)).c_str());
    ui->lb_Id->setVisible(false);

    if (container == "Cart")
    {
        QIcon ico(":/img/assets/img/icons/icons8-remove-from-cart-64.png");
        ui->btn_action->setIcon(ico);
    }
    else if (container == "Favorite")
    {
        QIcon ico(":/img/assets/img/icons/icons8-remove-96.png");
        ui->btn_action->setIcon(ico);
        ui->lb_quantity->setVisible(false);
    }
    else if (container=="Available" || container=="Admin")
    {
        ui->btn_action_2->setVisible(true);

        QIcon ico(":/img/assets/img/icons/icons8-remove-96.png");
        ui->btn_action->setIcon(ico);
        ui->lb_quantity->setText(("x "+to_string(p->Quantity)).c_str());

        ui->lb_Id->setVisible(true);
    }
    if (container=="Admin") ui->btn_action_2->setVisible(false);



}

ProductGuiWidget_2::~ProductGuiWidget_2()
{
    delete ui;
}
