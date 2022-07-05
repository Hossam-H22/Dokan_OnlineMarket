#include "ProductInSearchGuiWidget.h"
#include "ui_ProductInSearchGuiWidget.h"


/**
 * @brief ProductInSearchGuiWidget::ProductInSearchGuiWidget
 * @param p ->> pointer of product
 * @param path ->> path of files in computer
 * make widget of product and set labels with product information
 */

ProductInSearchGuiWidget::ProductInSearchGuiWidget(Product *p, string path, QWidget *parent) :
    QWidget(parent), ui(new Ui::ProductInSearchGuiWidget)
{
    ui->setupUi(this);

    ui->lb_name->setText(p->Name.c_str());
    ui->lb_offerPrice->setText(to_string(p->Price).c_str());
    QPixmap pix((path+"/img/Products/"+p->PathOfPhoto).c_str());
    if(pix.height()>pix.width())
        ui->lb_photo->setGeometry(20, 10, 40, 60);
    else if (pix.height() == pix.width())
        ui->lb_photo->setGeometry(20, 10, 60, 60);
    else
        ui->lb_photo->setGeometry(20, 10, 60, 40);

    ui->lb_photo->setPixmap(pix);
}

ProductInSearchGuiWidget::~ProductInSearchGuiWidget()
{
    delete ui;
}
