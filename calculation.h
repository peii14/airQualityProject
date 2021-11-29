//
// Created by pei on 29/11/2021.
//

#ifndef AIRQUALITYPROJECT_CALCULATION_H
#define AIRQUALITYPROJECT_CALCULATION_H
#include <iostream>
#include <QDebug>
#include <QStack>
#include <QFile>
#include <QJsonObject>
#include <QAbstractListModel>
#include <vector>
#include <QtConcurrent>
#include <QThread>
#include <QFuture>
#include <QMutex>
#include <QPoint>
#include <thread>
#include <mutex>
#include <cmath>
#include <algorithm>
using namespace std;
class Calculation: public QThread {
Q_OBJECT

public:
    Calculation();
    ~Calculation();

private:
    QMutex mtx;
    QDate startInterval,endInterval;
    int sensors;

    void run();
public slots:
    void searching(QDate , QDate , int);
signals:
    void finished();
};


#endif //AIRQUALITYPROJECT_CALCULATION_H
