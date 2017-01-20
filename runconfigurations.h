#ifndef RUNCONFIGURATIONS_H
#define RUNCONFIGURATIONS_H

#include <fstream>
#include <iostream>
#include <string>

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <QDesktopServices>
#include <QDialog>
#include <QFileDialog>
#include <QListWidget>
#include <QMessageBox>
#include <QObject>
#include <QStringListModel>
#include <QTextEdit>
#include <QTextStream>
#include <QVector>
#include <yaml.h>

namespace Ui {
    class RunConfigurations;
}

class PowerModel;

class RunConfigurations : public QDialog
{
    Q_OBJECT

    // PowerModel should have access to everything in RunConfigurations
    friend class PowerModel;

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

    // Static string for default power config path
    static QString DEFAULT_PWR_CONFIG;

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
    std::string POWER_DIR = QDir::currentPath().toStdString() + "/pwr";
    QStringList configList; // List of power configs + default
    PowerModel *pwrModel; // Stringlist model of power configs

    // Convenience method to return full path name of given shortname
    static QString getFullPath( QString shortName );
};

/**
 * @brief The PowerModel class, inherits QStringListModel
 */
class PowerModel : public QStringListModel
{
  public:
    PowerModel ( QObject * parent = 0 ) : QStringListModel( parent ) {}

    // Reimplemented setData method for custom purposes
    //  When user changes items in the power config, create/delete or move files accordingly
    virtual bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole )
    {
        // Custom actions to create/delete corresponding power files
        if ( role == Qt::EditRole || role == Qt::DisplayRole )
        {
            QString oldName = index.data().toString();
            QString newName = value.toString();

            // If newname is null, do nothing and return false
            if ( newName.isNull() || newName.isEmpty() )
            {
                return false;
            }

            // New config file
            if ( oldName.isEmpty() && !newName.isEmpty() )
            {
                // Copy from default config
                QFile::copy( RunConfigurations::DEFAULT_PWR_CONFIG,
                             RunConfigurations::getFullPath( newName ) );

                // Set permissions
                QFile newFile( RunConfigurations::getFullPath( newName ) );
                newFile.setPermissions( QFile::ReadOwner | QFile::WriteOwner |
                                        QFile::ReadUser | QFile::WriteUser |
                                        QFile::ReadGroup | QFile::WriteGroup );
            }
            else if ( !oldName.isEmpty() && !newName.isEmpty() ) // Move files
            {
                // Copy from old config
                QFile::copy( RunConfigurations::getFullPath( oldName ),
                             RunConfigurations::getFullPath( newName ) );

                // Remove old config
                QFile oldFile( RunConfigurations::getFullPath( oldName ) );
                oldFile.remove();

                // Set permissions
                QFile newFile( RunConfigurations::getFullPath( newName ) );
                newFile.setPermissions( QFile::ReadOwner | QFile::WriteOwner |
                                        QFile::ReadUser | QFile::WriteUser |
                                        QFile::ReadGroup | QFile::WriteGroup );
            }
        }

        return QStringListModel::setData(index, value, role);
    }
};

#endif // RUNCONFIGURATIONS_H
