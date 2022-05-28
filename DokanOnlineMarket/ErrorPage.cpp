#include "ErrorPage.h"
#include "ui_ErrorPage.h"

ErrorPage::ErrorPage(QWidget *parent) :
    QDialog(parent), ui(new Ui::ErrorPage)
{
    ui->setupUi(this);
}

ErrorPage::~ErrorPage()
{
    delete ui;
}
