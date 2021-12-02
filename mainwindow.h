#ifndef MAP_MAINWINDOW_H
#define MAP_MAINWINDOW_H


#include "QtPositioning/QGeoCoordinate"
#include <QMainWindow>
#include <QtWidgets>
#include "QtQml/QQmlContext"
#include <iostream>
#include "marker.h"
namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
private Q_SLOTS:
//    void onTimeout();
protected:

private:
    Ui::MainWindow *ui;
    Marker marker_model;
    QString path = "/home/pei/Documents/code/cpp/airQualityProject/map.qml";
    QDateTime start,end;
    int whichSensor;
    std::string latitude,longitude;
    bool isValid;
    void initConnection();
    void searchButton();
    bool status;
    double O3,NO2,SO2,PM10;
public slots:
    void datafromCalculation(bool,double,double,double,double);
void getCoordinate(QGeoCoordinate);
signals:
    void Searching(QDateTime,QDateTime,int);
};
#endif //MAP_MAINWINDOW_H
