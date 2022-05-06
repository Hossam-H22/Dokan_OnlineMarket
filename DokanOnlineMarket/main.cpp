#include "HomeGui.h"
#include "Controller.h"
#include "Model.h"
#include <QApplication>
#include <QDesktopServices>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
//    Model data;
//    Controller users(&data);
    QApplication a(argc, argv);

    string s =  QCoreApplication::applicationFilePath().toStdString();
//    string s =  QDir::currentPath().toStdString();
    s.erase(s.end()-85, s.end());
    s += "/DokanOnlineMarket/assets/";
    QString s1 = s.c_str();
//    qDebug() << s1;
    Model data(s1.toStdString());
    Controller users(&data);

    HomeGui w(&users);
    w.show();

    int exit = a.exec();
    data.Push_Data();
    return 0;
}
