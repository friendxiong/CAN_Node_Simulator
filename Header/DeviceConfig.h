#ifndef DEVICECONFIG_H
#define DEVICECONFIG_H
#include <QDialog>
namespace Ui {
class DeviceConfig;
}

class DeviceConfig : public QDialog
{
  Q_OBJECT
public:
    explicit DeviceConfig(QWidget *parent = 0);
    ~DeviceConfig();
private slots:

    void on_Accept_Bt_clicked();

    void on_Accept_StartCAN_Bt_clicked();

    void on_Cancel_Bt_clicked();

private:
    Ui::DeviceConfig *ui;
};




#endif // UI_DEVICECONFIG_H
