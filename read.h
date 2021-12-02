//
// Created by pei on 30/11/2021.
//

#ifndef AIRQUALITYPROJECT_READ_H
#define AIRQUALITYPROJECT_READ_H
#include <iterator>
#include <iostream>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include <string>
#include <QtConcurrent>
#include <QThread>
#include <QFuture>
#include <QMutex>
#include <QPoint>
#include <thread>
#include <mutex>


using namespace std;

class Read{
protected:
    QStringList wordList;
    void readInRange(QDateTime,QDateTime);
public:
    Read();
    ~Read();
//    void run();
public:

};
#endif //AIRQUALITYPROJECT_READ_H
