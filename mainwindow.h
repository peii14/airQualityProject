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
    Marker marker_model;
    ~MainWindow();
private Q_SLOTS:
    void onTimeout();
protected:

private:
    Ui::MainWindow *ui;
//    Marker marker_model;
    QString path = "/home/pei/Documents/code/cpp/airQualityProject/map.qml";
    int i = 0;
    QDate start,end;
    int whichSensor;
    std::string latitude,longitude;
    bool isValid;
    void initConnection();
    void searchButton();
signals:
    void Searching(QDate,QDate,int);
};
#endif //MAP_MAINWINDOW_H
