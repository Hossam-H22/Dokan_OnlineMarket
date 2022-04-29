#ifndef HOMEGUI_H
#define HOMEGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeGui; }
QT_END_NAMESPACE

class HomeGui : public QMainWindow
{
    Q_OBJECT

public:
    HomeGui(QWidget *parent = nullptr);
    ~HomeGui();

private slots:
    void on_pushButton_clicked();

    void on_btn1_bar1_3_clicked();

    void on_btn2_bar1_3_clicked();

    void on_btn_logout_clicked();

    void on_btn_back_clicked();

    void on_btn_fav_clicked();

    void on_btn_Cart_clicked();

    void on_btn_Home_clicked();

private:
    void GoToHome();

private:
    Ui::HomeGui *ui;
};
#endif // HOMEGUI_H
