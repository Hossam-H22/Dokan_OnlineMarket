#ifndef PRODUCTGUIWIDGET_H
#define PRODUCTGUIWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QImage>
#include <iostream>
#include "Product.h"


using namespace std;

namespace Ui { class ProductGuiWidget; }

class ProductGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductGuiWidget(Product *pro, string path, QWidget *parent = nullptr);
    ~ProductGuiWidget();


public:
    Ui::ProductGuiWidget *ui;
    Product *pro;
    QPushButton *Btn_Name;

};

#endif // PRODUCTGUIWIDGET_H
