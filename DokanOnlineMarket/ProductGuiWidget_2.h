#ifndef PRODUCTGUIWIDGET_2_H
#define PRODUCTGUIWIDGET_2_H

#include <QWidget>
#include <QPushButton>
#include "Product.h"


namespace Ui {
class ProductGuiWidget_2;
}

class ProductGuiWidget_2 : public QWidget
{
    Q_OBJECT

public:
    explicit ProductGuiWidget_2(Product *p, string path, string container, string color,QWidget *parent = nullptr);
    ~ProductGuiWidget_2();

public:
    Ui::ProductGuiWidget_2 *ui;
    QPushButton *Btn_name, *Btn_action, *Btn_action2;
};

#endif // PRODUCTGUIWIDGET_2_H
