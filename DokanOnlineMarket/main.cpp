#include "HomeGui.h"
#include "Controller.h"
#include "Model.h"
#include "SellerInfoView.h"
#include <QApplication>
#include <QDesktopServices>
#include <QDebug>

int main(int argc, char *argv[])
{
//    Model data;
//    Controller users(&data);
    QApplication a(argc, argv);

    string s =  QCoreApplication::applicationFilePath().toStdString();
    s.erase(s.end()-85, s.end());
    s += "/DokanOnlineMarket/assets/data/";
    QString s1 = s.c_str();
//    qDebug() << s1;
    Model data(s1.toStdString());
    Controller users(&data);

    HomeGui w(&users);
//    SellerInfoView w;
    w.show();
    return a.exec();
}
