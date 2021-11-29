#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->quickWidget->rootContext()->setContextProperty("marker_model",&marker_model);
    ui->quickWidget->setSource(QUrl(path));
//    airCondition
    ui->airCondition->setText("NULL");
    ui->airCondition->setStyleSheet("background-color:white;");
    ui->airCondition->setStyleSheet("color:black;");
//

    initConnection();
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::initConnection() {
    connect(ui->searchPushButton,&QPushButton::clicked,this,&MainWindow::searchButton);


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





