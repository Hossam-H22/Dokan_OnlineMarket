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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
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
    QWidget *widget;
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
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        btn_start_0->setFont(font);
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
        btn_login_1->setFont(font);
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
        btn_back_1->setFont(font);
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
        QFont font1;
        font1.setPointSize(14);
        lineEdit_username_1->setFont(font1);
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
        lineEdit_password_1->setFont(font1);
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
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        lb_welcome_1->setFont(font2);
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
        lineEdit_password_2->setFont(font1);
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
        btn_back_2->setFont(font);
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
        lb_welcome_2->setFont(font2);
        lb_welcome_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #E3BA5A;\n"
"letter-spacing: 1px;\n"
"}"));
        lb_welcome_2->setAlignment(Qt::AlignCenter);
        btn_login_2 = new QPushButton(pg_2_register);
        btn_login_2->setObjectName(QString::fromUtf8("btn_login_2"));
        btn_login_2->setGeometry(QRect(600, 700, 210, 40));
        btn_login_2->setFont(font);
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
        lineEdit_username_2->setFont(font1);
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
        lineEdit_LastName_2->setFont(font1);
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
        lineEdit_FisrtName_2->setFont(font1);
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
        radioButton_mail_2->setFont(font1);
        radioButton_mail_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #424d57\n"
"}"));
        radioButton_femail_2 = new QRadioButton(pg_2_register);
        radioButton_femail_2->setObjectName(QString::fromUtf8("radioButton_femail_2"));
        radioButton_femail_2->setGeometry(QRect(380, 596, 89, 21));
        radioButton_femail_2->setFont(font1);
        radioButton_femail_2->setStyleSheet(QString::fromUtf8("*{\n"
"color: #424d57\n"
"}"));
        lineEdit_phone_2 = new QLineEdit(pg_2_register);
        lineEdit_phone_2->setObjectName(QString::fromUtf8("lineEdit_phone_2"));
        lineEdit_phone_2->setGeometry(QRect(490, 570, 371, 45));
        lineEdit_phone_2->setFont(font1);
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
        frm1_mainBar_3->setGeometry(QRect(10, 0, 1250, 51));
        frm1_mainBar_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #2880AE;\n"
"border-radius: 25px;\n"
"}"));
        frm1_mainBar_3->setFrameShape(QFrame::StyledPanel);
        frm1_mainBar_3->setFrameShadow(QFrame::Raised);
        lb_logo_3 = new QLabel(frm1_mainBar_3);
        lb_logo_3->setObjectName(QString::fromUtf8("lb_logo_3"));
        lb_logo_3->setGeometry(QRect(30, 1, 130, 50));
        lb_logo_3->setPixmap(QPixmap(QString::fromUtf8("../assist/logo-crop.png")));
        lb_logo_3->setScaledContents(true);
        btn1_bar1_3 = new QPushButton(frm1_mainBar_3);
        btn1_bar1_3->setObjectName(QString::fromUtf8("btn1_bar1_3"));
        btn1_bar1_3->setGeometry(QRect(1130, 7, 100, 35));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        btn1_bar1_3->setFont(font3);
        btn1_bar1_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar1_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn2_bar1_3 = new QPushButton(frm1_mainBar_3);
        btn2_bar1_3->setObjectName(QString::fromUtf8("btn2_bar1_3"));
        btn2_bar1_3->setGeometry(QRect(1020, 7, 81, 35));
        btn2_bar1_3->setFont(font3);
        btn2_bar1_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn2_bar1_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        frm2_secondBar_3 = new QFrame(pg_3_Home);
        frm2_secondBar_3->setObjectName(QString::fromUtf8("frm2_secondBar_3"));
        frm2_secondBar_3->setGeometry(QRect(39, 10, 1190, 81));
        frm2_secondBar_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #E3BA5A;\n"
"border-radius: 30px;\n"
"}"));
        frm2_secondBar_3->setFrameShape(QFrame::StyledPanel);
        frm2_secondBar_3->setFrameShadow(QFrame::Raised);
        btn1_bar2_3 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_3->setObjectName(QString::fromUtf8("btn1_bar2_3"));
        btn1_bar2_3->setGeometry(QRect(40, 48, 141, 24));
        btn1_bar2_3->setFont(font1);
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
        btn1_bar2_4->setFont(font1);
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
        btn1_bar2_5->setFont(font1);
        btn1_bar2_5->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_bar2_5->setStyleSheet(QString::fromUtf8("*{\n"
"color: #ffffff;\n"
"}"));
        btn1_bar2_5->setAutoRepeat(false);
        btn1_bar2_5->setAutoDefault(false);
        btn1_bar2_5->setFlat(false);
        btn1_bar2_6 = new QPushButton(frm2_secondBar_3);
        btn1_bar2_6->setObjectName(QString::fromUtf8("btn1_bar2_6"));
        btn1_bar2_6->setGeometry(QRect(446, 48, 151, 24));
        btn1_bar2_6->setFont(font1);
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
        widget = new QWidget(frm3_footBar_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 10, 1181, 61));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lb1_bar3_3 = new QLabel(widget);
        lb1_bar3_3->setObjectName(QString::fromUtf8("lb1_bar3_3"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        lb1_bar3_3->setFont(font4);
        lb1_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb1_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lb1_bar3_3);

        btn1_ContactUs_bar3_3 = new QPushButton(widget);
        btn1_ContactUs_bar3_3->setObjectName(QString::fromUtf8("btn1_ContactUs_bar3_3"));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        btn1_ContactUs_bar3_3->setFont(font5);
        btn1_ContactUs_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn1_ContactUs_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));

        verticalLayout->addWidget(btn1_ContactUs_bar3_3);

        btn2_reportProduct_bar3_3 = new QPushButton(widget);
        btn2_reportProduct_bar3_3->setObjectName(QString::fromUtf8("btn2_reportProduct_bar3_3"));
        btn2_reportProduct_bar3_3->setFont(font5);
        btn2_reportProduct_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn2_reportProduct_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 5px 0;\n"
"}"));

        verticalLayout->addWidget(btn2_reportProduct_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb2_bar3_3 = new QLabel(widget);
        lb2_bar3_3->setObjectName(QString::fromUtf8("lb2_bar3_3"));
        lb2_bar3_3->setFont(font4);
        lb2_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb2_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb2_bar3_3);

        lb3_bar3_3 = new QLabel(widget);
        lb3_bar3_3->setObjectName(QString::fromUtf8("lb3_bar3_3"));
        lb3_bar3_3->setFont(font5);
        lb3_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 5px 0;\n"
"}"));
        lb3_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb3_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lb4_bar3_3 = new QLabel(widget);
        lb4_bar3_3->setObjectName(QString::fromUtf8("lb4_bar3_3"));
        lb4_bar3_3->setFont(font4);
        lb4_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"}"));
        lb4_bar3_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lb4_bar3_3);

        btn3_EnterSeller_bar3_3 = new QPushButton(widget);
        btn3_EnterSeller_bar3_3->setObjectName(QString::fromUtf8("btn3_EnterSeller_bar3_3"));
        btn3_EnterSeller_bar3_3->setFont(font5);
        btn3_EnterSeller_bar3_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn3_EnterSeller_bar3_3->setStyleSheet(QString::fromUtf8("*{\n"
"color: #8e8e8e;\n"
"padding: 0 0 20px 0;\n"
"}"));

        verticalLayout_3->addWidget(btn3_EnterSeller_bar3_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        stackedWidget->addWidget(pg_3_Home);
        frm2_secondBar_3->raise();
        frm1_mainBar_3->raise();
        frm3_footBar_3->raise();

        horizontalLayout->addWidget(stackedWidget);

        HomeGui->setCentralWidget(centralwidget);

        retranslateUi(HomeGui);

        stackedWidget->setCurrentIndex(3);


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
    } // retranslateUi

};

namespace Ui {
    class HomeGui: public Ui_HomeGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEGUI_H
