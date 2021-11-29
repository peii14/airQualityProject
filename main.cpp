#include "mainwindow.h"
#include "app.h"
#include <QApplication>

int main(int argc, char **argv)
{
    App app(argc, argv);
//    w.resize(1000, 500);
    return app.exec();
}
