#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    longitude = latitude = "0";
    whichSensor = 0;
    numRows = 5;
    numColumns = 6;
    O3 = NO2 = SO2 = PM10 = 0;
    path.append(qApp->applicationDirPath());
    path.replace(QString("cmake-build-debug"), QString("src/map.qml"));
    ui->setupUi(this);
    ui->quickWidget->rootContext()->setContextProperty("marker_model", &marker_model);
    ui->quickWidget->setSource(QUrl(path));
//    airCondition
    ui->airCondition->setText("NULL");
    ui->airCondition->setStyleSheet("background-color:white;");
    ui->airCondition->setStyleSheet("color:black;");
//    Marker
    marker_model.setMaxMarkers(1);
//    marker_model.moveMarker(QGeoCoordinate(45.783549, 4.874572));

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
void MainWindow::datafromCalculation(QString status, double O3, double NO2, double SO2, double PM10) {
    status = status;
    O3 = O3;
    NO2 = NO2;
    SO2 = SO2;
    PM10 = PM10;
    ui->airCondition->setText(status);
    ui->displayNO2->setText(QString::number(NO2));
    ui->displayO3->setText(QString::number(O3));
    ui->displaySO2->setText(QString::number(SO2));
    ui->displayPM10->setText(QString::number(PM10));

}
void MainWindow::getCoordinate(QGeoCoordinate next) {
    marker_model.removeLastMarker();
    marker_model.moveMarker(next);
}
void MainWindow::dataForApproximation(QList<double>average , QList<int> sensors,QList<double> o3,QList<double> no2,QList<double> so2,QList<double>pm10 ) {
    appAvg = average;
    appo3 = o3;
    appno2 = no2;
    appso2 = so2;
    apppm10 = pm10;
    for(int i=0 ;i<sensors.size();i++){
        if(sensors.at(i) == 0){
            appSensorstr.append("Sensor 0");
        }else if(sensors.at(i)==1){
            appSensorstr.append("Sensor 1");
        }else if(sensors.at(i)==2){
            appSensorstr.append("Sensor 2");
        }else if(sensors.at(i)==3){
            appSensorstr.append("Sensor 3");
        }else if(sensors.at(i)==4){
            appSensorstr.append("Sensor 4");
        }else if(sensors.at(i)==5){
            appSensorstr.append("Sensor 5");
        }else if(sensors.at(i)==6){
            appSensorstr.append("Sensor 6");
        }else if(sensors.at(i)==7){
            appSensorstr.append("Sensor 7");
        }else if(sensors.at(i)==8){
            appSensorstr.append("Sensor 8");
        }else if(sensors.at(i)==9){
            appSensorstr.append("Sensor 9");
        }
    }

    ui->approximateTable->setRowCount(numRows);
    ui->approximateTable->setColumnCount(numColumns);

    for(auto r=0, iter1=0;r<appSensorstr.size();r++){
        if(sensors.at(r) != whichSensor){
            ui->approximateTable->setItem(iter1,0,new QTableWidgetItem(appSensorstr.at(r)));
            whichTable.push_back(r);
            iter1++;
        }
    }
    for(auto r=0,iter1=0;r<appo3.size();r++){
        if(count(whichTable.begin(),whichTable.end(),r)){
            ui->approximateTable->setItem(iter1,1,new QTableWidgetItem(QString::number(appo3.at(r))));
            iter1++;
        }
    }
    for(auto r=0,iter1=0;r<appno2.size();r++){
    if(count(whichTable.begin(),whichTable.end(),r)){
        ui->approximateTable->setItem(iter1,2,new QTableWidgetItem(QString::number(appno2.at(r))));
        iter1++;
    }
    }
    for(auto r=0,iter1=0;r<appso2.size();r++){
        if(count(whichTable.begin(),whichTable.end(),r)){
            ui->approximateTable->setItem(iter1,3,new QTableWidgetItem(QString::number(appso2.at(r))));
            iter1++;
        }
    }
    for(auto r=0,iter1=0;r<apppm10.size();r++){
        if(count(whichTable.begin(),whichTable.end(),r)){
            ui->approximateTable->setItem(iter1,4,new QTableWidgetItem(QString::number(apppm10.at(r))));
            iter1++;
        }
    }
    for(auto r=0,iter1=0;r<appAvg.size();r++){
        if(count(whichTable.begin(),whichTable.end(),r)){
            ui->approximateTable->setItem(iter1,5,new QTableWidgetItem(QString::number(appAvg.at(r))));
            iter1++;
        }
    }
    ui->approximateTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Sensors"));
    ui->approximateTable->setHorizontalHeaderItem(1, new QTableWidgetItem("O3"));
    ui->approximateTable->setHorizontalHeaderItem(2, new QTableWidgetItem("NO2"));
    ui->approximateTable->setHorizontalHeaderItem(3, new QTableWidgetItem("SO2"));
    ui->approximateTable->setHorizontalHeaderItem(4, new QTableWidgetItem("PM10"));
    ui->approximateTable->setHorizontalHeaderItem(5, new QTableWidgetItem("Average"));
    ui->approximateTable->horizontalHeader()->setVisible(true);
    ui->approximateTable->show();


    appSensorstr.clear();
    appAvg.clear();
    appo3.clear();
    appso2.clear();
    apppm10.clear();
    appno2.clear();
    whichTable.clear();
}





