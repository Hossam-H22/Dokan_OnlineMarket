#include "HomeGui.h"
#include "./ui_HomeGui.h"

HomeGui::HomeGui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeGui)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->btn_start_0, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_1, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_2, &QPushButton::clicked, this, &HomeGui::GoToHome);
}

HomeGui::~HomeGui()
{
    delete ui;
}

void HomeGui::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void HomeGui::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void HomeGui::GoToHome()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void HomeGui::on_btn1_bar1_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void HomeGui::on_btn2_bar1_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

