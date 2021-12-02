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
#include <QtPositioning/QGeoCoordinate>
#include <queue>
#include <unordered_map>
#include "read.h"
using namespace std;

struct node {
    struct node *left;
    double data;
    int sensor;
    int height;
    struct node *right;
};
class Calculation: public QThread, public Read{
Q_OBJECT

public:
    Calculation();
    ~Calculation();

private:
    QStringList sens0,sens1,sens2,sens3,sens4,sens5,sens6,sens7,sens8,sens9;
    QStringList att03,attso2,attno2,attpm10;
    QGeoCoordinate sensor0,sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,sensor9;
    QMutex mtx;

    QDateTime startInterval,endInterval;
    struct node * root;
    int sensors;
    bool isSafe;
    double avgo3,avgso2,avgno2,avgpm10;
    void run();
    void calcAttribute(int);
    double calcAverage(QStringList);
    void encapsulation(QStringList);

    double calcSD(double *data);
    int calheight(struct node *p);
    int bf(struct node *n);
    struct node * llrotation(struct node *n);
    struct node * rrrotation(struct node *n);
    struct node * rlrotation(struct node *n);
    struct node * lrrotation(struct node *n);
    struct node* insert(struct node *r,int data,int sens);
    struct node * deleteNode(struct node *p,int data);
    struct node* insuc(struct node* p);
    void levelorder_newline(struct node *v);
    struct node* inpre(struct node* p);
    void levelorder_newline();
public slots:
    void searching(QDateTime , QDateTime , int);
signals:
    void finished();
    void dataToUI(bool,double O3,double NO2,double SO2,double PM10);
//    void location(QGeoCoordinate);
    void dataToMarker(QGeoCoordinate);
};


#endif //AIRQUALITYPROJECT_CALCULATION_H
