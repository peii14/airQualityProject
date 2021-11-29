#ifndef MAP_MAINWINDOW_H
#define MAP_MAINWINDOW_H


#include "QtPositioning/QGeoCoordinate"
#include <QMainWindow>
#include <QtWidgets>
#include "QtQml/QQmlContext"
#include <iostream>
namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

private:
    Ui::MainWindow *ui;
//    Marker marker_model;
    QString path = "/home/pei/Documents/code/cpp/airQualityProject/map.qml";

    QDate start,end;
    int whichSensor;
    bool isValid;
    void initConnection();
    void searchButton();
signals:
    void Searching(QDate,QDate,int);
};
#endif //MAP_MAINWINDOW_H
