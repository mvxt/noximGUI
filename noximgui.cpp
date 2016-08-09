#include "noximgui.h"
#include "ui_noximgui.h"
#include "outputdialog.h"

#include <iostream>
/**
 * @brief CTOR for main noximGUI window. Sets up noximgui.ui, sets global variables
 */
NoximGUI::NoximGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoximGUI)
{
    NoximGUI::guiConfigFileName = "gui_config.yaml";
    NoximGUI::execConfigName = "Executable";
    NoximGUI::noximConfigFileName = "default_config.yaml";

    if( getNoximExecutable() )
    {
        setDefaultNoximConfig();
    }
    else
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Must specify location of Noxim executable to use GUI." ) );
        exit( EXIT_FAILURE );
    }

    ui->setupUi(this);

    // Sets all of the vectors with appropriate parameters
    populateLists();

    // Uses vectors to set comboboxes
    populateComboBoxes();

    // Sets the universal parameters
    populateUniversalParams();

    // Sets specialized parameters which may be depended on by other parameters
    populateDependentParams();

    this->show();
}

/**
 * @brief DTOR for main NoximGUI window
 */
NoximGUI::~NoximGUI()
{
    delete ui;
}

/**
 * @brief Dialog to select noxim executable file from filesystem
 */
bool NoximGUI::getNoximExecutable()
{
    QString qFileName = "";

    QFileDialog dialog;

    // Check if gui_config.yaml exists
    //   If no, ask for executable and set new
    //   If yes, then read result from gui_config.yaml
    if ( !this->noximExecSet() )
    {
        dialog.setFileMode(QFileDialog::ExistingFile);
        qFileName = dialog.getOpenFileName( 0, "Select Noxim Executable" );
        bool setResult = setGUIConfig( qFileName );

        return setResult;
    }
    else
    {
        YAML::Node guiConfigNode = YAML::LoadFile( guiConfigFileName );
        if ( !guiConfigNode.IsNull()  )
        {
            std::string result = guiConfigNode[execConfigName].as<std::string>();
            return setGUIConfig( QString::fromStdString( result ) );
        }
        return false;
    }
    return false;
}

/**
 * @brief Method to set the noximExec. If name is empty, return false.
 * @param fileName - string representing file's fully qualified name in QString object
 */
bool NoximGUI::setGUIConfig( QString fileName )
{
    if ( fileName.isEmpty() || fileName.isNull() )
    {
        return false;
    }

    this->guiConfigNode[execConfigName] = fileName.toStdString();
    return writeGUIConfig();
}

/**
 * @brief Method to write to gui_config.yaml. If name is empty, return false.
 * @param fileName - string representing file's fully qualified name in QString object
 */
bool NoximGUI::writeGUIConfig()
{
    std::ofstream fout( guiConfigFileName.c_str() );
    if ( fout == NULL )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Error saving preferences file. Check your system settings." ) );
        return false;
    }
    fout << guiConfigNode;
    fout.close();

    return true;
}

/**
 * @brief Method to set default noxim config. Calls setNoximConfig().
 */
bool NoximGUI::setDefaultNoximConfig()
{
    std::cout << noximConfigFileName << std::endl;
    return setNoximConfig( QString::fromStdString( noximConfigFileName ) );
}

/**
 * @brief Method to specify noxim config. If file is empty, return false
 * @param fileName - string representing file's fully qualified name in QString object
 *
 * @return bool
 */
bool NoximGUI::setNoximConfig( QString fileName )
{
    noximConfigNode = YAML::LoadFile( fileName.toStdString() );
    if ( noximConfigNode.IsNull() )
    {
        return false;
    }
    noximConfigFileName = fileName.toStdString();
    return true;
}

/**
 * @brief Method to write noxim config to file.
 *
 * @return bool
 */
bool NoximGUI::writeNoximConfig( QString fileName )
{
    if ( fileName.isEmpty() || fileName.isNull() )
    {
        return false;
    }

    std::ofstream fout( fileName.toStdString().c_str() );
    fout << noximConfigNode;
    fout.close();

    noximConfigFileName = fileName.toStdString();

    return true;
}

/**
 * @brief Private method to populate comboboxes for UI
 */
void NoximGUI::populateComboBoxes()
{
    ui->Packet_Injection_ComboBox->addItems( packetInjectionTypes );
    ui->Algorithm_ComboBox->addItems( routingTypes );
    ui->Selection_Strategy_ComboBox->addItems( selectionStrategies );
    ui->Traffic_Pattern_ComboBox->addItems( trafficTypes );
}

/**
 * @brief Private method to populate vectors with appropriate values
 */
void NoximGUI::populateLists()
{
    // Set QStringList for packet injection types
    packetInjectionTypes << "Poisson" << "Burst" << "Pareto";

    // Set vector for routing types
    routingTypes << "XY" << "WEST_FIRST" << "NORTH_LAST" <<
                    "NEGATIVE_FIRST" << "ODD_EVEN" << "DYAD" <<
                    "TABLE_BASED";

    // Set vector for selection strategies
    selectionStrategies << "RANDOM" << "BUFFER_LEVEL" <<
                           "NOP";

    // Set vector for traffic types
    trafficTypes << "TRAFFIC_RANDOM" << "TRAFFIC_TRANSPOSE1" <<
                    "TRAFFIC_TRANSPOSE2" << "TRAFFIC_BIT_REVERSAL" <<
                    "TRAFFIC_SHUFFLE" << "TRAFFIC_BUTTERFLY" <<
                    "TRAFFIC_LOCAL" << "TRAFFIC_ULOCAL" << "TRAFFIC_TABLE_BASED";
}

/**
 * @brief Private method to populate dependent fields (changes other params)
 */
void NoximGUI::populateDependentParams()
{
}

/**
 * @brief Private method to populate universal fields (shared by all configs)
 */
void NoximGUI::populateUniversalParams()
{
    // X & Y mesh dimensions
    ui->X_Edit->setText( QString::fromStdString( noximConfigNode["mesh_dim_x"].as<std::string>() ) );
    ui->Y_Edit->setText( QString::fromStdString( noximConfigNode["mesh_dim_y"].as<std::string>() ) );

    // Buffer depth
    ui->Depth_Edit->setText( QString::fromStdString( noximConfigNode["buffer_depth"].as<std::string>() ) );

    // Flit size
    ui->Flit_Size_Edit->setText( QString::fromStdString( noximConfigNode["flit_size"].as<std::string>() ) );

    // Wired connection lengths
    ui->RH_Length_Edit->setText( QString::fromStdString( noximConfigNode["r2h_link_length"].as<std::string>() ) );
    ui->RR_Length_Edit->setText( QString::fromStdString( noximConfigNode["r2r_link_length"].as<std::string>() ) );

    // Clock options
    ui->Clock_Period_Edit->setText( QString::fromStdString( noximConfigNode["clock_period_ps"].as<std::string>() ) );
    ui->Simulation_Time_Edit->setText( QString::fromStdString( noximConfigNode["simulation_time"].as<std::string>() ) );
    ui->Warmup_Time_Edit->setText( QString::fromStdString( noximConfigNode["stats_warm_up_time"].as<std::string>() ) );
    ui->Reset_Time_Edit->setText( QString::fromStdString( noximConfigNode["reset_time"].as<std::string>() ) );
    ui->Delivery_Stop_Edit->setText( QString::fromStdString( noximConfigNode["max_volume_to_be_drained"].as<std::string>() ) );

    // Packet Options
    ui->Min_Packet_Size_Edit->setText( QString::fromStdString( noximConfigNode["min_packet_size"].as<std::string>() ) );
    ui->Max_Packet_Size_Edit->setText( QString::fromStdString( noximConfigNode["max_packet_size"].as<std::string>() ) );
    ui->Retransmission_Edit->setText( QString::fromStdString( noximConfigNode["probability_of_retransmission"].as<std::string>() ) );
    ui->Packet_Injection_Edit->setText( QString::fromStdString( noximConfigNode["packet_injection_rate"].as<std::string>() ) );

    // Disable unsupported features
    ui->Wireless_CheckBox->setDisabled( true );
    ui->Wireless_Config_Widget->setDisabled( true );
    ui->Packet_Injection_Edit_2->setDisabled( true );
    ui->Packet_Injection_Edit_3->setDisabled( true );
    ui->Packet_Injection_Edit_4->setDisabled( true );
}

/**
 * @brief Private method to check if a gui config already exists
 */
bool NoximGUI::noximExecSet()
{
    struct stat buffer;
    return ( stat( "gui_config.yaml", &buffer ) == 0 );
}

/**
 * @brief Private method to populate noximConfigNode with field items
 */
void NoximGUI::updateNoximConfigNode()
{
    // X & Y mesh dimensions
    noximConfigNode["mesh_dim_x"] = ui->X_Edit->toPlainText().toStdString();
    noximConfigNode["mesh_dim_y"] = ui->Y_Edit->toPlainText().toStdString();

    // Buffer depth
    noximConfigNode["buffer_depth"] = ui->Depth_Edit->toPlainText().toStdString();

    // Flit size
    noximConfigNode["flit_size"] = ui->Flit_Size_Edit->toPlainText().toStdString();

    // Wired connection lengths
    noximConfigNode["r2h_link_length"] = ui->RH_Length_Edit->toPlainText().toStdString();
    noximConfigNode["r2r_link_length"] = ui->RR_Length_Edit->toPlainText().toStdString();

    // Clock options
    noximConfigNode["clock_period_ps"] = ui->Clock_Period_Edit->toPlainText().toStdString();
    noximConfigNode["simulation_time"] = ui->Simulation_Time_Edit->toPlainText().toStdString();
    noximConfigNode["stats_warm_up_time"] = ui->Warmup_Time_Edit->toPlainText().toStdString();
    noximConfigNode["reset_time"] = ui->Reset_Time_Edit->toPlainText().toStdString();
    noximConfigNode["max_volume_to_be_drained"] = ui->Delivery_Stop_Edit->toPlainText().toStdString();

    // Packet Options
    noximConfigNode["min_packet_size"] = ui->Min_Packet_Size_Edit->toPlainText().toStdString();
    noximConfigNode["max_packet_size"] = ui->Max_Packet_Size_Edit->toPlainText().toStdString();
    noximConfigNode["probability_of_retransmission"] = ui->Retransmission_Edit->toPlainText().toStdString();
    noximConfigNode["packet_injection_rate"] = ui->Packet_Injection_Edit->toPlainText().toStdString();

    // Get currently selected items from comboboxes.
    noximConfigNode["routing_algorithm"] = ui->Algorithm_ComboBox->currentText().toStdString();
    noximConfigNode["selection_strategy"] = ui->Selection_Strategy_ComboBox->currentText().toStdString();
    noximConfigNode["traffic_distribution"] = ui->Traffic_Pattern_ComboBox->currentText().toStdString();
}

/**
 * @brief Private method to run the simulation when button pressed.
 */
void NoximGUI::on_actionRun_Simulation_triggered()
{
    updateNoximConfigNode();
//    std::string packetInjection = ui->Packet_Injection_ComboBox->currentText().toStdString();
//    std::transform( packetInjection.begin(), packetInjection.end(), packetInjection.begin(), ::tolower );

    // Save file as...
    QFileDialog dialog;

    dialog.setFileMode( QFileDialog::AnyFile );
    dialog.setModal( true );
    QString qFileName = dialog.getSaveFileName( 0, "Save configuration as...", "", ".yaml" );

    bool writeResult = writeNoximConfig( qFileName );
    if ( writeResult )
    {
        // Set arguments
        std::string config( "-config " + noximConfigFileName );
        dialog.setFileMode( QFileDialog::ExistingFile );
        QString qPowerFileName = dialog.getOpenFileName( 0, "Select power configuration file.", "" );

        std::string powerConfig( "-power " + qPowerFileName.toStdString() );
        std::string args = config + " " + powerConfig;
        std::string exec = guiConfigNode[execConfigName].as<std::string>() + " " + args;

        QProcess simulationProcess;
        simulationProcess.start( QString::fromStdString( exec ) );
        simulationProcess.waitForFinished();

        QTextStream out(stdout);
        QString stdout = simulationProcess.readAllStandardOutput();
        QString stderr = simulationProcess.readAllStandardError();
        out << stdout << "\n" << stderr << endl;

        OutputDialog outputDialog;
        outputDialog.showOutput( stdout );
        outputDialog.setModal( true);
        outputDialog.exec();
    }
    else
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "You must save the config file before simulations can run. Check your settings." ) );
    }
}

//    QTextStream out(stdout);
//    out << test << endl;
