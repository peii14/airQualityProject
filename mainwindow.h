#ifndef MAP_MAINWINDOW_H
#define MAP_MAINWINDOW_H


#include "QtPositioning/QGeoCoordinate"
#include <QMainWindow>
#include <QtWidgets>
#include "QtQml/QQmlContext"
#include <iostream>
#include <QTableView>
#include "marker.h"

using namespace std;
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

    QList<int> appSensor;
    QList<QString> appSensorstr;
    QList<double> appAvg,appo3,appno2,appso2,apppm10;

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
    void dataForApproximation(QList<double>, QList<int>,QList<double>,QList<double>,QList<double>,QList<double>);
void getCoordinate(QGeoCoordinate);
signals:
    void Searching(QDateTime,QDateTime,int);
};
class Approximation : public QAbstractTableModel{
Q_OBJECT

public:
    Approximation(QObject *parent = 0);

    void populateData(const QList<QString> &appSensor,const QList<double> &appAverage,const QList<double> &O3,const QList<double> &NO2,const QList<double> &SO2,const QList<double> &PM1);

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
    QList<QString> appSensorstr;
    QList<double> appAvg,appo3,appno2,appso2,apppm10;
};
#endif //MAP_MAINWINDOW_H
