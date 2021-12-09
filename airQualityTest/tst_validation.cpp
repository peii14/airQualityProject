#include <QtTest>
#include <QCoreApplication>
#include <QSignalSpy>
#include <QtCore>
#include <QtGui>
#include <QDateTime>
#include "../airQualityProject/calculation.h"
#include "../airQualityProject/mainwindow.h"
// add necessary includes here

class validation : public QObject
{
    Q_OBJECT

public:
    validation();
    ~validation();
    MainWindow *ui;
    Calculation *calc;
    bool isValid;
    int whichSensor;
    QDateTime startDate,endDate;

private slots:
    void initTestCase();
    void cleanupTestCase();
    void dateValidation();
    void resultValidation();
    void sensorLocation();
    void sensorApproximation();

};

validation::validation(){
startDate = QDateTime(QDate(2017 1, 1), QTime(11, 0, 0));
endDate = QDateTime(QDate(2017, 1, 6), QTime(12, 0, 0));
whichSensor = 0;
}

validation::~validation(){

}

void validation::initTestCase(){
    emit Searching(startDate,endDate,whichSensor);
}

void validation::cleanupTestCase(){

}

void validation::dateValidation(){
     QSignalSpy spy( ui, SIGNAL(&MainWindow::Searching(QDateTime start,QDateTime end,int sensor) ) );
     start<end?isValid = true:isValid = false;
     QVERIFY(isValid);
     QCOMPARE( stateSpy.count(), 0 );
}
void validation::resultValidation(){
    QSignalSpy spy(calc, SIGNAL(&Calculation::dataUI(QString stats ,double O3,double NO2,double SO2,double PM10)));
    QCOMPARE( O3, 149.18 );
    QCOMPARE( NO2, 290.395 );
    QCOMPARE( SO2, 236.363 );
    QCOMPARE( PM10, 49.864 );
    QCOMPARE( stats,QString("Poor") );
    qDebug()<<"NO2: "<<NO2<<"SO2: "<<SO2<<"O3: "<<O3<<"PM10: "<<PM10<<"STATUS: "<<stats;
}
void validation::sensorLocation(){
    QSignalSpy spy(calc,SIGNAL(&Calculation::dataToMarker(QGeoCoordinate loc)));
    QCOMPARE(loc.latitude(),"-8.15758888291083");
    QCOMPARE(loc.longitude(),"-34.7692487876719");
    qDebug()<<"Latitude"<<loc.latitude()<<"Longitude"<<loc.longitude();
}
void validation::sensorApproximation(){
    QSignalSpy spy(calc,SIGNAL(&Calculation::dataApptoxiamtion(QList<double> avg, QList<int> sen ,QList<double> att1,QList<double> att2,QList<double> att3,QList<double>att4)));
    QList<int> ans;
    ans<<9<<3<<6<<1;
        for(auto iter=0;a<sen.size()-1;iter++){
           QCOMPARE(sen.at(iter),ans.at(iter));
        }
    qDebug()<<"Sensor "<<sen.at(0)<<"Sensor "<<sen.at(1)<<"Sensor "<<sen.at(2)<<"Sensor "<<sen.at(3);
}

QTEST_MAIN(validation)

#include "tst_validation.moc"
