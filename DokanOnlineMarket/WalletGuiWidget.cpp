#include "WalletGuiWidget.h"
#include "ui_WalletGuiWidget.h"

WalletGuiWidget::WalletGuiWidget(int id, string name, float price, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WalletGuiWidget)
{
    ui->setupUi(this);
    ui->lb_id->setText(to_string(id).c_str());
    ui->lb_name->setText(name.c_str());
    ui->lb_price->setText(to_string(price).c_str());
}

WalletGuiWidget::~WalletGuiWidget()
{
    delete ui;
}
