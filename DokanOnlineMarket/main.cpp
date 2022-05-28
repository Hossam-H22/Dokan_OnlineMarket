#include "HomeGui.h"
#include "Controller.h"
#include "Model.h"
#include <QApplication>
#include <QDesktopServices>
#include <QDebug>
#include <QDir>

struct WalletData{
    int id;
    string name;
    float price;
    string date;
    int quantity;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    string path =  QCoreApplication::applicationFilePath().toStdString();
//    string s =  QDir::currentPath().toStdString();

    path.erase(path.end()-85, path.end());
    path += "/DokanOnlineMarket/assets/";
//    qDebug() << s1;






    Model data(path);
    Controller users(&data);

    HomeGui w(&users);
    w.show();

    int exit = a.exec();

    // Call Function that store data in files
    data.Push_Data();

    return exit;
}
