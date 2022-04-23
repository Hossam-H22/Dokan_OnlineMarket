#include "HomeGui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomeGui w;
    w.show();
    return a.exec();
}
