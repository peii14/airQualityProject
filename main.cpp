#include "mainwindow.h"
#include "app.h"
#include <QApplication>

int main(int argc, char **argv)
{
    App app(argc, argv);
    return app.exec();
}
