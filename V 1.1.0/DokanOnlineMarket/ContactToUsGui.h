#ifndef CONTACTTOUSGUI_H
#define CONTACTTOUSGUI_H

#include <QDialog>
#include "Controller.h"

namespace Ui {
class ContactToUsGui;
}

class ContactToUsGui : public QDialog
{
    Q_OBJECT

public:
    explicit ContactToUsGui(Controller *users, QWidget *parent = nullptr);
    ~ContactToUsGui();

private slots:
    void on_btn_close_clicked();

private:
    Ui::ContactToUsGui *ui;
    Controller *users;
};

#endif // CONTACTTOUSGUI_H
