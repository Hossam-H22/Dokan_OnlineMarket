#include "WalletGuiWidget.h"
#include "ui_WalletGuiWidget.h"

WalletGuiWidget::WalletGuiWidget(Seller::WalletData wal, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WalletGuiWidget)
{
    ui->setupUi(this);
    ui->lb_id->setText(to_string(wal.id).c_str());
    ui->lb_name->setText(wal.name.c_str());
    ui->lb_price->setText(QString::number(wal.price, 'f', 2)+" EGP");
    ui->lb_date->setText(wal.date.c_str());
    ui->lb_quantity->setText(("x"+to_string(wal.quantity)).c_str());
}

WalletGuiWidget::~WalletGuiWidget()
{
    delete ui;
}
