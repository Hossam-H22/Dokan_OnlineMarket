#include "SellerSearchGui.h"
#include "./ui_SellerSearchGui.h"

SellerSearchGui::SellerSearchGui(Controller *user, QWidget *parent) :
    QDialog(parent), ui(new Ui::SellerSearchGui)
{
    ui->setupUi(this);
    this->users = user;
    ui->lb_NoProduct->setVisible(false);
}

void SellerSearchGui::clearLayout(QLayout *layout)
{
    if (layout == NULL) return;
    QLayoutItem *item;
    while (item = layout->takeAt(0))
    {
        if (item->layout())
        {
            clearLayout(item->layout());
            item->layout();
        }
        if (item->widget()) delete item->widget();
        delete item;
    }
}

void SellerSearchGui::on_btn_search_clicked()
{
    ui->lb_NoProduct->setVisible(false);
    clearLayout(ui->verticalLayout_2);
    ui->parentFrame->setMinimumHeight(320);
    int count = 0;
    string search_input = ui->SearchInput->text().toStdString();

    bool NotFound = true;
    if (search_input.empty()) return;

    for(auto product: users->data->ProductArr2)
    {
       if(product.second->Name.find(search_input) !=-1)
        {
            count++;
            ui->parentFrame->setMinimumHeight(80*count);
            product_Search = new ProductInSearchGuiWidget(product.second, users->data->PathOfFile);
            ui->verticalLayout_2->addWidget(product_Search);

            NotFound = false;
        }
    }

    if (NotFound) ui->lb_NoProduct->setVisible(true);

}

SellerSearchGui::~SellerSearchGui()
{
    delete ui;
}
