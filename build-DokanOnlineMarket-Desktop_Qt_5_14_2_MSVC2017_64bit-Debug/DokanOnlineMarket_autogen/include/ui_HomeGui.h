/********************************************************************************
** Form generated from reading UI file 'HomeGui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEGUI_H
#define UI_HOMEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeGui
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pg_0_Start;
    QLabel *lb_logo_0;
    QPushButton *btn_start_0;
    QWidget *pg_1_Login;
    QPushButton *btn_login_1;
    QLabel *lb_logo_1;
    QPushButton *btn_back_1;
    QLineEdit *lineEdit_username_1;
    QLineEdit *lineEdit_password_1;
    QLabel *lb_welcome_1;
    QWidget *pg_2_register;
    QLineEdit *lineEdit_password_2;
    QPushButton *btn_back_2;
    QLabel *lb_welcome_2;
    QPushButton *btn_login_2;
    QLabel *lb_logo_2;
    QLineEdit *lineEdit_username_2;
    QLineEdit *lineEdit_LastName_2;
    QLineEdit *lineEdit_FisrtName_2;
    QRadioButton *radioButton_mail_2;
    QRadioButton *radioButton_femail_2;
    QLineEdit *lineEdit_phone_2;
    QWidget *pg_3_Home;
    QFrame *frm1_mainBar_3;
    QLabel *lb_logo_3;
    QPushButton *btn1_bar1_3;
    QPushButton *btn2_bar1_3;
    QFrame *frm2_secondBar_3;
    QPushButton *btn1_bar2_3;
    QPushButton *btn1_bar2_4;
    QPushButton *btn1_bar2_5;
    QPushButton *btn1_bar2_6;
    QFrame *frm3_footBar_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lb1_bar3_3;
    QPushButton *btn1_ContactUs_bar3_3;
    QPushButton *btn2_reportProduct_bar3_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb2_bar3_3;
    QLabel *lb3_bar3_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb4_bar3_3;
    QPushButton *btn3_EnterSeller_bar3_3;
    QPushButton *pushButton;
    QWidget *pg_4_Cust;
    QFrame *Hor_line;
    QPushButton *btn_massage;
    QPushButton *btn_logout;
    QLabel *lb_logo;
    QLineEdit *linEd_searchbar;
    QPushButton *btn_back;
    QPushButton *btn_Home;
    QPushButton *btn_fav;
    QGroupBox *GB_profile;
    QToolButton *TB_profilePIC;
    QLabel *lb_Username;
    QLabel *lb_phone;
    QLabel *lb_email;
    QPushButton *btn_edit;
    QStackedWidget *stackedWidget_2;
    QWidget *pg_Cart;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QFrame *frame;
    QLabel *lb_whoffer;
    QLabel *lb_redprice;
    QPushButton *btn_clothes1;
    QLabel *lb_whcloth;
    QPushButton *btn_clothes2;
    QLabel *lb_reddoffer;
    QLabel *lb_whprice;
    QLabel *lb_interst;
    QLabel *lb_redcloth;
    QLabel *lb_whoffer_2;
    QLabel *lb_redprice_2;
    QPushButton *btn_clothes1_2;
    QLabel *lb_whcloth_2;
    QPushButton *btn_clothes2_2;
    QLabel *lb_reddoffer_2;
    QLabel *lb_whprice_2;
    QLabel *lb_redcloth_2;
    QLabel *label;
    QLabel *label_4;
    QWidget *pg_Fav;
    QLabel *lb_fav;
    QWidget *pg_Home;
    QLabel *lb_interests;
    QPushButton *btn_clothes;
    QPushButton *btn_shoes;
    QPushButton *btn_games;
    QLabel *lb_clothes;
    QLabel *lb_shoes;
    QLabel *lb_games;
    QLabel *lb_Address;
    QLabel *lb_address;
    QPushButton *btn_Cart;
    QWidget *pg_5_Cart;

    void setupUi(QMainWindow *HomeGui)
    {
        if (HomeGui->objectName().isEmpty())
            HomeGui->setObjectName(QString::fromUtf8("HomeGui"));
        HomeGui->resize(1270, 800);
        HomeGui->setMinimumSize(QSize(1270, 800));
        HomeGui->setMaximumSize(QSize(1270, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../assist/icons8-small-business-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        HomeGui->setWindowIcon(icon);
        centralwidget = new QWidget(HomeGui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setPointSize(12);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 113, 153);"));
        pg_0_Start = new QWidget();
        pg_0_Start->setObjectName(QString::fromUtf8("pg_0_Start"));
        pg_0_Start->setStyleSheet(QString::fromUtf8("*{\n"
"background: #2880AE;\n"
"}"));
        lb_logo_0 = new QLabel(pg_0_Start);
        lb_logo_0->setObjectName(QString::fromUtf8("lb_logo_0"));
        lb_logo_0->setGeometry(QRect(270, 210, 771, 321));
        lb_logo_0->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo_0->setScaledContents(true);
        btn_start_0 = new QPushButton(pg_0_Start);
        btn_start_0->setObjectName(QString::fromUtf8("btn_start_0"));
        btn_start_0->setGeometry(QRect(510, 510, 261, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        btn_start_0->setFont(font1);
        btn_start_0->setCursor(QCursor(Qt::PointingHandCursor));
        btn_start_0->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        stackedWidget->addWidget(pg_0_Start);
        pg_1_Login = new QWidget();
        pg_1_Login->setObjectName(QString::fromUtf8("pg_1_Login"));
        pg_1_Login->setStyleSheet(QString::fromUtf8("*{\n"
"background: #2880AE;\n"
"}"));
        btn_login_1 = new QPushButton(pg_1_Login);
        btn_login_1->setObjectName(QString::fromUtf8("btn_login_1"));
        btn_login_1->setGeometry(QRect(540, 555, 210, 40));
        btn_login_1->setFont(font1);
        btn_login_1->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login_1->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 17px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        lb_logo_1 = new QLabel(pg_1_Login);
        lb_logo_1->setObjectName(QString::fromUtf8("lb_logo_1"));
        lb_logo_1->setGeometry(QRect(360, 60, 591, 241));
        lb_logo_1->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo_1->setScaledContents(true);
        btn_back_1 = new QPushButton(pg_1_Login);
        btn_back_1->setObjectName(QString::fromUtf8("btn_back_1"));
        btn_back_1->setGeometry(QRect(540, 610, 210, 40));
        btn_back_1->setFont(font1);
        btn_back_1->setCursor(QCursor(Qt::PointingHandCursor));
        btn_back_1->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 17px;\n"
"color: #E3BA5A;\n"
"letter-spacing: 1px;\n"
"border: 1px solid #E3BA5A;\n"
"}\n"
"*:hover {\n"
"color: #dead3b;\n"
"border: 1px solid #dead3b;\n"
"}"));
        lineEdit_username_1 = new QLineEdit(pg_1_Login);
        lineEdit_username_1->setObjectName(QString::fromUtf8("lineEdit_username_1"));
        lineEdit_username_1->setGeometry(QRect(360, 399, 580, 55));
        QFont font2;
        font2.setPointSize(14);
        lineEdit_username_1->setFont(font2);
        lineEdit_username_1->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"background-color: #ffffff;\n"
"padding: 0 0 0 30px;\n"
"}\n"
""));
        lineEdit_username_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_username_1->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_username_1->setClearButtonEnabled(true);
        lineEdit_password_1 = new QLineEdit(pg_1_Login);
        lineEdit_password_1->setObjectName(QString::fromUtf8("lineEdit_password_1"));
        lineEdit_password_1->setGeometry(QRect(360, 470, 580, 55));
        lineEdit_password_1->setFont(font2);
        lineEdit_password_1->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"border: 2px solid #099ef2;\n"
"padding: 0 0 0 30px;\n"
"}"));
        lineEdit_password_1->setEchoMode(QLineEdit::Password);
        lineEdit_password_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_password_1->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_password_1->setClearButtonEnabled(true);
        lb_welcome_1 = new QLabel(pg_1_Login);
        lb_welcome_1->setObjectName(QString::fromUtf8("lb_welcome_1"));
        lb_welcome_1->setGeometry(QRect(560, 330, 171, 51));
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(false);
        lb_welcome_1->setFont(font3);
        lb_welcome_1->setStyleSheet(QString::fromUtf8("*{\n"
"color: #E3BA5A;\n"
"letter-spacing: 1px;\n"
"}"));
        lb_welcome_1->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(pg_1_Login);
        lb_logo_1->raise();
        btn_login_1->raise();
        btn_back_1->raise();
        lineEdit_username_1->raise();
        lineEdit_password_1->raise();
        lb_welcome_1->raise();
        pg_2_register = new QWidget();
        pg_2_register->setObjectName(QString::fromUtf8("pg_2_register"));
        pg_2_register->setStyleSheet(QString::fromUtf8("*{\n"
"background: #2880AE;\n"
"}"));
        lineEdit_password_2 = new QLineEdit(pg_2_register);
        lineEdit_password_2->setObjectName(QString::fromUtf8("lineEdit_password_2"));
        lineEdit_password_2->setGeometry(QRect(360, 500, 500, 45));
        lineEdit_password_2->setFont(font2);
        lineEdit_password_2->setMouseTracking(true);
        lineEdit_password_2->setAcceptDrops(true);
        lineEdit_password_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"border: 2px solid #099ef2;\n"
"padding: 0 0 0 30px;\n"
"}"));
        lineEdit_password_2->setFrame(true);
        lineEdit_password_2->setEchoMode(QLineEdit::Password);
        lineEdit_password_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_password_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_password_2->setClearButtonEnabled(true);
        btn_back_2 = new QPushButton(pg_2_register);
        btn_back_2->setObjectName(QString::fromUtf8("btn_back_2"));
        btn_back_2->setGeometry(QRect(380, 700, 210, 40));
        btn_back_2->setFont(font1);
        btn_back_2->setCursor(QCursor(Qt::PointingHandCursor));
        btn_back_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 17px;\n"
"color: #E3BA5A;\n"
"letter-spacing: 1px;\n"
"border: 1px solid #E3BA5A;\n"
"}\n"
"*:hover {\n"
"color: #dead3b;\n"
"border: 1px solid #dead3b;\n"
"}"));
        lb_welcome_2 = new QLabel(pg_2_register);
        lb_welcome_2->setObjectName(QString::fromUtf8("lb_welcome_2"));
        lb_welcome_2->setGeometry(QRect(520, 230, 171, 51));
        lb_welcome_2->setFont(font3);
        lb_welcome_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #E3BA5A;\n"
"letter-spacing: 1px;\n"
"}"));
        lb_welcome_2->setAlignment(Qt::AlignCenter);
        btn_login_2 = new QPushButton(pg_2_register);
        btn_login_2->setObjectName(QString::fromUtf8("btn_login_2"));
        btn_login_2->setGeometry(QRect(600, 700, 210, 40));
        btn_login_2->setFont(font1);
        btn_login_2->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 17px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        lb_logo_2 = new QLabel(pg_2_register);
        lb_logo_2->setObjectName(QString::fromUtf8("lb_logo_2"));
        lb_logo_2->setGeometry(QRect(360, 30, 501, 181));
        lb_logo_2->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo_2->setScaledContents(true);
        lineEdit_username_2 = new QLineEdit(pg_2_register);
        lineEdit_username_2->setObjectName(QString::fromUtf8("lineEdit_username_2"));
        lineEdit_username_2->setGeometry(QRect(360, 430, 500, 45));
        lineEdit_username_2->setFont(font2);
        lineEdit_username_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"background-color: #ffffff;\n"
"padding: 0 0 0 30px;\n"
"}\n"
""));
        lineEdit_username_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_username_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_username_2->setClearButtonEnabled(true);
        lineEdit_LastName_2 = new QLineEdit(pg_2_register);
        lineEdit_LastName_2->setObjectName(QString::fromUtf8("lineEdit_LastName_2"));
        lineEdit_LastName_2->setGeometry(QRect(360, 360, 500, 45));
        lineEdit_LastName_2->setFont(font2);
        lineEdit_LastName_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"background-color: #ffffff;\n"
"padding: 0 0 0 30px;\n"
"}\n"
""));
        lineEdit_LastName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_LastName_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_LastName_2->setClearButtonEnabled(true);
        lineEdit_FisrtName_2 = new QLineEdit(pg_2_register);
        lineEdit_FisrtName_2->setObjectName(QString::fromUtf8("lineEdit_FisrtName_2"));
        lineEdit_FisrtName_2->setGeometry(QRect(360, 290, 500, 45));
        lineEdit_FisrtName_2->setFont(font2);
        lineEdit_FisrtName_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"background-color: #ffffff;\n"
"padding: 0 0 0 30px;\n"
"}\n"
""));
        lineEdit_FisrtName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_FisrtName_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_FisrtName_2->setClearButtonEnabled(true);
        radioButton_mail_2 = new QRadioButton(pg_2_register);
        radioButton_mail_2->setObjectName(QString::fromUtf8("radioButton_mail_2"));
        radioButton_mail_2->setGeometry(QRect(380, 565, 89, 21));
        radioButton_mail_2->setFont(font2);
        radioButton_mail_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #424d57\n"
"}"));
        radioButton_femail_2 = new QRadioButton(pg_2_register);
        radioButton_femail_2->setObjectName(QString::fromUtf8("radioButton_femail_2"));
        radioButton_femail_2->setGeometry(QRect(380, 596, 89, 21));
        radioButton_femail_2->setFont(font2);
        radioButton_femail_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #424d57\n"
"}"));
        lineEdit_phone_2 = new QLineEdit(pg_2_register);
        lineEdit_phone_2->setObjectName(QString::fromUtf8("lineEdit_phone_2"));
        lineEdit_phone_2->setGeometry(QRect(490, 570, 371, 45));
        lineEdit_phone_2->setFont(font2);
        lineEdit_phone_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 20px;\n"
"background-color: #ffffff;\n"
"padding: 0 0 0 30px;\n"
"}\n"
""));
        lineEdit_phone_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_phone_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_phone_2->setClearButtonEnabled(true);
        stackedWidget->addWidget(pg_2_register);
        pg_3_Home = new QWidget();
        pg_3_Home->setObjectName(QString::fromUtf8("pg_3_Home"));
        pg_3_Home->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #e6e6e6;\n"
"}"));
        frm1_mainBar_3 = new QFrame(pg_3_Home);
        frm1_mainBar_3->setObjectName(QString::fromUtf8("frm1_mainBar_3"));
        frm1_mainBar_3->setGeometry(QRect(9, 0, 1251, 71));
        frm1_mainBar_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #2880AE;\n"
"border-radius: 25px;\n"
"}"));
        frm1_mainBar_3->setFrameShape(QFrame::StyledPanel);
        frm1_mainBar_3->setFrameShadow(QFrame::Raised);
        lb_logo_3 = new QLabel(frm1_mainBar_3);
        lb_logo_3->setObjectName(QString::fromUtf8("lb_logo_3"));
        lb_logo_3->setGeometry(QRect(30, 1, 130, 61));
        lb_logo_3->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo_3->setScaledContents(true);
        btn1_bar1_3 = new QPushButton(frm1_mainBar_3);
        btn1_bar1_3->setObjectName(QString::fromUtf8("btn1_bar1_3"));
        btn1_bar1_3->setGeometry(QRect(1130, 10, 100, 35));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(false);
        btn1_bar1_3->setFont(font4);
        btn1_bar1_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar1_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn2_bar1_3 = new QPushButton(frm1_mainBar_3);
        btn2_bar1_3->setObjectName(QString::fromUtf8("btn2_bar1_3"));
        btn2_bar1_3->setGeometry(QRect(1020, 10, 81, 35));
        btn2_bar1_3->setFont(font4);
        btn2_bar1_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn2_bar1_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        frm2_secondBar_3 = new QFrame(pg_3_Home);
        frm2_secondBar_3->setObjectName(QString::fromUtf8("frm2_secondBar_3"));
        frm2_secondBar_3->setGeometry(QRect(40, 30, 1181, 81));
        frm2_secondBar_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #E3BA5A;\n"
"border-radius: 30px;\n"
"}"));
        frm2_secondBar_3->setFrameShape(QFrame::StyledPanel);
        frm2_secondBar_3->setFrameShadow(QFrame::Raised);
        btn1_bar2_3 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_3->setObjectName(QString::fromUtf8("btn1_bar2_3"));
        btn1_bar2_3->setGeometry(QRect(40, 48, 141, 24));
        btn1_bar2_3->setFont(font2);
        btn1_bar2_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar2_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn1_bar2_3->setAutoRepeat(false);
        btn1_bar2_3->setAutoDefault(false);
        btn1_bar2_3->setFlat(false);
        btn1_bar2_4 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_4->setObjectName(QString::fromUtf8("btn1_bar2_4"));
        btn1_bar2_4->setGeometry(QRect(203, 48, 91, 24));
        btn1_bar2_4->setFont(font2);
        btn1_bar2_4->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar2_4->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn1_bar2_4->setAutoRepeat(false);
        btn1_bar2_4->setAutoDefault(false);
        btn1_bar2_4->setFlat(false);
        btn1_bar2_5 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_5->setObjectName(QString::fromUtf8("btn1_bar2_5"));
        btn1_bar2_5->setGeometry(QRect(321, 48, 91, 24));
        btn1_bar2_5->setFont(font2);
        btn1_bar2_5->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar2_5->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn1_bar2_5->setAutoRepeat(false);
        btn1_bar2_5->setAutoDefault(false);
        btn1_bar2_5->setFlat(false);
        btn1_bar2_6 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_6->setObjectName(QString::fromUtf8("btn1_bar2_6"));
        btn1_bar2_6->setGeometry(QRect(436, 48, 181, 24));
        btn1_bar2_6->setFont(font2);
        btn1_bar2_6->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar2_6->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn1_bar2_6->setAutoRepeat(false);
        btn1_bar2_6->setAutoDefault(false);
        btn1_bar2_6->setFlat(false);
        frm3_footBar_3 = new QFrame(pg_3_Home);
        frm3_footBar_3->setObjectName(QString::fromUtf8("frm3_footBar_3"));
        frm3_footBar_3->setGeometry(QRect(0, 727, 1270, 121));
        frm3_footBar_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #d4d4d4;\n"
"border-radius: 60px;\n"
"letter-spacing: 0.5px;\n"
"}"));
        frm3_footBar_3->setFrameShape(QFrame::StyledPanel);
        frm3_footBar_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frm3_footBar_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 1181, 86));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lb1_bar3_3 = new QLabel(layoutWidget);
        lb1_bar3_3->setObjectName(QString::fromUtf8("lb1_bar3_3"));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        lb1_bar3_3->setFont(font5);
        lb1_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb1_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lb1_bar3_3);

        btn1_ContactUs_bar3_3 = new QPushButton(layoutWidget);
        btn1_ContactUs_bar3_3->setObjectName(QString::fromUtf8("btn1_ContactUs_bar3_3"));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(false);
        btn1_ContactUs_bar3_3->setFont(font6);
        btn1_ContactUs_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_ContactUs_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));

        verticalLayout->addWidget(btn1_ContactUs_bar3_3);

        btn2_reportProduct_bar3_3 = new QPushButton(layoutWidget);
        btn2_reportProduct_bar3_3->setObjectName(QString::fromUtf8("btn2_reportProduct_bar3_3"));
        btn2_reportProduct_bar3_3->setFont(font6);
        btn2_reportProduct_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn2_reportProduct_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 5px 0;\n"
"}"));

        verticalLayout->addWidget(btn2_reportProduct_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb2_bar3_3 = new QLabel(layoutWidget);
        lb2_bar3_3->setObjectName(QString::fromUtf8("lb2_bar3_3"));
        lb2_bar3_3->setFont(font5);
        lb2_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb2_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb2_bar3_3);

        lb3_bar3_3 = new QLabel(layoutWidget);
        lb3_bar3_3->setObjectName(QString::fromUtf8("lb3_bar3_3"));
        lb3_bar3_3->setFont(font6);
        lb3_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 5px 0;\n"
"}"));
        lb3_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb3_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lb4_bar3_3 = new QLabel(layoutWidget);
        lb4_bar3_3->setObjectName(QString::fromUtf8("lb4_bar3_3"));
        lb4_bar3_3->setFont(font5);
        lb4_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb4_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lb4_bar3_3);

        btn3_EnterSeller_bar3_3 = new QPushButton(layoutWidget);
        btn3_EnterSeller_bar3_3->setObjectName(QString::fromUtf8("btn3_EnterSeller_bar3_3"));
        btn3_EnterSeller_bar3_3->setFont(font6);
        btn3_EnterSeller_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn3_EnterSeller_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 20px 0;\n"
"}"));

        verticalLayout_3->addWidget(btn3_EnterSeller_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        pushButton = new QPushButton(pg_3_Home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 210, 251, 29));
        stackedWidget->addWidget(pg_3_Home);
        frm2_secondBar_3->raise();
        frm1_mainBar_3->raise();
        frm3_footBar_3->raise();
        pushButton->raise();
        pg_4_Cust = new QWidget();
        pg_4_Cust->setObjectName(QString::fromUtf8("pg_4_Cust"));
        Hor_line = new QFrame(pg_4_Cust);
        Hor_line->setObjectName(QString::fromUtf8("Hor_line"));
        Hor_line->setGeometry(QRect(20, 110, 1201, 20));
        Hor_line->setStyleSheet(QString::fromUtf8(""));
        Hor_line->setFrameShape(QFrame::HLine);
        Hor_line->setFrameShadow(QFrame::Sunken);
        btn_massage = new QPushButton(pg_4_Cust);
        btn_massage->setObjectName(QString::fromUtf8("btn_massage"));
        btn_massage->setGeometry(QRect(900, 50, 171, 51));
        btn_massage->setFont(font);
        btn_massage->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        btn_logout = new QPushButton(pg_4_Cust);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        btn_logout->setGeometry(QRect(1080, 50, 161, 51));
        btn_logout->setFont(font);
        btn_logout->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        lb_logo = new QLabel(pg_4_Cust);
        lb_logo->setObjectName(QString::fromUtf8("lb_logo"));
        lb_logo->setGeometry(QRect(20, 40, 171, 61));
        lb_logo->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo->setScaledContents(true);
        linEd_searchbar = new QLineEdit(pg_4_Cust);
        linEd_searchbar->setObjectName(QString::fromUtf8("linEd_searchbar"));
        linEd_searchbar->setGeometry(QRect(220, 40, 631, 61));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setUnderline(false);
        font7.setStrikeOut(false);
        font7.setKerning(true);
        linEd_searchbar->setFont(font7);
        linEd_searchbar->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: rgb(214, 229, 237);\n"
"border-radius:25px;\n"
"padding-left : 40px;\n"
"}"));
        btn_back = new QPushButton(pg_4_Cust);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(1010, 720, 231, 51));
        btn_back->setFont(font);
        btn_back->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        btn_Home = new QPushButton(pg_4_Cust);
        btn_Home->setObjectName(QString::fromUtf8("btn_Home"));
        btn_Home->setGeometry(QRect(440, 130, 171, 51));
        QFont font8;
        font8.setPointSize(11);
        btn_Home->setFont(font8);
        btn_Home->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        btn_fav = new QPushButton(pg_4_Cust);
        btn_fav->setObjectName(QString::fromUtf8("btn_fav"));
        btn_fav->setGeometry(QRect(1080, 130, 161, 51));
        btn_fav->setFont(font8);
        btn_fav->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        GB_profile = new QGroupBox(pg_4_Cust);
        GB_profile->setObjectName(QString::fromUtf8("GB_profile"));
        GB_profile->setGeometry(QRect(10, 140, 381, 601));
        GB_profile->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"background-color: rgb(24, 120, 170);\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: #ffffff;\n"
"}"));
        TB_profilePIC = new QToolButton(GB_profile);
        TB_profilePIC->setObjectName(QString::fromUtf8("TB_profilePIC"));
        TB_profilePIC->setGeometry(QRect(60, 30, 261, 241));
        TB_profilePIC->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius:100px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../assist/profile.png"), QSize(), QIcon::Normal, QIcon::Off);
        TB_profilePIC->setIcon(icon1);
        TB_profilePIC->setIconSize(QSize(200, 200));
        lb_Username = new QLabel(GB_profile);
        lb_Username->setObjectName(QString::fromUtf8("lb_Username"));
        lb_Username->setGeometry(QRect(30, 320, 321, 41));
        QFont font9;
        font9.setPointSize(20);
        lb_Username->setFont(font9);
        lb_Username->setStyleSheet(QString::fromUtf8("color: rgb(229, 229, 229);"));
        lb_Username->setAlignment(Qt::AlignCenter);
        lb_phone = new QLabel(GB_profile);
        lb_phone->setObjectName(QString::fromUtf8("lb_phone"));
        lb_phone->setGeometry(QRect(70, 390, 231, 31));
        QFont font10;
        font10.setPointSize(16);
        lb_phone->setFont(font10);
        lb_phone->setStyleSheet(QString::fromUtf8("color: rgb(232, 232, 232);"));
        lb_phone->setAlignment(Qt::AlignCenter);
        lb_email = new QLabel(GB_profile);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(60, 460, 291, 31));
        QFont font11;
        font11.setPointSize(13);
        lb_email->setFont(font11);
        lb_email->setStyleSheet(QString::fromUtf8("color: rgb(232, 232, 232);"));
        lb_email->setAlignment(Qt::AlignCenter);
        btn_edit = new QPushButton(pg_4_Cust);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setGeometry(QRect(100, 710, 191, 51));
        btn_edit->setFont(font);
        btn_edit->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        stackedWidget_2 = new QStackedWidget(pg_4_Cust);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(400, 200, 861, 511));
        stackedWidget_2->setFont(font11);
        stackedWidget_2->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        pg_Cart = new QWidget();
        pg_Cart->setObjectName(QString::fromUtf8("pg_Cart"));
        scrollArea = new QScrollArea(pg_Cart);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(19, 16, 821, 481));
        scrollArea->setStyleSheet(QString::fromUtf8("QSxrollBar:vertical {\n"
" border:none; \n"
" backgroud-color : rgb(60,60,90);\n"
" width : 14px;\n"
"margin : 15px 0 15 px 0;\n"
"border-radius : 0px;\n"
"}\n"
"\n"
"QscrollBar::handle:vertical{\n"
"  background-color : rbg(80,80,122);\n"
"  min-height : 30px;\n"
" \n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, -742, 1200, 1200));
        scrollAreaWidgetContents_3->setMinimumSize(QSize(1200, 1200));
        scrollAreaWidgetContents_3->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(scrollAreaWidgetContents_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-40, -20, 821, 1211));
        frame->setMinimumSize(QSize(120, 120));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_whoffer = new QLabel(frame);
        lb_whoffer->setObjectName(QString::fromUtf8("lb_whoffer"));
        lb_whoffer->setGeometry(QRect(390, 140, 121, 20));
        QFont font12;
        font12.setPointSize(9);
        lb_whoffer->setFont(font12);
        lb_whoffer->setStyleSheet(QString::fromUtf8("color: #E3BA5A;\n"
""));
        lb_redprice = new QLabel(frame);
        lb_redprice->setObjectName(QString::fromUtf8("lb_redprice"));
        lb_redprice->setGeometry(QRect(220, 360, 121, 20));
        lb_redprice->setFont(font);
        lb_redprice->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_clothes1 = new QPushButton(frame);
        btn_clothes1->setObjectName(QString::fromUtf8("btn_clothes1"));
        btn_clothes1->setGeometry(QRect(50, 90, 141, 201));
        btn_clothes1->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../assist/polo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clothes1->setIcon(icon2);
        btn_clothes1->setIconSize(QSize(150, 200));
        lb_whcloth = new QLabel(frame);
        lb_whcloth->setObjectName(QString::fromUtf8("lb_whcloth"));
        lb_whcloth->setGeometry(QRect(230, 90, 531, 20));
        lb_whcloth->setFont(font);
        lb_whcloth->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_clothes2 = new QPushButton(frame);
        btn_clothes2->setObjectName(QString::fromUtf8("btn_clothes2"));
        btn_clothes2->setGeometry(QRect(50, 300, 141, 201));
        btn_clothes2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../assist/redPolo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clothes2->setIcon(icon3);
        btn_clothes2->setIconSize(QSize(150, 200));
        lb_reddoffer = new QLabel(frame);
        lb_reddoffer->setObjectName(QString::fromUtf8("lb_reddoffer"));
        lb_reddoffer->setGeometry(QRect(380, 360, 121, 20));
        lb_reddoffer->setFont(font12);
        lb_reddoffer->setStyleSheet(QString::fromUtf8("color: #E3BA5A;\n"
""));
        lb_whprice = new QLabel(frame);
        lb_whprice->setObjectName(QString::fromUtf8("lb_whprice"));
        lb_whprice->setGeometry(QRect(230, 140, 121, 20));
        lb_whprice->setFont(font);
        lb_whprice->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_interst = new QLabel(frame);
        lb_interst->setObjectName(QString::fromUtf8("lb_interst"));
        lb_interst->setGeometry(QRect(40, 20, 181, 51));
        lb_interst->setFont(font2);
        lb_interst->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        lb_redcloth = new QLabel(frame);
        lb_redcloth->setObjectName(QString::fromUtf8("lb_redcloth"));
        lb_redcloth->setGeometry(QRect(220, 310, 561, 20));
        lb_redcloth->setFont(font);
        lb_redcloth->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_whoffer_2 = new QLabel(frame);
        lb_whoffer_2->setObjectName(QString::fromUtf8("lb_whoffer_2"));
        lb_whoffer_2->setGeometry(QRect(390, 580, 121, 20));
        lb_whoffer_2->setFont(font12);
        lb_whoffer_2->setStyleSheet(QString::fromUtf8("color: #E3BA5A;\n"
""));
        lb_redprice_2 = new QLabel(frame);
        lb_redprice_2->setObjectName(QString::fromUtf8("lb_redprice_2"));
        lb_redprice_2->setGeometry(QRect(220, 800, 121, 20));
        lb_redprice_2->setFont(font);
        lb_redprice_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_clothes1_2 = new QPushButton(frame);
        btn_clothes1_2->setObjectName(QString::fromUtf8("btn_clothes1_2"));
        btn_clothes1_2->setGeometry(QRect(50, 530, 141, 201));
        btn_clothes1_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        btn_clothes1_2->setIcon(icon2);
        btn_clothes1_2->setIconSize(QSize(150, 200));
        lb_whcloth_2 = new QLabel(frame);
        lb_whcloth_2->setObjectName(QString::fromUtf8("lb_whcloth_2"));
        lb_whcloth_2->setGeometry(QRect(230, 530, 531, 20));
        lb_whcloth_2->setFont(font);
        lb_whcloth_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_clothes2_2 = new QPushButton(frame);
        btn_clothes2_2->setObjectName(QString::fromUtf8("btn_clothes2_2"));
        btn_clothes2_2->setGeometry(QRect(50, 740, 141, 201));
        btn_clothes2_2->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        btn_clothes2_2->setIcon(icon3);
        btn_clothes2_2->setIconSize(QSize(150, 200));
        lb_reddoffer_2 = new QLabel(frame);
        lb_reddoffer_2->setObjectName(QString::fromUtf8("lb_reddoffer_2"));
        lb_reddoffer_2->setGeometry(QRect(380, 800, 121, 20));
        lb_reddoffer_2->setFont(font12);
        lb_reddoffer_2->setStyleSheet(QString::fromUtf8("color: #E3BA5A;\n"
""));
        lb_whprice_2 = new QLabel(frame);
        lb_whprice_2->setObjectName(QString::fromUtf8("lb_whprice_2"));
        lb_whprice_2->setGeometry(QRect(230, 580, 121, 20));
        lb_whprice_2->setFont(font);
        lb_whprice_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_redcloth_2 = new QLabel(frame);
        lb_redcloth_2->setObjectName(QString::fromUtf8("lb_redcloth_2"));
        lb_redcloth_2->setGeometry(QRect(220, 750, 561, 20));
        lb_redcloth_2->setFont(font);
        lb_redcloth_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 1110, 181, 20));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(580, 1140, 181, 51));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius : 25px;"));
        label_4->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents_3);
        stackedWidget_2->addWidget(pg_Cart);
        pg_Fav = new QWidget();
        pg_Fav->setObjectName(QString::fromUtf8("pg_Fav"));
        lb_fav = new QLabel(pg_Fav);
        lb_fav->setObjectName(QString::fromUtf8("lb_fav"));
        lb_fav->setGeometry(QRect(20, 30, 191, 51));
        lb_fav->setFont(font2);
        lb_fav->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(pg_Fav);
        pg_Home = new QWidget();
        pg_Home->setObjectName(QString::fromUtf8("pg_Home"));
        lb_interests = new QLabel(pg_Home);
        lb_interests->setObjectName(QString::fromUtf8("lb_interests"));
        lb_interests->setGeometry(QRect(20, 20, 201, 51));
        QFont font13;
        font13.setPointSize(15);
        lb_interests->setFont(font13);
        lb_interests->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_interests->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btn_clothes = new QPushButton(pg_Home);
        btn_clothes->setObjectName(QString::fromUtf8("btn_clothes"));
        btn_clothes->setGeometry(QRect(40, 90, 141, 201));
        btn_clothes->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../assist/clothes.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clothes->setIcon(icon4);
        btn_clothes->setIconSize(QSize(170, 200));
        btn_shoes = new QPushButton(pg_Home);
        btn_shoes->setObjectName(QString::fromUtf8("btn_shoes"));
        btn_shoes->setGeometry(QRect(290, 90, 141, 201));
        btn_shoes->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../assist/shoes.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_shoes->setIcon(icon5);
        btn_shoes->setIconSize(QSize(150, 200));
        btn_games = new QPushButton(pg_Home);
        btn_games->setObjectName(QString::fromUtf8("btn_games"));
        btn_games->setGeometry(QRect(540, 90, 141, 201));
        btn_games->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../assist/game.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_games->setIcon(icon6);
        btn_games->setIconSize(QSize(150, 200));
        lb_clothes = new QLabel(pg_Home);
        lb_clothes->setObjectName(QString::fromUtf8("lb_clothes"));
        lb_clothes->setGeometry(QRect(60, 260, 101, 20));
        lb_clothes->setFont(font8);
        lb_clothes->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"\n"
""));
        lb_clothes->setAlignment(Qt::AlignCenter);
        lb_shoes = new QLabel(pg_Home);
        lb_shoes->setObjectName(QString::fromUtf8("lb_shoes"));
        lb_shoes->setGeometry(QRect(310, 260, 101, 20));
        lb_shoes->setFont(font8);
        lb_shoes->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"\n"
""));
        lb_shoes->setAlignment(Qt::AlignCenter);
        lb_games = new QLabel(pg_Home);
        lb_games->setObjectName(QString::fromUtf8("lb_games"));
        lb_games->setGeometry(QRect(560, 260, 101, 20));
        lb_games->setFont(font8);
        lb_games->setStyleSheet(QString::fromUtf8("*{\n"
"border-radius: 25px;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: #2e81aa;\n"
"color: #ffffff;\n"
"}\n"
"*:hover {\n"
"background-color: #6c9eb7;\n"
"}\n"
""));
        lb_games->setAlignment(Qt::AlignCenter);
        lb_Address = new QLabel(pg_Home);
        lb_Address->setObjectName(QString::fromUtf8("lb_Address"));
        lb_Address->setGeometry(QRect(30, 310, 201, 51));
        lb_Address->setFont(font13);
        lb_Address->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_Address->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_address = new QLabel(pg_Home);
        lb_address->setObjectName(QString::fromUtf8("lb_address"));
        lb_address->setGeometry(QRect(30, 410, 261, 31));
        lb_address->setFont(font11);
        lb_address->setStyleSheet(QString::fromUtf8("color: rgb(232, 232, 232);"));
        lb_address->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidget_2->addWidget(pg_Home);
        btn_Cart = new QPushButton(pg_4_Cust);
        btn_Cart->setObjectName(QString::fromUtf8("btn_Cart"));
        btn_Cart->setGeometry(QRect(790, 130, 171, 51));
        btn_Cart->setFont(font8);
        btn_Cart->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"border-radius: 25px;\n"
"background-color: #E3BA5A;\n"
"color: #ffffff;\n"
"letter-spacing: 1px;\n"
"}\n"
"*:hover {\n"
"background-color: #dead3b;\n"
"}"));
        stackedWidget->addWidget(pg_4_Cust);
        pg_5_Cart = new QWidget();
        pg_5_Cart->setObjectName(QString::fromUtf8("pg_5_Cart"));
        stackedWidget->addWidget(pg_5_Cart);

        horizontalLayout->addWidget(stackedWidget);

        HomeGui->setCentralWidget(centralwidget);

        retranslateUi(HomeGui);

        stackedWidget->setCurrentIndex(4);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HomeGui);
    } // setupUi

    void retranslateUi(QMainWindow *HomeGui)
    {
        HomeGui->setWindowTitle(QCoreApplication::translate("HomeGui", "Dokan Online Market", nullptr));
        lb_logo_0->setText(QString());
        btn_start_0->setText(QCoreApplication::translate("HomeGui", "Start your journey", nullptr));
        btn_login_1->setText(QCoreApplication::translate("HomeGui", "Log in", nullptr));
        lb_logo_1->setText(QString());
        btn_back_1->setText(QCoreApplication::translate("HomeGui", "back", nullptr));
        lineEdit_username_1->setPlaceholderText(QCoreApplication::translate("HomeGui", "Email", nullptr));
        lineEdit_password_1->setPlaceholderText(QCoreApplication::translate("HomeGui", "Password", nullptr));
        lb_welcome_1->setText(QCoreApplication::translate("HomeGui", "Welcome", nullptr));
        lineEdit_password_2->setPlaceholderText(QCoreApplication::translate("HomeGui", "Password", nullptr));
        btn_back_2->setText(QCoreApplication::translate("HomeGui", "back", nullptr));
        lb_welcome_2->setText(QCoreApplication::translate("HomeGui", "Welcome", nullptr));
        btn_login_2->setText(QCoreApplication::translate("HomeGui", "Sign up", nullptr));
        lb_logo_2->setText(QString());
        lineEdit_username_2->setPlaceholderText(QCoreApplication::translate("HomeGui", "Email", nullptr));
        lineEdit_LastName_2->setPlaceholderText(QCoreApplication::translate("HomeGui", "Last name", nullptr));
        lineEdit_FisrtName_2->setPlaceholderText(QCoreApplication::translate("HomeGui", "First name", nullptr));
        radioButton_mail_2->setText(QCoreApplication::translate("HomeGui", "Male", nullptr));
        radioButton_femail_2->setText(QCoreApplication::translate("HomeGui", "Female", nullptr));
        lineEdit_phone_2->setPlaceholderText(QCoreApplication::translate("HomeGui", "Phone number", nullptr));
        lb_logo_3->setText(QString());
        btn1_bar1_3->setText(QCoreApplication::translate("HomeGui", "Sign up", nullptr));
        btn2_bar1_3->setText(QCoreApplication::translate("HomeGui", "Log in", nullptr));
        btn1_bar2_3->setText(QCoreApplication::translate("HomeGui", "Free Shipping", nullptr));
        btn1_bar2_4->setText(QCoreApplication::translate("HomeGui", "Offers", nullptr));
        btn1_bar2_5->setText(QCoreApplication::translate("HomeGui", "popular", nullptr));
        btn1_bar2_6->setText(QCoreApplication::translate("HomeGui", "Dokan Ramadan", nullptr));
        lb1_bar3_3->setText(QCoreApplication::translate("HomeGui", "LET US HELP YOU", nullptr));
        btn1_ContactUs_bar3_3->setText(QCoreApplication::translate("HomeGui", "Contact us", nullptr));
        btn2_reportProduct_bar3_3->setText(QCoreApplication::translate("HomeGui", "Report a Product", nullptr));
        lb2_bar3_3->setText(QCoreApplication::translate("HomeGui", "ABOUT DOKAN EGYPT", nullptr));
        lb3_bar3_3->setText(QCoreApplication::translate("HomeGui", "Terms and Conditions \n"
" Privacy Policy", nullptr));
        lb4_bar3_3->setText(QCoreApplication::translate("HomeGui", "MAKE MONEY WITH DOKAN", nullptr));
        btn3_EnterSeller_bar3_3->setText(QCoreApplication::translate("HomeGui", "Sell on Dokan", nullptr));
        pushButton->setText(QCoreApplication::translate("HomeGui", "PushButton", nullptr));
        btn_massage->setText(QCoreApplication::translate("HomeGui", "massage", nullptr));
        btn_logout->setText(QCoreApplication::translate("HomeGui", "log out", nullptr));
        lb_logo->setText(QString());
        linEd_searchbar->setText(QString());
        linEd_searchbar->setPlaceholderText(QCoreApplication::translate("HomeGui", "Search", nullptr));
        btn_back->setText(QCoreApplication::translate("HomeGui", "Back", nullptr));
        btn_Home->setText(QCoreApplication::translate("HomeGui", "Home", nullptr));
        btn_fav->setText(QCoreApplication::translate("HomeGui", "favorite", nullptr));
        GB_profile->setTitle(QString());
#if QT_CONFIG(tooltip)
        TB_profilePIC->setToolTip(QCoreApplication::translate("HomeGui", "<html><head/><body><p>Omar Khaled </p><p>omarkhaled@gmail.com</p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        TB_profilePIC->setText(QCoreApplication::translate("HomeGui", "...", nullptr));
        lb_Username->setText(QCoreApplication::translate("HomeGui", "Youssef mohamed ", nullptr));
        lb_phone->setText(QCoreApplication::translate("HomeGui", "01106542931", nullptr));
        lb_email->setText(QCoreApplication::translate("HomeGui", "youssefmohamed@gmail.com", nullptr));
        btn_edit->setText(QCoreApplication::translate("HomeGui", "Edit profile", nullptr));
        lb_whoffer->setText(QCoreApplication::translate("HomeGui", "Offer up to 20%", nullptr));
        lb_redprice->setText(QCoreApplication::translate("HomeGui", "Price : 350", nullptr));
        btn_clothes1->setText(QString());
        lb_whcloth->setText(QCoreApplication::translate("HomeGui", "T-SHIRT AJUSTE COL ROND EN COTON LOGO PONY PLAYER", nullptr));
        btn_clothes2->setText(QString());
        lb_reddoffer->setText(QCoreApplication::translate("HomeGui", "Offer up to 20%", nullptr));
        lb_whprice->setText(QCoreApplication::translate("HomeGui", "Price : 300 ", nullptr));
        lb_interst->setText(QCoreApplication::translate("HomeGui", "Cart", nullptr));
        lb_redcloth->setText(QCoreApplication::translate("HomeGui", "Hosiery Plain Mens Half Sleeve T- Shirt, Size/Dimension: S.M.L.XL", nullptr));
        lb_whoffer_2->setText(QCoreApplication::translate("HomeGui", "Offer up to 20%", nullptr));
        lb_redprice_2->setText(QCoreApplication::translate("HomeGui", "Price : 350", nullptr));
        btn_clothes1_2->setText(QString());
        lb_whcloth_2->setText(QCoreApplication::translate("HomeGui", "T-SHIRT AJUSTE COL ROND EN COTON LOGO PONY PLAYER", nullptr));
        btn_clothes2_2->setText(QString());
        lb_reddoffer_2->setText(QCoreApplication::translate("HomeGui", "Offer up to 20%", nullptr));
        lb_whprice_2->setText(QCoreApplication::translate("HomeGui", "Price : 300 ", nullptr));
        lb_redcloth_2->setText(QCoreApplication::translate("HomeGui", "Hosiery Plain Mens Half Sleeve T- Shirt, Size/Dimension: S.M.L.XL", nullptr));
        label->setText(QCoreApplication::translate("HomeGui", "Total price", nullptr));
        label_4->setText(QString());
        lb_fav->setText(QCoreApplication::translate("HomeGui", "Favorites", nullptr));
        lb_interests->setText(QCoreApplication::translate("HomeGui", "Interest", nullptr));
        btn_clothes->setText(QString());
        btn_shoes->setText(QString());
        btn_games->setText(QString());
        lb_clothes->setText(QCoreApplication::translate("HomeGui", "Clothes", nullptr));
        lb_shoes->setText(QCoreApplication::translate("HomeGui", "Shoses", nullptr));
        lb_games->setText(QCoreApplication::translate("HomeGui", "Games", nullptr));
        lb_Address->setText(QCoreApplication::translate("HomeGui", "Address", nullptr));
        lb_address->setText(QCoreApplication::translate("HomeGui", "15 A mdian 2lma7kma", nullptr));
        btn_Cart->setText(QCoreApplication::translate("HomeGui", "Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeGui: public Ui_HomeGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEGUI_H
