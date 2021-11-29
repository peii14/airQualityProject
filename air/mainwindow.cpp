#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->quickWidget->rootContext()->setContextProperty("marker_model",&marker_model);
    //url nya aneh bgt
    ui->quickWidget->setSource(QUrl(path));
    initConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initConnection() {
//    connect(ui->ButtonSave,&QPushButton::clicked,this,&MainWindow::SaveButton);
//    connect(ui->ButtonLoad,&QPushButton::clicked,this,&MainWindow::LoadButton);

}
void MainWindow::keyPressEvent(QKeyEvent *event) {

    if(event->key() == Qt::Key_Delete){
        marker_model.removeLastMarker();
    }
}



