#include "ProductGuiWidget.h"
#include "ui_ProductGuiWidget.h"
#include <QPainter>
#include "HomeGui.h"


ProductGuiWidget::ProductGuiWidget(Product *pro, string path, QWidget *parent) :
    QWidget(parent), ui(new Ui::ProductGuiWidget)
{
    ui->setupUi(this);

    Btn_Name = ui->btn_name;
    ui->btn_name->setText(pro->Name.c_str());
    ui->lb_offer->setText(("-"+to_string(pro->Offer_Percentage)+"%").c_str());
    ui->lb_oldPrice->setText(QString::number(pro->Price, 'f', 2)+" EGP");
    ui->lb_price->setText(QString::number(pro->PriceAfterOffer, 'f', 2)+" EGP");
    ui->progressBar_rate_0_7->setValue(((pro->FinalRate)/5.0)*100);

    if (pro->Avaliability) ui->lb_availability->setVisible(false);
    else ui->lb_availability->setVisible(true);

    QImage img;
    img.load((path+pro->PathOfPhoto).c_str());
    if (img.height() >= img.width()) img.scaledToHeight(ui->lb_photo->height(), Qt::SmoothTransformation);
    else img.scaledToWidth(ui->lb_photo->width(), Qt::SmoothTransformation);
    ui->lb_photo->setPixmap(QPixmap::fromImage(img));

    if (pro->Offer_Percentage == 0)
    {
        ui->lb_offer->setVisible(false);
        ui->lb_oldPrice->setVisible(false);
        ui->lb_price->setMinimumWidth(208);
    }


}


ProductGuiWidget::~ProductGuiWidget()
{
    delete ui;
}

