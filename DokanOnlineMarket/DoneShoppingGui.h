#ifndef DONESHOPPINGGUI_H
#define DONESHOPPINGGUI_H

#include <QDialog>
#include <iostream>
using namespace std;

namespace Ui {
class DoneShoppingGui;
}

class DoneShoppingGui : public QDialog
{
    Q_OBJECT

public:
    explicit DoneShoppingGui(string date, string address, float Price, QWidget *parent = nullptr);
    ~DoneShoppingGui();

private:
    Ui::DoneShoppingGui *ui;
};

#endif // DONESHOPPINGGUI_H
