#include "../Header/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionUSBCAN1_triggered()
{
    DeviceConfig *pDeviceConfig = new DeviceConfig(this);
    pDeviceConfig->show();
}

void MainWindow::on_actionUSBCAN2_triggered()
{
    DeviceConfig *pDeviceConfig = new DeviceConfig(this);
    pDeviceConfig->show();
}
