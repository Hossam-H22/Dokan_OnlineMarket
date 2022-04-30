#include "SellerInfoView.h"
#include "ui_SellerInfoView.h"

SellerInfoView::SellerInfoView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SellerInfoView)
{
    ui->setupUi(this);

}

SellerInfoView::~SellerInfoView()
{
    delete ui;
}
