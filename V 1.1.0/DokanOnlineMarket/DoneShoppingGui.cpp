#include "DoneShoppingGui.h"
#include "ui_DoneShoppingGui.h"

DoneShoppingGui::DoneShoppingGui(string date, string address, float Price, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoneShoppingGui)
{
    ui->setupUi(this);
    ui->lb_date->setText(("Your order will arrive on "+date).c_str());
    ui->lb_address->setText(("At "+address).c_str());
    ui->lb_price->setText("Total :  "+QString::number(Price, 'f', 2)+" EGP");
}

DoneShoppingGui::~DoneShoppingGui()
{
    delete ui;
}
