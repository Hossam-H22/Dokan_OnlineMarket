#ifndef PRODUCTGUIWIDGET_H
#define PRODUCTGUIWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <iostream>
#include "Product.h"


using namespace std;

namespace Ui { class ProductGuiWidget; }

class ProductGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductGuiWidget(Product *pro = nullptr, QWidget *parent = nullptr);
    ~ProductGuiWidget();


public:
    Ui::ProductGuiWidget *ui;
    Product *pro;

    QPushButton *Btn_Name;

    void try1();
};

#endif // PRODUCTGUIWIDGET_H
