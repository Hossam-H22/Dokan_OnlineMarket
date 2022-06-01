#include "CategoryGuiWidget.h"
#include "ui_CategoryGuiWidget.h"

CategoryGuiWidget::CategoryGuiWidget(string name, string PhotoPath, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CategoryGuiWidget)
{
    ui->setupUi(this);
    Btn_Name = ui->btn_frm1_nameCategory;
    QPixmap pix(PhotoPath.c_str());
    ui->lb_frm1_img->setPixmap(pix);
    Btn_Name->setText(name.c_str());
}

CategoryGuiWidget::~CategoryGuiWidget()
{
    delete ui;
}
