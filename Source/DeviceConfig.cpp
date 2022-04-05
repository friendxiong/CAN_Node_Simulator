#include "../Header/DeviceConfig.h"
#include "ui_DeviceConfig.h"
#include <QMessageBox>

DeviceConfig::DeviceConfig(QWidget *parent):
    QDialog(parent),
    ui(new Ui::DeviceConfig)
{
    ui->setupUi(this);
}

DeviceConfig::~DeviceConfig()
{
    delete ui;
}

void DeviceConfig::on_Accept_Bt_clicked()
{

}

void DeviceConfig::on_Accept_StartCAN_Bt_clicked()
{
    QMessageBox MsgBox;
    MsgBox.setText("hello");
    MsgBox.exec();
}

void DeviceConfig::on_Cancel_Bt_clicked()
{
   this->close();
}
