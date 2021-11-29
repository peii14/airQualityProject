//
// Created by pei on 19/07/2021.
//

#ifndef COMM_MAINWINDOW_H
#define COMM_MAINWINDOW_H

#include <QMainWindow>
#include "QtPositioning/QGeoCoordinate"
#include <ros/ros.h>
#include <string>
#include <QtWidgets>
#include <QLineEdit>
#include <QtQuick/QQuickView>
#include "QtQml/QQmlContext"
//#include <QQmlApplicationEngine>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
//    Q_PROPERTY(QGeoCoordinate current READ current NOTIFY lastMark)
    Q_PROPERTY(double QMLlongitude READ QMLlongitude NOTIFY lastMark)
    Q_PROPERTY(double QMLlatitude READ QMLlatitude NOTIFY lastMark)
    Q_PROPERTY(int QMLHeading READ QMLHeading NOTIFY lastMark)
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void init();
//    QGeoCoordinate current() const;
    int QMLHeading() const;
    double QMLlongitude()const;
    double QMLlatitude()const;

private:
    int heading;
    double gpsLat,gpsLong;
    QGeoCoordinate currentCoordinate;
private:
    Ui::MainWindow *ui;
    bool isAuto,isRTHRequest,isStart;
    std::string latitude,longitude;
    void initConnection();

    QString path = "src/asv/src/Peta.qml";


public slots:
    void start_isClicked();
    void editButton_isClicked();
    void displaySpeed(int);
    void displayLatitude(double);
    void displayLongitude(double);
    void statusCommand_isClicked();
    void returnToHome_isClicked();

    void changedGPS(double,double,int);
    void changedSpeed(int);
    void changedCtrlStatus(int);
    void changedMissionStatus(int);
    void changedRollPitch(int,int);



signals:
    void changeCtrlMode(bool);
    void changeStartStop(bool);
    void RTHRequest(bool);
    void lastMark();

};

#endif //COMM_MAINWINDOW_H
