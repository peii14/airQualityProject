//
// Created by pei on 30/11/2021.
//

#include "read.h"
Read::Read() {

}
Read::~Read() {

    qDebug()<<"Read Deleted";
}
//void Read::run(){
//
//
//    exec();
//}
void Read::readInRange(QDateTime start, QDateTime end) {
    qDebug()<<"isReading";
    QFile file("/home/pei/Documents/code/cpp/airQualityProject/test.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    int range=0;
    string tmp = start.toString(Qt::ISODate).toStdString();
    char * started = new char [tmp.length()+1];
    strcpy (started, tmp.c_str());

    string tmp2 = end.date().toString(Qt::ISODate).toStdString();
    char * ended = new char [tmp2.length()+1];
    strcpy(ended,tmp2.c_str());

    while(!file.atEnd()){
        QByteArray line = file.readLine();
        if(line.isEmpty()) return;
        if(line.startsWith(started)){
            qDebug()<<"start";
            wordList.append(line.split(',').first());
            range=1;
        }else if(range==1){
            qDebug()<<"range";
            wordList.append(line.split(',').first());
            if(line.startsWith(ended)){
                qDebug()<<"stop";
                wordList.append(line.split(',').first());
                range=0;
                break;
            }
        }
    }
}


