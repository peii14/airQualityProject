//
// Created by pei on 19/07/2021.
//

#include "mainwindow.h"
#include <ui_mainwindow.h>
#include <iostream>

#include "qdebug.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow )
{
    isAuto = false;
    isRTHRequest = false;
    isStart = false;
    heading = 0 ;
    gpsLat = gpsLong =  0;
    longitude = latitude = "0";
//    QQmlApplicationEngine engine;
//    engine.rootContext()->setContextProperty("", this);
    ui->setupUi(this);
    ui->quickWidget->rootContext()->setContextProperty("Marker",this);
    ui->quickWidget->setSource(QUrl(path));
//    currentCoordinate.setLatitude(-7.286750);
//    currentCoordinate.setLongitude(112.796462);
//    qDebug()<<currentCoordinate;
    initConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initConnection()
{
//    displayGPS();
    connect(ui->editButton, &QPushButton::clicked, this, &MainWindow::editButton_isClicked);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::start_isClicked);
    connect(ui->cmdControllButton,&QPushButton::clicked,this, &MainWindow::statusCommand_isClicked);
    connect(ui->RTHpushButton,&QPushButton::clicked,this,&MainWindow::returnToHome_isClicked);
//    std::cout<<longitude<<std::endl;
    ui->quickWidget->rootContext()->setContextProperty("long_",std::stod(longitude.c_str()));
    ui->quickWidget->rootContext()->setContextProperty("lat_",std::stod(latitude.c_str()));

}

void MainWindow::init(){

    emit changeCtrlMode(isAuto);
    emit changeStartStop(isStart);
    emit RTHRequest(isRTHRequest);
}

void MainWindow::editButton_isClicked()
{
    if (ui->editButton->text() == "Edit"){
        ui->editButton->setText("Done");
    }
    else{
//        bug when empty
        latitude = ui->latitudeLine->text().toStdString();
        longitude = ui->longitudeLine->text().toStdString();
        ui->quickWidget->rootContext()->setContextProperty("lat_",stod(latitude));
        ui->quickWidget->rootContext()->setContextProperty("long_",stod(longitude));
        std::cout<<"Lat :"<<latitude<<"Long :"<<longitude<<std::endl;
        ui->editButton->setText("Edit");
    }
}

void MainWindow::start_isClicked()
{
    if(isStart)
    {
        isStart = false;
        ui->startButton->setText("Start");
        emit changeStartStop(isStart);
    }
    else
    {
        isStart = true;
        ui->startButton->setText("Stop");
        emit changeStartStop(isStart);
    }
}
void MainWindow::statusCommand_isClicked() {
    if(isAuto){
        isAuto = false;
        ui->cmdControllButton->setText("Auto");
        ui->switchLbl->setText("Status: Auto");
        emit changeCtrlMode(isAuto);
    }else{
        isAuto = true;
        ui->cmdControllButton->setText("Manual");
        ui->switchLbl->setText("Status: Manual");
        emit changeCtrlMode(isAuto);
    }
}

void MainWindow::displaySpeed(int speed)
{
    ui->speedLbl->setText(std::to_string(speed).c_str());
}

void MainWindow::displayLatitude(double latitude)
{
    ui->LatitudeLbl->setText(std::to_string(latitude).c_str());
}

void MainWindow::displayLongitude(double longitude)
{
    ui->longitudeLbl->setText(std::to_string(longitude).c_str());
}
void MainWindow::returnToHome_isClicked() {
    if(isRTHRequest){
        isRTHRequest = false;
        emit RTHRequest(isRTHRequest);
    }else{
        isRTHRequest = true;
        emit RTHRequest(isRTHRequest);
    }
}


int MainWindow::QMLHeading() const {
    return heading;
}
double MainWindow::QMLlatitude() const {
    return gpsLat;
}
double MainWindow::QMLlongitude() const {
    return gpsLong;
}

void MainWindow::changedGPS(double lat_,double long_,int heading_) {
    gpsLat = lat_;
    gpsLong = long_;
    currentCoordinate.setLatitude(gpsLat);
    currentCoordinate.setLongitude(gpsLong);
    heading = heading_;
    displayLatitude(gpsLat);
    displayLongitude(gpsLong);
    emit lastMark();
}
void MainWindow::changedSpeed(int val) {
    displaySpeed(val);
}
void MainWindow::changedCtrlStatus(int val) {
    if(val==0){
        ui->switchLbl->setText("Status: MANUAL");
    }
    else
        ui->switchLbl->setText("Status: AUTO");
}
void MainWindow::changedMissionStatus(int val) {
//    std::cout<<"MissionStatus:"<<val<<std::endl;
    ui->MissionStatusLable->setText(std::to_string(val).c_str());

}
void MainWindow::changedRollPitch(int roll,int pitch) {
//    std::cout << "Roll: " << roll << std::endl;
//    std::cout << "pitch: " << pitch << std::endl;
    ui->RollLable->setText(std::to_string(roll).c_str());
    ui->PitchLable->setText(std::to_string(pitch).c_str());
}
