#include "SellerSearchGui.h"
#include "./ui_SellerSearchGui.h"

SellerSearchGui::SellerSearchGui(Controller *user, QWidget *parent) :
    QDialog(parent), ui(new Ui::SellerSearchGui)
{
    ui->setupUi(this);
    this->users = user;
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
//    clearLayout(ui->verticalLayout_2);
//    ui->parentFrame->setMinimumHeight(320);
//    int count = 0;
//    string search_input = ui->SearchInput->text().toStdString();

//    if (search_input.empty()) return;

//    for(int i= 0 ;i<users->data->ProductArr.size();i++)
//    {
//       if(users->data->ProductArr[i]->Name.find(search_input) !=-1)
//        {
//            count++;
//            ui->parentFrame->setMinimumHeight(80*count);
//            product_Search = new ProductInSearchGuiWidget(users->data->ProductArr[i]);
//            ui->verticalLayout_2->addWidget(product_Search);
//        }
//    }



//    QSpacerItem *space = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Expanding);
//    ui->verticalLayout_2->addItem(space);
}

SellerSearchGui::~SellerSearchGui()
{
    delete ui;
}
