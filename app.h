//
// Created by pei on 3/13/21.
//

#ifndef MAP_APP_H
#define MAP_APP_H
#include <QApplication>
#include <QObject>
#include <QDebug>
#include "mainwindow.h"
#include "calculation.h"

class App : public QApplication{
    Q_OBJECT
public:
    MainWindow *w;
    Calculation *c;
    App(int &argc, char** argv) ;
    ~App();

private:
    void initConnection();

};
#endif //MAP_APP_H
