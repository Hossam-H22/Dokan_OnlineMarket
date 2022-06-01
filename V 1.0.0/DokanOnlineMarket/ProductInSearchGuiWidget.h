#ifndef PRODUCTINSEARCHGUIWIDGET_H
#define PRODUCTINSEARCHGUIWIDGET_H

#include <QWidget>
#include "Product.h"

namespace Ui {
class ProductInSearchGuiWidget;
}

class ProductInSearchGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductInSearchGuiWidget(Product *p, string path, QWidget *parent = nullptr);
    ~ProductInSearchGuiWidget();

private:
    Ui::ProductInSearchGuiWidget *ui;
};

#endif // PRODUCTINSEARCHGUIWIDGET_H
