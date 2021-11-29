#include "app.h"

App::App(int &argc, char** argv)
        : QApplication(argc, argv)
{
    w= new MainWindow();
    m = new Marker();
    w->show();
    initConnection();
}
App::~App() {
    delete w;
    delete m;
    qDebug() << "done";
}
void App::initConnection() {
    connect(w, &MainWindow::SaveButton , m, &Marker::saveData,Qt::DirectConnection);
    connect(w,&MainWindow::LoadButton,m, &Marker::loadData);

}
