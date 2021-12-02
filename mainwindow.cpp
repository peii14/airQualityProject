#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    longitude = latitude = "0";
    whichSensor = 0;
    O3 = NO2 = SO2 = PM10 = 0;
    ui->setupUi(this);
    ui->quickWidget->rootContext()->setContextProperty("marker_model", &marker_model);
    ui->quickWidget->setSource(QUrl(path));
//    airCondition
    ui->airCondition->setText("NULL");
    ui->airCondition->setStyleSheet("background-color:white;");
    ui->airCondition->setStyleSheet("color:black;");
//    Marker
    marker_model.setMaxMarkers(5);
    marker_model.addMarker(QGeoCoordinate(45.783549, 4.874572));
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
    ui->airCondition->setText("NULL");


}
void MainWindow::searchButton() {
    start = ui->startInterval->dateTime();
    end = ui->endInterval->dateTime();
    start<end ? isValid = true: isValid = false;
    if(isValid){
       whichSensor = ui->sensorSpinBox->value();
       std::cout<<"Date sent"<<std::endl;
       emit Searching(start,end,whichSensor);
    }else{
        std::cout<<"Date is not Valid"<<std::endl;
    }
}
void MainWindow::datafromCalculation(bool status, double O3, double NO2, double SO2, double PM10) {
    status = status;
    O3 = O3;
    NO2 = NO2;
    SO2 = SO2;
    PM10 = PM10;
    if(status)
        ui->airCondition->setText("Good");
    else
        ui->airCondition->setText("Poor");
    ui->displayNO2->setText(QString::number(NO2));
    ui->displayO3->setText(QString::number(O3));
    ui->displaySO2->setText(QString::number(SO2));
    ui->displayPM10->setText(QString::number(PM10));
}





