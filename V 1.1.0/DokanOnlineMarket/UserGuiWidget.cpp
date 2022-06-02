#include "UserGuiWidget.h"
#include "ui_UserGuiWidget.h"

UserGuiWidget::UserGuiWidget(Seller *s, Customer *c, QWidget *parent) :
    QWidget(parent), ui(new Ui::UserGuiWidget)
{
    ui->setupUi(this);
    Btn_Remove = ui->btn_remove;
    if (c==nullptr)
    {
        ui->lb_name->setText((s->FirstName+" "+s->SecondName).c_str());
        ui->lb_phone->setText(s->Phone.c_str());
        ui->lb_gender->setText(s->Gender.c_str());
        ui->lb_mail->setText(s->Email.c_str());
        ui->lb_pass->setText(s->Password.c_str());
        ui->lb_address->setText(s->Address.c_str());
    }
    else
    {
        ui->lb_name->setText((c->FirstName+" "+c->SecondName).c_str());
        ui->lb_phone->setText(c->PhoneNumber.c_str());
        ui->lb_gender->setText(c->Gender.c_str());
        ui->lb_mail->setText(c->Email.c_str());
        ui->lb_pass->setText(c->Password.c_str());
        ui->lb_address->setText(c->Address.c_str());
    }
}

UserGuiWidget::~UserGuiWidget()
{
    delete ui;
}
