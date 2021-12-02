//
// Created by pei on 29/11/2021.
//

#include "calculation.h"

Calculation::Calculation() {
    startInterval =QDateTime::currentDateTime();
    endInterval = QDateTime::currentDateTime();
    sensors = -1;

    sensor0.setLatitude(-8.15758888291083);
    sensor0.setLongitude(-34.7692487876719);
    sensor1.setLatitude(-30.0647387677174);
    sensor1.setLongitude(-76.3439147576429);
    sensor2.setLatitude(38.9221784071634);
    sensor2.setLongitude(-89.2363721594384);
    sensor3.setLatitude(-5.92154786033628);
    sensor3.setLongitude(75.2608366614491);
    sensor4.setLatitude(-10.0514503172838);
    sensor4.setLongitude(87.5506518210986);
    sensor5.setLatitude(11.8876924118435);
    sensor5.setLongitude(67.0476760328969);
    sensor6.setLatitude(-23.6333200096308);
    sensor6.setLongitude(-71.2536555348214);
    sensor7.setLatitude(16.3216940040335);
    sensor7.setLongitude(-86.1531723924694);
    sensor8.setLatitude(-4.1832184228968);
    sensor8.setLongitude(52.6153151610006);
    sensor9.setLatitude(36.2756694672982);
    sensor9.setLongitude(1.33005024461543);

    sens0 <<"";
    sens1 <<"";
    sens2 <<"";
    sens3 <<"";
    sens4 <<"";
    sens5 <<"";
    sens6 <<"";
    sens7 <<"";
    sens8 <<"";
    sens9 <<"";

    qDebug() << "thread serial:" << QThread::currentThreadId();
}

Calculation::~Calculation(){
    qDebug()<<"calculation deleted";

}
void Calculation::run(){
    qDebug()<<startInterval<<" "<<endInterval<<" "<<sensors;
//    AVL tree;
//    tree.root = tree.insert(tree.root,average);
}

void Calculation::searching(QDateTime start,QDateTime end,int sensor) {
    mtx.lock();
    startInterval = start;
    endInterval = end;
    sensors = sensor;
    mtx.unlock();
    Read::readInRange(startInterval,endInterval);
    encapsulation(wordList);
    qDebug()<<wordList;
}

void Calculation::calcAttribute(int whichSensor) {
    if(!sens0.isEmpty() || whichSensor == 0){
        att03 = sens0.filter("O3");
        attso2 = sens0.filter("SO2");
        attno2 = sens0.filter("NO2");
        attpm10 = sens0.filter("PM10");
        avg03 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);
//        o3 > 100 dang else safe
//        so2>15 dang else safe
//        no2>100 dang else safe
//        pm10>50 dang else safe
//         isSafe if 3 att is safe else dang
        if(avg03<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
    }else if(!sens1.isEmpty() || whichSensor == 1){

    }
}
double Calculation::calcAverage(QStringList) {

}
void Calculation::encapsulation(QStringList words) {
    sens0 = words.filter("Sensor0");
    sens1 = words.filter("Sensor1");
    sens2 = words.filter("Sensor2");
    sens3 = words.filter("Sensor3");
    sens4 = words.filter("Sensor4");
    sens5 = words.filter("Sensor5");
    sens6 = words.filter("Sensor6");
    sens7 = words.filter("Sensor7");
    sens8 = words.filter("Sensor8");
    sens9 = words.filter("Sensor9");



}

