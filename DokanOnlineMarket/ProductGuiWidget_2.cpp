#include "ProductGuiWidget_2.h"
#include "ui_ProductGuiWidget_2.h"

ProductGuiWidget_2::ProductGuiWidget_2(Product *p, string path, string container, string color, QWidget *parent) :
    QWidget(parent), ui(new Ui::ProductGuiWidget_2)
{
    ui->setupUi(this);

    ui->frame->setStyleSheet(("background-color: "+color+"; border-radius: 20px; color: #ffffff;").c_str());
    ui->btn_name->setText(p->Name.c_str());
    ui->lb_offer->setText(("-"+to_string(p->Offer_Percentage)+"%").c_str());
    ui->lb_Price->setText((to_string(p->Price)+"EGP").c_str());
    ui->lb_offerPrice->setText(("Price : "+to_string(p->PriceAfterOffer)+" EGP").c_str());

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

    if (container == "Cart")
    {
        QIcon ico(":/img/assets/img/icons/icons8-remove-from-cart-64.png");
        ui->btn_action->setIcon(ico);
    }
    else if (container == "Favorite")
    {
        QIcon ico(":/img/assets/img/icons/icons8-remove-96.png");
        ui->btn_action->setIcon(ico);
    }
    else if (container=="Available")
    {
        ui->btn_action_2->setVisible(true);

        QIcon ico(":/img/assets/img/icons/icons8-remove-96.png");
        ui->btn_action->setIcon(ico);
    }


    ui->label->setText(to_string(p->ID).c_str());
}

ProductGuiWidget_2::~ProductGuiWidget_2()
{
    delete ui;
}
