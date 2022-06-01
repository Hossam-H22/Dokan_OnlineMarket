#ifndef CATEGORYGUIWIDGET_H
#define CATEGORYGUIWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <iostream>

using namespace std;
namespace Ui {
class CategoryGuiWidget;
}


class CategoryGuiWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CategoryGuiWidget(string name, string PhotoPath, QWidget *parent = nullptr);
    ~CategoryGuiWidget();

public:
    Ui::CategoryGuiWidget *ui;
    QPushButton *Btn_Name;
};

#endif // CATEGORYGUIWIDGET_H
