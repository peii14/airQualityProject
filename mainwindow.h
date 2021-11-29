#ifndef MAP_MAINWINDOW_H
#define MAP_MAINWINDOW_H
#include "marker.h"

#include "QtPositioning/QGeoCoordinate"
#include <QMainWindow>
#include <QtWidgets>
#include "QtQml/QQmlContext"
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
    virtual void keyPressEvent(QKeyEvent * event);
private:
    Ui::MainWindow *ui;
    Marker marker_model;
    QString path = "/home/pei/Documents/code/cpp/airQualityProject/map.qml";

    void initConnection();
signals:
    void SaveButton();
    void LoadButton();
};
#endif //MAP_MAINWINDOW_H
