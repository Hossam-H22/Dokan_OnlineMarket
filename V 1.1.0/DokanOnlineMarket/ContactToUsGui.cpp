#include "ContactToUsGui.h"
#include "ui_ContactToUsGui.h"

ContactToUsGui::ContactToUsGui(Controller *users, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactToUsGui)
{
    ui->setupUi(this);
    this->users = users;
}

ContactToUsGui::~ContactToUsGui()
{
    delete ui;
}

/**
 * @brief ContactToUsGui::on_btn_close_clicked
 * take comment from user then configure it to save then save it then close then window
 */
void ContactToUsGui::on_btn_close_clicked()
{
    string com = ui->plainTextEdit->toPlainText().toStdString();
    replace(com.begin(), com.end(), '\n', '#');
    replace(com.begin(), com.end(), ',', '.');
    users->data->AdminComments.push_back(com);

    this->close();
}
