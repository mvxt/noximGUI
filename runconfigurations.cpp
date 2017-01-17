#include "runconfigurations.h"
#include "ui_runconfigurations.h"

/**
 * @brief Constructor for the class
 */
RunConfigurations::RunConfigurations( QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::RunConfigurations)
{
    ui->setupUi(this);
}

/**
 * @brief Destructor
 */
RunConfigurations::~RunConfigurations()
{
    delete ui;
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

    // Power configurations
    listPowerConfigs();
}

/**
 * @brief User clicked ok
 */
void RunConfigurations::on_Confirm_ButtonBox_accepted()
{
    this->accept();
}

/**
 * @brief User clicked cancel
 */
void RunConfigurations::on_Confirm_ButtonBox_rejected()
{
    this->reject();
}

/**
 * @brief User checked/unchecked the trace mode
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
    bool wirlessEnabled = ui->Wireless_CheckBox->isChecked();
    wirlessEnabled ? ui->Power_Saving_Mode_CheckBox->setDisabled( false ) :
                   ui->Power_Saving_Mode_CheckBox->setDisabled( true );
}

/**
 * @brief User adding new power config
 */
void RunConfigurations::on_Power_Configuration_Add_PushButton_clicked()
{

}

/**
 * @brief User deleting a power config
 */
void RunConfigurations::on_Power_Configuration_Delete_PushButton_clicked()
{

}

/**
 * @brief User wants to edit a specific power config
 */
void RunConfigurations::on_Power_Configuration_Edit_PushButton_clicked()
{

}
