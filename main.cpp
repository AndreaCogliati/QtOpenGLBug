#include "mainwindow.h"

#include <QApplication>
#include <QtPlatformHeaders/QWindowsWindowFunctions>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWindowsWindowFunctions::setHasBorderInFullScreen(w.windowHandle(), true);
    w.show();
    return a.exec();
}
