#include "app.h"

App::App(int &argc, char** argv)
        : QApplication(argc, argv)
{
    w= new MainWindow();
    c = new Calculation();
    m = new Marker();
    r= new Read();
    c->start();
//    r->start();
    w->show();
    initConnection();
}
App::~App() {
    c->quit();
    delete w;
    delete m;
    delete c;
    qDebug() << "done";
}
void App::initConnection() {
    connect(w,&MainWindow::Searching,c,&Calculation::searching,Qt::DirectConnection);
    connect(c,&Calculation::dataToUI,w,&MainWindow::datafromCalculation,Qt::DirectConnection);
//    connect(c,&Calculation::dataToMarker,m,&Marker::getCoordinate,Qt::DirectConnection);
    connect(c,&Calculation::dataToMarker,w,&MainWindow::getCoordinate,Qt::DirectConnection);
    connect(c,&Calculation::dataApptoxiamtion,w,&MainWindow::dataForApproximation,Qt::DirectConnection);
}
