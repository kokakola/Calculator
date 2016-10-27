#include "mainwindow.h"
#include <QApplication>
#include <iomanip>
#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
