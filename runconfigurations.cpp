#include "runconfigurations.h"
#include "ui_runconfigurations.h"

QString RunConfigurations::DEFAULT_PWR_CONFIG = ":/assets/default_power.yaml";

/**
 * @brief Constructor for the class
 */
RunConfigurations::RunConfigurations( QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::RunConfigurations)
{
    ui->setupUi(this);

    // Power configurations
    populateAvailablePowerConfigs();
}

/**
 * @brief Destructor
 */
RunConfigurations::~RunConfigurations()
{
    delete ui;
}

/**
 * @brief Convenience method to return full path of power file, given its shortname
 * @param shortName
 */
QString RunConfigurations::getFullPath( QString shortName )
{
    return QDir::currentPath() + "/pwr/" + shortName;
}

/**
 * @brief Gets all settings from the window and returns.
 *           Called by the mainWindow
 * @return
 */
YAML::Node RunConfigurations::getSettings()
{
    YAML::Node newConfigs;

    // Enable wireless
    newConfigs["use_winoc"] = ui->Wireless_CheckBox->isChecked();

    // Wireless power saving mode
    newConfigs["use_wirxsleep"] = ui->Power_Saving_Mode_CheckBox->isChecked();

    // Detailed output
    newConfigs["detailed"] = ui->Detailed_Output_Checkbox->isChecked();

    // Verbose mode
    newConfigs["verbose_mode"] = ui->Verbose_ComboBox->currentText().toStdString();

    // Trace mode
    newConfigs["trace_mode"] = ui->Trace_Mode_CheckBox->isChecked();
    newConfigs["trace_filename"] = ui->Trace_Mode_File_LineEdit
                                     ->text().toStdString();

    // Power config
    QModelIndex selected = ui->Power_Configuration_ListView->currentIndex();
    newConfigs["power_config"] = ((QString) selected.data().toString()).toStdString();

    return newConfigs;
}

/**
 * @brief Sets all of options before loading run configs window
 */
void RunConfigurations::setSettings( YAML::Node configs )
{
    // Enable wireless
    (bool) configs["use_winoc"].as<bool>() ?
                ui->Wireless_CheckBox->setChecked( true ) :
                ui->Wireless_CheckBox->setChecked( false );

    // Wireless power saving mode
    (bool) configs["use_wirxsleep"].as<bool>() ?
                ui->Power_Saving_Mode_CheckBox->setChecked( true ) :
                ui->Power_Saving_Mode_CheckBox->setChecked( false );

    // Detailed output
    (bool) configs["detailed"].as<bool>() ?
                ui->Detailed_Output_Checkbox->setChecked( true ) :
                ui->Detailed_Output_Checkbox->setChecked( false );

    // Verbose mode
    QStringList availableVerbosityLevels;
    availableVerbosityLevels << "VERBOSE_OFF" << "VERBOSE_LOW"
                             << "VERBOSE_MEDIUM" << "VERBOSE_HIGH";
    ui->Verbose_ComboBox->addItems( availableVerbosityLevels );
    std::string verboseString = configs["verbose_mode"].as<std::string>();
    int verboseIndex = ui->Verbose_ComboBox
                         ->findText( QString::fromStdString( verboseString ) );
    verboseIndex >= 0 ? ui->Verbose_ComboBox->setCurrentIndex( verboseIndex ) :
                        ui->Verbose_ComboBox->setCurrentIndex( 0 );

    // Random number auto-generates each time
    int seed = rand();
    ui->Random_Number_Seed_SpinBox->setRange( 0, RAND_MAX );
    ui->Random_Number_Seed_SpinBox->setValue( seed );

    // Trace mode
    bool traceEnabled = (bool) configs["trace_mode"].as<bool>();
    traceEnabled ? ui->Trace_Mode_CheckBox->setChecked( true ) :
                   ui->Trace_Mode_CheckBox->setChecked( false );
    traceEnabled ? ui->Trace_Mode_File_Widget->setDisabled( false ) :
                   ui->Trace_Mode_File_Widget->setDisabled( true );
    std::string traceFile = configs["trace_filename"].as<std::string>();
    ui->Trace_Mode_File_LineEdit->setText( QString::fromStdString( traceFile ) );
}

/**
 * @brief Populates the list of power configurations by reading power
 *          config files from /pwr folder, if exists. If not, creates it.
 *          Code is modified from answer by Duoas on Cplusplus.com
 *          (http://www.cplusplus.com/forum/beginner/10292/).
 *
 */
void RunConfigurations::populateAvailablePowerConfigs()
{
    pwrModel = new PowerModel( this );
    std::string filepath;
    DIR *dp;
    struct dirent *dirp;
    struct stat filestat;
    bool dirExists = false;

    dp = opendir( POWER_DIR.c_str() );

    // Folder doesn't exist, create it
    if (dp == NULL)
    {
        int mkdirResult = mkdir( POWER_DIR.c_str(),
                                 S_IRUSR | S_IWUSR | S_IXUSR |
                                 S_IRGRP | S_IWGRP | S_IXGRP |
                                 S_IROTH | S_IXOTH );

        if ( mkdirResult == EACCES )
        {
            QMessageBox::warning( NULL,
                                  QString( "NoximGUI" ),
                                  QString( "Error creating power configurations"
                                           "directory. Please check your"
                                           "permissions. For now, power"
                                           "configs will be limited to default"
                                           "values only." ) );
        }
        else if ( mkdirResult == EROFS )
        {
            QMessageBox::warning( NULL,
                                  QString( "NoximGUI" ),
                                  QString( "Your filesystem is set to readonly: "
                                           "cannot create power config folder."
                                           "Power configs limited to default"
                                           "values only." ) );
        }
        else if ( mkdirResult == ENOSPC )
        {
            QMessageBox::warning( NULL,
                                  QString( "NoximGUI" ),
                                  QString( "Your filesystem is full: cannot "
                                           "create power config folder."
                                           "Power configs limited to default"
                                           "values only." ) );
        }
        else
        {
            dirExists = true;
        }
    }
    else
    {
        dirExists = true;
    }

    configList << "default"; // Always add default power configuration

    if ( dirExists )
    {
        while ( ( dirp = readdir( dp ) ) )
        {
            filepath = POWER_DIR + "/" + dirp->d_name;

            // If the file is a directory (or is in some way invalid) we'll skip it
            if ( stat( filepath.c_str(), &filestat ) )
            {
                continue;
            }
            if ( S_ISDIR( filestat.st_mode ) )
            {
                continue;
            }

            // Print filepaths for debugging
            std::cout << filepath << std::endl;

            configList << dirp->d_name;
        }

        closedir( dp );

        // Enable add, delete, edit buttons for power configs, allow selecting power configs
        ui->Power_Configuration_Add_PushButton->setDisabled( false );
        ui->Power_Configuration_Delete_PushButton->setDisabled( false );
        ui->Power_Configuration_Edit_PushButton->setDisabled( false );
        ui->Power_Configuration_ListView->setDisabled( false );
    }
    else
    {
        // Disable adding, deleting, and editing configs
        ui->Power_Configuration_Add_PushButton->setDisabled( true );
        ui->Power_Configuration_Delete_PushButton->setDisabled( true );
        ui->Power_Configuration_Edit_PushButton->setDisabled( true );

        // Disable selecting anything in list
        ui->Power_Configuration_ListView->setDisabled( true );
    }

    // Populate model
    pwrModel->setStringList( configList );

    // Connect model and view together
    ui->Power_Configuration_ListView->setModel( pwrModel );

    // Only one item selectable at a time
    ui->Power_Configuration_ListView->setSelectionMode( QAbstractItemView::SingleSelection );

    // Enable editing power config name by double-click
    ui->Power_Configuration_ListView->setEditTriggers( QAbstractItemView::SelectedClicked );
}

/**
 * @brief Sets currently-selected power config
 *
 */
void RunConfigurations::setCurrentPowerConfig( std::string current )
{
    // TODO: Get ModelIndex of currently selected power config and set it as selected in ListWidget
    QRegExp regEx( QString::fromStdString( current ) );
    int index = pwrModel->stringList().indexOf( regEx );
    QModelIndex modelIndex = pwrModel->index( index );
    ui->Power_Configuration_ListView->setCurrentIndex( modelIndex );
}

/**
 * @brief User clicked ok, call accept() to gracefully close
 */
void RunConfigurations::on_Confirm_ButtonBox_accepted()
{
    QModelIndex selected = ui->Power_Configuration_ListView->currentIndex();
    QString selectedString = (QString) selected.data().toString();
    if ( selectedString.isEmpty() )
    {
        QMessageBox::warning( NULL,
                              QString( "NoximGUI" ),
                              QString( "You must select a power configuration." ) );
    }
    else
    {
        this->accept();
    }
}

/**
 * @brief User clicked cancel, call reject() to gracefully close
 */
void RunConfigurations::on_Confirm_ButtonBox_rejected()
{
    this->reject();
}

/**
 * @brief User checked/unchecked the trace mode, disable/enable UI accordingly
 */
void RunConfigurations::on_Trace_Mode_CheckBox_clicked()
{
    bool traceEnabled = ui->Trace_Mode_CheckBox->isChecked();
    traceEnabled ? ui->Trace_Mode_File_Widget->setDisabled( false ) :
                   ui->Trace_Mode_File_Widget->setDisabled( true );
}

/**
 * @brief User selecting trace file to save traces to
 */
void RunConfigurations::on_Trace_Mode_File_PushButton_clicked()
{

    QFileDialog dialog;
    dialog.setDefaultSuffix("vcd");
    QString saveTraceFileName = dialog.getSaveFileName( this,
                                                        tr("Save trace to file"),
                                                        QDir::currentPath(),
                                                        tr("Text Files (*.txt)") );
    if ( saveTraceFileName.isNull() )
    {
        // User canceled, do nothing
    }
    else if ( saveTraceFileName.isEmpty() )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Name cannot be blank." ) );
    }
    else
    {
        ui->Trace_Mode_File_LineEdit->setText( saveTraceFileName );
    }
}

/**
 * @brief If wireless enabled, enable checking of wireless low power mode
 */
void RunConfigurations::on_Wireless_CheckBox_clicked()
{
    bool wirelessEnabled = ui->Wireless_CheckBox->isChecked();
    wirelessEnabled ? ui->Power_Saving_Mode_CheckBox->setDisabled( false ) :
                      ui->Power_Saving_Mode_CheckBox->setDisabled( true );
}

/**
 * @brief User adding new power config. Add to end
 */
void RunConfigurations::on_Power_Configuration_Add_PushButton_clicked()
{
    // Get position, add row
    int row = pwrModel->rowCount();
    pwrModel->insertRows( row, 1 );

    // Get the row for Edit mode
    QModelIndex index = pwrModel->index( row );
    ui->Power_Configuration_ListView->setCurrentIndex( index );
    ui->Power_Configuration_ListView->edit( index );
}

/**
 * @brief User deleting a power config
 */
void RunConfigurations::on_Power_Configuration_Delete_PushButton_clicked()
{
    QModelIndex selected = ui->Power_Configuration_ListView->currentIndex();
    QString pwrShortName = (QString) selected.data().toString();
    if ( pwrShortName == "default" )
    {
        QMessageBox::warning( NULL,
                              QString( "NoximGUI" ),
                              QString( "You can't delete the default configuration." ) );
    }
    else
    {
        int row = ui->Power_Configuration_ListView->currentIndex().row();
        pwrModel->removeRows( row, 1 );
        ui->Power_Configuration_ListView->update();

        std::cout << "SANITY CHECK: " << RunConfigurations::getFullPath( pwrShortName ).toStdString();
        QFile deleteFile( RunConfigurations::getFullPath( pwrShortName ) );
        deleteFile.remove();
    }
}

/**
 * @brief User wants to edit a specific power config
 */
void RunConfigurations::on_Power_Configuration_Edit_PushButton_clicked()
{
    // Checks that the currently selected item isn't 'default'.
    QModelIndex selected = ui->Power_Configuration_ListView->currentIndex();
    QString newPwrShortName = (QString) selected.data().toString();
    if ( newPwrShortName == "default" )
    {
        QMessageBox::warning( NULL,
                              QString( "NoximGUI" ),
                              QString( "You can't edit the default configuration." ) );
    }
    else
    {
        // OK, now open the corresponding file in a text editor
        QString newPwrFileName = getFullPath( newPwrShortName );
        // TODO
        // OPEN FILE newPwrFileName IN TEXTEDITOR
        //    std::cout << newPwrString.toStdString();
        // opens corresponding file in a text editor
    }
}

