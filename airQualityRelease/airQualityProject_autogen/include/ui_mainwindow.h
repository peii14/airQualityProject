/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QtQuickWidgets/QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QQuickWidget *quickWidget;
    QLabel *airCondition;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *displaySO2;
    QLabel *displayPM10;
    QLabel *displayNO2;
    QLabel *displayO3;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QDateTimeEdit *endInterval;
    QDateTimeEdit *startInterval;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QSpinBox *sensorSpinBox;
    QPushButton *searchPushButton;
    QTableWidget *approximateTable;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1328, 920);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quickWidget = new QQuickWidget(centralWidget);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 941, 691));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        airCondition = new QLabel(centralWidget);
        airCondition->setObjectName(QStringLiteral("airCondition"));
        airCondition->setGeometry(QRect(950, 20, 301, 121));
        QFont font;
        font.setPointSize(37);
        font.setBold(true);
        font.setWeight(75);
        airCondition->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(950, 140, 111, 41));
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(950, 190, 351, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(16);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 1, 3, 1, 1);

        displaySO2 = new QLabel(gridLayoutWidget);
        displaySO2->setObjectName(QStringLiteral("displaySO2"));

        gridLayout->addWidget(displaySO2, 0, 4, 1, 1);

        displayPM10 = new QLabel(gridLayoutWidget);
        displayPM10->setObjectName(QStringLiteral("displayPM10"));

        gridLayout->addWidget(displayPM10, 1, 4, 1, 1);

        displayNO2 = new QLabel(gridLayoutWidget);
        displayNO2->setObjectName(QStringLiteral("displayNO2"));

        gridLayout->addWidget(displayNO2, 0, 2, 1, 1);

        displayO3 = new QLabel(gridLayoutWidget);
        displayO3->setObjectName(QStringLiteral("displayO3"));

        gridLayout->addWidget(displayO3, 1, 2, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(950, 400, 371, 101));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 371, 74));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);

        endInterval = new QDateTimeEdit(gridLayoutWidget_2);
        endInterval->setObjectName(QStringLiteral("endInterval"));
        endInterval->setDate(QDate(2017, 1, 1));
        endInterval->setMaximumDate(QDate(2017, 7, 31));
        endInterval->setMinimumDate(QDate(2017, 1, 1));

        gridLayout_2->addWidget(endInterval, 1, 1, 1, 1);

        startInterval = new QDateTimeEdit(gridLayoutWidget_2);
        startInterval->setObjectName(QStringLiteral("startInterval"));
        startInterval->setDate(QDate(2017, 1, 1));
        startInterval->setMaximumDate(QDate(2017, 7, 31));
        startInterval->setMinimumDate(QDate(2017, 1, 1));

        gridLayout_2->addWidget(startInterval, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(970, 510, 101, 51));
        sensorSpinBox = new QSpinBox(groupBox_2);
        sensorSpinBox->setObjectName(QStringLiteral("sensorSpinBox"));
        sensorSpinBox->setGeometry(QRect(0, 20, 101, 31));
        sensorSpinBox->setMaximum(9);
        searchPushButton = new QPushButton(centralWidget);
        searchPushButton->setObjectName(QStringLiteral("searchPushButton"));
        searchPushButton->setGeometry(QRect(960, 650, 121, 41));
        approximateTable = new QTableWidget(centralWidget);
        if (approximateTable->columnCount() < 6)
            approximateTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QStringLiteral("Sensors"));
        approximateTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        approximateTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        approximateTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        approximateTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        approximateTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        approximateTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        approximateTable->setObjectName(QStringLiteral("approximateTable"));
        approximateTable->setGeometry(QRect(10, 710, 631, 111));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(650, 730, 161, 71));
        label_8->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1328, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        airCondition->setText(QApplication::translate("MainWindow", "airCondition", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Attribute", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "O3", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "No2", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "SO2", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "PM10", Q_NULLPTR));
        displaySO2->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        displayPM10->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        displayNO2->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        displayO3->setText(QApplication::translate("MainWindow", "NULL", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Time Interval", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "End", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Sensor", Q_NULLPTR));
        searchPushButton->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = approximateTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "O3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = approximateTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "NO2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = approximateTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "SO2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = approximateTable->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "PM10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = approximateTable->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Average", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Approximation of sensors that has similar behaviours within the timespan", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
