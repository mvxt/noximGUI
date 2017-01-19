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
#include <QObject>
#include <QStringListModel>
#include <QVector>
#include <yaml.h>

namespace Ui {
    class RunConfigurations;
}

class PowerModel;

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

    // User changed a power config in the listview
    void on_pwrModel_dataChanged( const QModelIndex &topLeft,
                                  const QModelIndex &bottomRight );

  private:
    Ui::RunConfigurations *ui;
    std::string POWER_DIR = QDir::currentPath().toStdString() + "/pwr";
    QString DEFAULT_PWR_CONFIG = ":/assets/default_power.yaml";
    QStringList configList; // List of power configs + default
    PowerModel *pwrModel; // Stringlist model of power configs

    // Convenience method to return full path name of given shortname
    QString getFullPath( QString shortName );
};

class PowerModel : public QStringListModel
{
  public:
    PowerModel ( QObject * parent = 0 ) : QStringListModel( parent ) {}

    // Reimplemented setData method
    virtual bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole )
    {
        // backup the previous model data
        if ( role == Qt::EditRole || role == Qt::DisplayRole )
        {
            std::cout << "OLD CONTENTS: " << index.data().toString().toStdString() << std::endl;
            std::cout << "NEW CONTENTS: " << value.toString().toStdString() << std::endl;
            QStringListModel::setData(index, index.data(), Qt::UserRole + 1 );
        }

        return QStringListModel::setData(index, value, role);
    }
};

#endif // RUNCONFIGURATIONS_H
