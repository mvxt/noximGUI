#ifndef RUNCONFIGURATIONS_H
#define RUNCONFIGURATIONS_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include <yaml.h>

namespace Ui {
class RunConfigurations;
}

class RunConfigurations : public QDialog
{
    Q_OBJECT

public:
    explicit RunConfigurations( QWidget *parent = 0 );
    YAML::Node getSettings();
    void setSettings( YAML::Node configs );
    ~RunConfigurations();

private slots:
    void on_Confirm_ButtonBox_accepted();

    void on_Confirm_ButtonBox_rejected();

    void on_Trace_Mode_CheckBox_clicked();

    void on_Trace_Mode_File_PushButton_clicked();

    void on_Wireless_CheckBox_clicked();

    void on_Power_Configuration_Add_PushButton_clicked();

    void on_Power_Configuration_Delete_PushButton_clicked();

    void on_Power_Configuration_Edit_PushButton_clicked();

private:
    Ui::RunConfigurations *ui;
};

#endif // RUNCONFIGURATIONS_H
