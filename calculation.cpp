//
// Created by pei on 29/11/2021.
//

#include "calculation.h"

Calculation::Calculation() {
    startInterval =QDateTime::currentDateTime();
    endInterval = QDateTime::currentDateTime();
    sensors = -1;
    qDebug() << "thread serial:" << QThread::currentThreadId();

}

Calculation::~Calculation(){
    qDebug()<<"calculation deleted";

}
void Calculation::run(){
    qDebug()<<startInterval<<" "<<endInterval<<" "<<sensors;
    AVL tree;
    tree.root = tree.insert(tree.root,average);
}

void Calculation::searching(QDateTime start,QDateTime end,int sensor) {
    mtx.lock();
    startInterval = start;
    endInterval = end;
    sensors = sensor;
    mtx.unlock();
    Read::readInRange(startInterval,endInterval,sensors);
}
