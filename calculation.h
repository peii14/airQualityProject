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
#include <stack>
using namespace std;

struct node {
    struct node *left;
    double data;
    int sensor;
    double o3,no2,so2,pm10;
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
    QList<double> ret;
    QList<int> sen;
    QList<double> att1;
    QList<double> att2;
    QList<double> att3;
    QList<double> att4;
    QDateTime startInterval,endInterval;
    struct node * root;
    int sensors;
    bool isSafe;
    double avgo3,avgso2,avgno2,avgpm10;
    double findApproximate;
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
    struct node* insert(struct node *r,int data,int sens,double atto3,double attno2,double attso2,double attpm10);
    struct node * deleteNode(struct node *p,int data);
    struct node* insuc(struct node* p);
    struct node* inpre(struct node* p);
    void levelorder_newline(struct node *v);
    void levelorder_newline();
    void printBT(const std::string& prefix, const node* node, bool isLeft);
    void printBT(const node* node);
    void closestKValues(node* root, double target, int k);
    void pushLarger(node* nodes, stack <node*>& st, double target);
    void pushSmaller(node* nodes, stack <node*>& st, double target);
public slots:
    void searching(QDateTime , QDateTime , int);
signals:
    void dataApptoxiamtion(QList<double>, QList<int> ,QList<double>,QList<double>,QList<double>,QList<double>);
    void finished();
    void dataToUI(bool,double O3,double NO2,double SO2,double PM10);
//    void location(QGeoCoordinate);
    void dataToMarker(QGeoCoordinate);
};


#endif //AIRQUALITYPROJECT_CALCULATION_H
