#ifndef PRODUCTGUIWIDGET_H
#define PRODUCTGUIWIDGET_H

#include <QWidget>
#include <iostream>
#include "Product.h"

using namespace std;

namespace Ui { class ProductGuiWidget; }

class ProductGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductGuiWidget(QWidget *parent = nullptr);
    ~ProductGuiWidget();


public:
    Ui::ProductGuiWidget *ui;
    bool *goToProduct;
    Product *p;

};

#endif // PRODUCTGUIWIDGET_H
