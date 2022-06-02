#ifndef USERGUIWIDGET_H
#define USERGUIWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "Seller.h"
#include "Customer.h"

namespace Ui {
class UserGuiWidget;
}

class UserGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserGuiWidget(Seller *s=nullptr, Customer *c=nullptr, QWidget *parent = nullptr);
    ~UserGuiWidget();

public:
    Ui::UserGuiWidget *ui;
    QPushButton *Btn_Remove;
};

#endif // USERGUIWIDGET_H
