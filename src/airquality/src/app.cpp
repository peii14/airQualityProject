#include "app.h"
#include "../../../../../../usr/include/x86_64-linux-gnu/qt5/QtCore/QDebug"

App::App(int &argc, char** argv)
        : QApplication(argc, argv)
{
    w = new MainWindow();
    w->show();
    // c = new CommASVtty(ttyusb, 9898, baud_rate);
    // c->start();
    w->init();
    initConnection();

}

App::~App(){
    // delete c;
    delete w;
    qDebug() << "App deleted";
}

void App::initConnection(){
    // connect(w,&MainWindow::changeCtrlMode,c,&CommASVtty::changedCtrlMode,Qt::DirectConnection);
    // connect(w,&MainWindow::changeStartStop,c,&CommASVtty::changedStartStop,Qt::DirectConnection);
    // connect(w,&MainWindow::RTHRequest,c,&CommASVtty::RTHRequestChanged,Qt::DirectConnection);

    // connect(c,&CommASVtty::changeGPS,w,&MainWindow::changedGPS,Qt::DirectConnection);
    // connect(c,&CommASVtty::changeSpeed,w,&MainWindow::changedSpeed,Qt::DirectConnection);
    // connect(c,&CommASVtty::changeCtrlStatus,w,&MainWindow::changedCtrlStatus,Qt::DirectConnection);
    // connect(c,&CommASVtty::changeMissionStatus,w,&MainWindow::changedMissionStatus,Qt::DirectConnection);
    // connect(c,&CommASVtty::changeRollPitch,w,&MainWindow::changedRollPitch,Qt::DirectConnection);
}
