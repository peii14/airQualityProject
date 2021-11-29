#ifndef APP_H
#define APP_H

#include <QApplication>
#include <QObject>
#include "mainwindow.h"


#include <typeinfo>

class App : public QApplication{
    Q_OBJECT
public:
    MainWindow *w;
    // CommASVtty *c;
    App(int &argc, char** argv) ;
    ~App();

private:
    void initConnection();

};

#endif // APP_H