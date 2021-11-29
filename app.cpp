#include "app.h"

App::App(int &argc, char** argv)
        : QApplication(argc, argv)
{
    w= new MainWindow();
    c = new Calculation();
    c->start();
    w->show();
    initConnection();
}
App::~App() {
    c->quit();
    delete w;
    delete c;
    qDebug() << "done";
}
void App::initConnection() {
    connect(w,&MainWindow::Searching,c,&Calculation::searching);
//    connect(w,&MainWindow::LoadButton,m, &Marker::loadData);

}
