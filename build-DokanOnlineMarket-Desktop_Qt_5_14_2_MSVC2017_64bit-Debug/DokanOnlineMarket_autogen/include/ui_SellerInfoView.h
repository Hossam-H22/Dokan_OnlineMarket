/********************************************************************************
** Form generated from reading UI file 'SellerInfoView.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLERINFOVIEW_H
#define UI_SELLERINFOVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SellerInfoView
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *SellerInfoView)
    {
        if (SellerInfoView->objectName().isEmpty())
            SellerInfoView->setObjectName(QString::fromUtf8("SellerInfoView"));
        SellerInfoView->resize(1270, 800);
        SellerInfoView->setMinimumSize(QSize(1270, 800));
        SellerInfoView->setMaximumSize(QSize(1270, 800));
        SellerInfoView->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #ffffff;\n"
"}"));
        centralwidget = new QWidget(SellerInfoView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-140, 90, 201, 601));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #2880AE;\n"
"border-radius: 100px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1210, 90, 201, 601));
        frame_2->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #2880AE;\n"
"border-radius: 100px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 100, 225, 225));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: #b3b3b3;\n"
"border-radius: 110px;\n"
"border: 2px solid #000000;\n"
"}"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 180, 93, 29));
        SellerInfoView->setCentralWidget(centralwidget);

        retranslateUi(SellerInfoView);
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(show()));

        QMetaObject::connectSlotsByName(SellerInfoView);
    } // setupUi

    void retranslateUi(QMainWindow *SellerInfoView)
    {
        SellerInfoView->setWindowTitle(QCoreApplication::translate("SellerInfoView", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("SellerInfoView", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SellerInfoView: public Ui_SellerInfoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLERINFOVIEW_H
