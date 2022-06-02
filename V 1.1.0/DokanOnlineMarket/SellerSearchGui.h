#ifndef SELLERSEARCHGUI_H
#define SELLERSEARCHGUI_H

#include <QDialog>
#include <QLayout>
#include "Controller.h"
#include "Product.h"
#include "ProductInSearchGuiWidget.h"

namespace Ui {
class SellerSearchGui;
}

class SellerSearchGui : public QDialog
{
    Q_OBJECT

public:
    explicit SellerSearchGui(Controller *users, QWidget *parent = nullptr);
    ~SellerSearchGui();

private slots:
     void on_btn_search_clicked();

private:
     void clearLayout(QLayout *layout);


private:
    Ui::SellerSearchGui *ui;
    ProductInSearchGuiWidget *product_Search;
    Controller *users;
};

#endif // SELLERSEARCHGUI_H
