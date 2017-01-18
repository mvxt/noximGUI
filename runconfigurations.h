#ifndef RUNCONFIGURATIONS_H
#define RUNCONFIGURATIONS_H

#include <fstream>
#include <iostream>
#include <string>

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <QDialog>
#include <QFileDialog>
#include <QListWidget>
#include <QMessageBox>
#include <QStringListModel>
#include <yaml.h>

namespace Ui {
    class RunConfigurations;
}

class RunConfigurations : public QDialog
{
    Q_OBJECT

  public:
    // Constructor
    explicit RunConfigurations( QWidget *parent = 0 );

    // Destructor
    ~RunConfigurations();

    // Returns current settings selected in runConfigs, called by mainWindow
    YAML::Node getSettings();

    // Loads all currently available power configs, called by constructor
    void populateAvailablePowerConfigs();

    // Sets current runconfig settings based on info passed from mainWindow
    void setSettings( YAML::Node configs );

    // Sets currently selected power config based on info passed from mainWindow
    void setCurrentPowerConfig( std::string current );

  private slots:
    // User pressed ok
    void on_Confirm_ButtonBox_accepted();

    // User pressed cancel
    void on_Confirm_ButtonBox_rejected();

    // User clicked to enable/disable trace mode
    void on_Trace_Mode_CheckBox_clicked();

    // User clicked to locate a trace file
    void on_Trace_Mode_File_PushButton_clicked();

    // User clicked to enable/disable wireless configs
    void on_Wireless_CheckBox_clicked();

    // User clicked to add a power configuration
    void on_Power_Configuration_Add_PushButton_clicked();

    // User clicked to delete a power configurationc
    void on_Power_Configuration_Delete_PushButton_clicked();

    // User clicked to edit a power configuration
    void on_Power_Configuration_Edit_PushButton_clicked();

  private:
    Ui::RunConfigurations *ui;
    QStringListModel *model;
    std::string POWER_DIR = QDir::currentPath().toStdString() + "/pwr";
    std::string DEFAULT_PWR_CONFIG = ":/assets/default_power.yaml";
    QStringList configList; // List of power configs + default
    QStringListModel *pwrModel; // Stringlist model of power configs
};

#endif // RUNCONFIGURATIONS_H
