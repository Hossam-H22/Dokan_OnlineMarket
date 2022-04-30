#include "HomeGui.h"
#include "./ui_HomeGui.h"

HomeGui::HomeGui(Controller *users, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeGui)
{
    ui->setupUi(this);
    this->users = users;
    ui->stackedWidget->setCurrentIndex(3);
    connect(ui->btn_start_0, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_1, &QPushButton::clicked, this, &HomeGui::GoToHome);
    connect(ui->btn_back_2, &QPushButton::clicked, this, &HomeGui::GoToHome);

    int x=0;
    for (int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<6 ; j++)
        {
            if (x<14)
            {
                wd = new ProductGuiWidget(users->data->CategoryName[x], ":/img/assets/moon.png");
                x++;
                ui->gridLayout1->addWidget(wd, i, j);
            }

        }

    }

}

HomeGui::~HomeGui()
{
    delete ui;
}

void HomeGui::GoToHome()
{
    ui->stackedWidget->setCurrentIndex(3);
    users->c = nullptr;
    users->s = nullptr;
    ui->btn2_bar1_login_3->setText("Log in");
    ui->btn1_bar1_signUp_3->setText("Sign up");
}

void HomeGui::on_btn1_bar1_signUp_3_clicked()
{
    if (ui->btn1_bar1_signUp_3->text() == "Sign up")
    {
        ui->stackedWidget->setCurrentIndex(2);
        users->c = nullptr;
        users->s = nullptr;
    }
    else
        ui->stackedWidget->setCurrentIndex(0); // Customer Profile ------->>>> put page index
}

void HomeGui::on_btn2_bar1_login_3_clicked()
{
    users->c = nullptr;
    users->s = nullptr;
    ui->stackedWidget->setCurrentIndex(1);
}

void HomeGui::on_btn_login_1_clicked()
{
    string email, password;
    email = ui->lineEdit_username_1->text().toStdString();
    password = ui->lineEdit_password_1->text().toStdString();
    users->LogCustomer(email, password);
    if (users->c == nullptr || users->c->ID == 0)
    {
        QMessageBox::warning(this, "Attention please !", "Invalid email or password  !");
    }
    else
    {
        ui->btn2_bar1_login_3->setText("Log out");
        ui->btn1_bar1_signUp_3->setText(users->c->FirstName.c_str());
        ui->lineEdit_username_1->setText("");
        ui->lineEdit_password_1->setText("");
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void HomeGui::on_btn_sign_2_clicked()
{

}

