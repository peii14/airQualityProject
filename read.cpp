//
// Created by pei on 30/11/2021.
//

#include "read.h"

Read::Read() {

}
Read::~Read() {

    qDebug()<<"Read Deleted";
}
void Read::run(){


    exec();
}
void Read::readInRange(QDate start, QDate end) {
    qDebug()<<"isReading";
    QFile file("/home/pei/Documents/code/cpp/airQualityProject/test.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    while(!file.atEnd()){
        QByteArray line = file.readLine();
        wordList.append(line.split(',').first());
    }
    qDebug() << wordList;
}


