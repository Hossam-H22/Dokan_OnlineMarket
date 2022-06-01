#include "TermsAndConditions.h"
#include "ui_TermsAndConditions.h"

TermsAndConditions::TermsAndConditions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TermsAndConditions)
{
    ui->setupUi(this);
}

TermsAndConditions::~TermsAndConditions()
{
    delete ui;
}


void TermsAndConditions::on_ok_clicked()
{
    this->close();
}
