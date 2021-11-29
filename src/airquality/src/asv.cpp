#include <QtWidgets/QApplication>
#include "mainwindow.h"
#include "app.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"ASV");
    App app(argc,argv);
    return app.exec();
}