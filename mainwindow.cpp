#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

const double pi = std::acos(-1);

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    longitude = latitude = "0";
    ui->setupUi(this);
    ui->quickWidget->rootContext()->setContextProperty("marker_model", &marker_model);
    ui->quickWidget->setSource(QUrl(path));
//    airCondition
    ui->airCondition->setText("NULL");
    ui->airCondition->setStyleSheet("background-color:white;");
    ui->airCondition->setStyleSheet("color:black;");
//    Marker
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    timer->start(1000);
    marker_model.setMaxMarkers(5);
    marker_model.moveMarker(QGeoCoordinate(45.783549, 4.874572));
//

    initConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initConnection() {
    connect(ui->searchPushButton,&QPushButton::clicked,this,&MainWindow::searchButton);
    ui->quickWidget->rootContext()->setContextProperty("long_",std::stod(longitude.c_str()));
    ui->quickWidget->rootContext()->setContextProperty("lat_",std::stod(latitude.c_str()));

}
void MainWindow::searchButton() {
    start = ui->startInterval->date();
    end = ui->endInterval->date();
    start<end ? isValid = true: isValid = false;
    if(isValid){
       whichSensor = ui->sensorSpinBox->value();
       std::cout<<"Date sent"<<std::endl;
       emit Searching(start,end,whichSensor);
    }else{
        std::cout<<"Date is not Valid"<<std::endl;
    }
}
void MainWindow::onTimeout()
{
    double x = 15.4561 + 0.01*std::sin(i*pi/24);
    double y = 73.8021 + 0.01*std::cos(i*pi/24);
    QGeoCoordinate next(x, y);
    marker_model.moveMarker(next);
    i++;
}





