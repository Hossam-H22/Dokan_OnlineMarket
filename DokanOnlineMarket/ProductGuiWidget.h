#ifndef PRODUCTGUIWIDGET_H
#define PRODUCTGUIWIDGET_H

#include <QWidget>
#include <iostream>
using namespace std;

namespace Ui {
class ProductGuiWidget;
}

class ProductGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductGuiWidget(string name, string pathphoto, QWidget *parent = nullptr);
    ~ProductGuiWidget();

private:
    Ui::ProductGuiWidget *ui;
};

#endif // PRODUCTGUIWIDGET_H
