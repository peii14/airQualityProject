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
    marker_model.setMaxMarkers(1);
//    marker_model.moveMarker(QGeoCoordinate(45.783549, 4.874572));
//

    Approximation *approximate = new Approximation();
    approximate->populateData(appSensorstr,appAvg,appo3,appno2,appso2,apppm10);
    ui->approximateTable->horizontalHeader()->setVisible(true);
    ui->approximateTable->show();

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


}

Approximation::Approximation(QObject *parent) : QAbstractTableModel(parent)
{
}

void Approximation::populateData(const QList<QString> &appSensor,const QList<double> &appAverage,const QList<double> &O3,const QList<double> &NO2,const QList<double> &SO2,const QList<double> &PM10)
{
    appSensorstr.clear();
    appSensorstr = appSensor;
    appo3.clear();
    appo3 = O3;
    appno2.clear();
    appno2 = NO2;
    appso2.clear();
    appso2 = SO2;
    apppm10.clear();
    apppm10 = PM10;


    return;
}

int Approximation::rowCount(const QModelIndex &parent) const{
    Q_UNUSED(parent);
    return appAvg.length();
}

int Approximation::columnCount(const QModelIndex &parent) const{
    Q_UNUSED(parent);
    return 6;
}

QVariant Approximation::data(const QModelIndex &index, int role) const{
    if (!index.isValid() || role != Qt::DisplayRole) {
        return QVariant();
    }
    if (index.column() == 0) {
        return appSensorstr[index.row()];
    } else if (index.column() == 1) {
        return appo3[index.row()];
    }else if (index.column() == 2) {
        return appno2[index.row()];
    }else if (index.column() == 3) {
        return appso2[index.row()];
    }else if (index.column() == 4) {
        return apppm10[index.row()];
    }else if (index.column() == 5) {
        return appAvg[index.row()];
    }

    return QVariant();
}

QVariant Approximation::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        if (section == 0) {
            return QString("Sensor");
        } else if (section == 1) {
            return QString("O3");
        }else if (section == 2) {
            return QString("NO2");
        }else if (section == 3) {
            return QString("SO2");
        }else if (section == 4) {
            return QString("PPM10");
        }else if (section == 5) {
            return QString("Average");
        }
    }
    return QVariant();
}





