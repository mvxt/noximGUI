#include "noximgui.h"
#include "ui_noximgui.h"
#include "outputdialog.h"
#include <QTimer>
#include <iostream>
/**
 * @brief CTOR for main noximGUI window. Sets up noximgui.ui, sets global variables
 */
NoximGUI::NoximGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoximGUI)
{
    // Force initialization of resources
    Q_INIT_RESOURCE(resources);

    // Sets default configuration files
    guiConfigFileName = "gui_config.yaml";
    execConfigName = "Executable";
    noximConfigFileName = ":/assets/default_config.yaml";
    powerConfigFileName = ":/assets/default_power.yaml";

    // Checks if user selected a file. If not, fails and exits with warning
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

    // Sets power config YAML Node
    if ( !populatePowerConfig( QString::fromStdString( NoximGUI::powerConfigFileName ) ) )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Error: Unable to locate default power config. Check installation." ) );
        exit( EXIT_FAILURE );
    }

    // Sets all of the vectors with appropriate parameters
    populateLists();

    // Uses vectors to set comboboxes
    populateComboBoxes();

    // Sets the universal parameters
    populateParams();

    // Finally, show splash screen and start program
    QImage splashImage;
    splashImage.load(":/assets/splash.png");
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap::fromImage(splashImage));
    splash->show();
    QTimer::singleShot(3000, splash, SLOT(close()));
    QTimer::singleShot(3000, this, SLOT(show()));
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
 *
 */
bool NoximGUI::getNoximExecutable()
{
    QString qFileName = "";

    QFileDialog dialog;

    // Check if gui_config.yaml exists
    //   If yes, check contents
    //     If contents good, load program
    //     If contents not good, ask for new executable location
    //  If no, ask for new executable location
    struct stat buffer;
    if ( stat( "gui_config.yaml", &buffer ) == 0 ) // File exists
    {
        YAML::Node guiConfigNode = YAML::LoadFile( guiConfigFileName );
        if ( !guiConfigNode.IsNull() )
        {
            std::string result = guiConfigNode[execConfigName].as<std::string>();
            return setGUIConfig( QString::fromStdString( result ) );
        }
    }
    dialog.setFileMode(QFileDialog::ExistingFile);
    qFileName = dialog.getOpenFileName( 0, "Select Noxim Executable" );
    bool setResult = setGUIConfig( qFileName );

    return setResult;
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
    std::ofstream fout( guiConfigFileName.c_str(), std::ofstream::out );
    if ( !fout.is_open() )
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
    return setNoximConfig( QString( ":/assets/default_config.yaml" ) );
}

/**
 * @brief Method to set noxim config
 * @param fileName - string representing file's fully qualified name in QString object
 *
 * @return bool
 */
bool NoximGUI::setNoximConfig( QString fileName )
{
    QFile file( fileName );
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    noximConfigNode = YAML::Load( in.readAll().toStdString() );
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
    Utils::writeYamlOrderedMaps(fout, noximConfigNode);
    fout.close();

    noximConfigFileName = fileName.toStdString();

    return true;
}

/**
 * @brief Method to write power config to file.
 *
 * @return bool
 */
bool NoximGUI::writePowerConfig( QString fileName )
{
    if ( fileName.isEmpty() || fileName.isNull() )
    {
        return false;
    }

    std::ofstream fout( fileName.toStdString().c_str() );
    Utils::writeYamlOrderedMaps(fout, powerConfigNode);
    fout.close();

    powerConfigFileName = fileName.toStdString();

    return true;
}

/**
 * @brief Private method to populate comboboxes for UI
 */
void NoximGUI::populateComboBoxes()
{
    // Buffer Depth Values
    ui->Depth_ComboBox->addItems( availableBufferDepthValues );
    // Flit Sizes
    ui->Flit_Size_ComboBox->addItems( availableFlitSizes );
    // Packet Injection Types
    ui->Packet_Injection_ComboBox->addItems( availablePacketInjectionTypes );
    // Routing Algorithms
    ui->Algorithm_ComboBox->addItems( availableRoutingTypes );
    // Selection strategies
    ui->Selection_Strategy_ComboBox->addItems( availableSelectionStrategies );
    // Traffic Pattern Types
    ui->Traffic_Pattern_ComboBox->addItems( availableTrafficTypes );
}

/**
 * @brief Private method to populate vectors with appropriate values
 */
void NoximGUI::populateLists()
{
    // Set QStringList for packet injection types
    availablePacketInjectionTypes << "Poisson" << "Burst" << "Pareto";
    std::sort( availablePacketInjectionTypes.begin(),
               availablePacketInjectionTypes.end() );

    // Set vector for selection strategies
    availableSelectionStrategies << "RANDOM" << "BUFFER_LEVEL" << "NOP";
    std::sort( availableSelectionStrategies.begin(),
               availableSelectionStrategies.end() );

    // Set vector for traffic types
    availableTrafficTypes << "TRAFFIC_RANDOM" << "TRAFFIC_TRANSPOSE1" <<
                    "TRAFFIC_TRANSPOSE2" << "TRAFFIC_BIT_REVERSAL" <<
                    "TRAFFIC_SHUFFLE" << "TRAFFIC_BUTTERFLY" <<
                    "TRAFFIC_LOCAL" << "TRAFFIC_ULOCAL" << "TRAFFIC_TABLE_BASED";
    std::sort( availableTrafficTypes.begin(),
               availableTrafficTypes.end() );

    // Set vector for connection lengths
    YAML::Node connectionLengthsNode = powerConfigNode["Energy"]["LinkBitLine"];
    for( std::size_t i = 0; i < connectionLengthsNode.size(); i++ )
    {
        QString temp = QString::fromStdString( connectionLengthsNode[i][0].as<std::string>() );
        if( std::find( availableConnectionLengths.begin(), availableConnectionLengths.end(),
                       temp ) == availableConnectionLengths.end() )
        {
            availableConnectionLengths << temp;
        }
    }
    std::sort( availableConnectionLengths.begin(), availableConnectionLengths.end() );

    // Set vector for routing types
    YAML::Node routingNode = powerConfigNode["Energy"]["Router"]["routing"];
    for( YAML::const_iterator it = routingNode.begin(); it != routingNode.end(); ++it )
    {
        QString temp = QString::fromStdString( it->first.as<std::string>() );
        availableRoutingTypes << temp;
    }
    std::sort( availableRoutingTypes.begin(), availableRoutingTypes.end() );

    // Set vector for flit sizes
    YAML::Node bufferNode = powerConfigNode["Energy"]["Buffer"];
    for( std::size_t i = 0; i < bufferNode.size(); i++ )
    {
        QString temp = QString::fromStdString( bufferNode[i][1].as<std::string>() );
        if( std::find( availableFlitSizes.begin(), availableFlitSizes.end(), temp ) == availableFlitSizes.end() )
        {
            availableFlitSizes << temp;
        }
    }
    std::sort( availableFlitSizes.begin(), availableFlitSizes.end(), Utils::convertAndCompare );

    // Set vector for buffer depth values
    for( std::size_t i = 0; i < bufferNode.size(); i++ )
    {
        QString temp = QString::fromStdString( bufferNode[i][0].as<std::string>() );
        if( std::find( availableBufferDepthValues.begin(), availableBufferDepthValues.end(), temp ) == availableBufferDepthValues.end() )
        {
            availableBufferDepthValues << temp;
        }
    }
    std::sort( availableBufferDepthValues.begin(), availableBufferDepthValues.end(), Utils::convertAndCompare );
}

/**
 * @brief Private method to populate YAML power config node
 */
bool NoximGUI::populatePowerConfig( QString fileName )
{
    QFile file( fileName );
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    NoximGUI::powerConfigNode = YAML::Load( in.readAll().toStdString() );
    powerConfigFileName = fileName.toStdString();
    return powerConfigNode.IsNull() ? false : true;
}

/**
 * @brief Private method to populate menu fields w/ defaults or with loaded config file
 */
void NoximGUI::populateParams()
{
    // Simulation Parameters
    // Clock options
    ui->Clock_Period_SpinBox->setRange( 0, this->MAX );
    ui->Clock_Period_SpinBox->setValue( std::stoi( noximConfigNode["clock_period_ps"].as<std::string>() ) );
    // Set minimum to warmup time, since clock cycle must be larger than warmup time
    ui->Simulation_Time_SpinBox->setRange( 0, this->MAX );
    ui->Simulation_Time_SpinBox->setValue( std::stoi( noximConfigNode["simulation_time"].as<std::string>() ) );
    ui->Warmup_Time_SpinBox->setRange( 0, this->MAX );
    ui->Warmup_Time_SpinBox->setValue( std::stoi( noximConfigNode["stats_warm_up_time"].as<std::string>() ) );
    ui->Reset_Time_SpinBox->setRange( 0, this->MAX );
    ui->Reset_Time_SpinBox->setValue( std::stoi( noximConfigNode["reset_time"].as<std::string>() ) );
    ui->Delivery_Stop_SpinBox->setRange( 0, this->MAX );
    ui->Delivery_Stop_SpinBox->setValue( std::stoi( noximConfigNode["max_volume_to_be_drained"].as<std::string>() ) );
    // Packet Options
    ui->Min_Packet_Size_SpinBox->setRange( 1, this->MAX );
    ui->Min_Packet_Size_SpinBox->setValue( std::stoi( noximConfigNode["min_packet_size"].as<std::string>() ) );
    ui->Max_Packet_Size_SpinBox->setRange( 1, this->MAX );
    ui->Max_Packet_Size_SpinBox->setValue( std::stoi( noximConfigNode["max_packet_size"].as<std::string>() ) );
    ui->Retransmission_SpinBox->setRange( 0, 1 );
    ui->Retransmission_SpinBox->setSingleStep( 0.01 );
    ui->Retransmission_SpinBox->setValue( std::stod( noximConfigNode["probability_of_retransmission"].as<std::string>() ) );
    // Set packet injection params    
    ui->Packet_Injection_SpinBox->setRange( 0, 1 );
    ui->Packet_Injection_SpinBox->setSingleStep( 0.01 );
    ui->Packet_Injection_SpinBox->setValue( std::stod( noximConfigNode["packet_injection_rate"].as<std::string>() ) );
    // By default, set injection type to poisson and disable other two spinboxes
    int packetInjectionIndex = ui->Packet_Injection_ComboBox->findText( QString::fromStdString( "Poisson" ) );
    ui->Packet_Injection_ComboBox->setCurrentIndex( packetInjectionIndex );
    ui->Packet_Injection_SpinBox_Secondary->setRange( 0, 1 );
    ui->Packet_Injection_SpinBox_Secondary->setSingleStep( 0.01 );
    ui->Packet_Injection_SpinBox_Secondary->setDisabled( true );
    ui->Packet_Injection_SpinBox_Tertiary->setRange( 0, 1 );
    ui->Packet_Injection_SpinBox_Tertiary->setSingleStep( 0.01 );
    ui->Packet_Injection_SpinBox_Tertiary->setDisabled( true );
    ui->Packet_Injection_SpinBox_Quaternary->setRange( 0, 1 );
    ui->Packet_Injection_SpinBox_Quaternary->setSingleStep( 0.01 );
    ui->Packet_Injection_SpinBox_Quaternary->setDisabled( true );

    // Set default traffic
    ui->Traffic_Table_File_LineEdit->setText(
                QString::fromStdString(
                    noximConfigNode["traffic_table_filename"].as<std::string>() ) );

    std::string trafficString = noximConfigNode["traffic_distribution"].as<std::string>();
    int trafficIndex = ui->Traffic_Pattern_ComboBox->findText( QString::fromStdString( trafficString ) );
    if ( trafficIndex >= 0 )
    {
        ui->Traffic_Pattern_ComboBox->setCurrentIndex( trafficIndex );
        if ( trafficString.compare( "TRAFFIC_TABLE_BASED" ) != 0 )
        {
            ui->Traffic_Table_File_Widget->setDisabled( true );
        }
    }
    else
    {
        ui->Traffic_Pattern_ComboBox->setCurrentIndex( 0 );
    }

    // Wired Configuration
    // X & Y mesh dimensions
    ui->X_SpinBox->setRange( 4, this->MAX );
    ui->X_SpinBox->setValue( std::stoi( noximConfigNode["mesh_dim_x"].as<std::string>() ) );
    ui->Y_SpinBox->setRange( 4, this->MAX );
    ui->Y_SpinBox->setValue( std::stoi( noximConfigNode["mesh_dim_y"].as<std::string>() ) );

    // Buffer depth
    std::string bufferDepthString = noximConfigNode["buffer_depth"].as<std::string>();
    int bufferDepthIndex = ui->Depth_ComboBox->findText( QString::fromStdString( bufferDepthString ) );
    if ( bufferDepthIndex >= 0 )
    {
        ui->Depth_ComboBox->setCurrentIndex( bufferDepthIndex );
    }
    else
    {
        ui->Depth_ComboBox->setCurrentIndex( 0 );
    }

    // Flit size
    std::string flitSizeString = noximConfigNode["flit_size"].as<std::string>();
    int flitSizeIndex = ui->Flit_Size_ComboBox->findText( QString::fromStdString( flitSizeString ) );
    if ( flitSizeIndex >= 0 )
    {
        ui->Flit_Size_ComboBox->setCurrentIndex( flitSizeIndex );
    }
    else
    {
        ui->Flit_Size_ComboBox->setCurrentIndex( 0 );
    }

    // Connection Lengths
    double rhLengthMin = std::stod( this->availableConnectionLengths.first().toStdString() );
    double rhLengthMax = std::stod( this->availableConnectionLengths.back().toStdString() );
    ui->RH_Length_SpinBox->setRange( rhLengthMin, rhLengthMax );
    ui->RH_Length_SpinBox->setSingleStep( 0.5 );
    ui->RH_Length_SpinBox->setValue( std::stod( noximConfigNode["r2h_link_length"].as<std::string>() ) );

    double rrLengthMin = std::stod( this->availableConnectionLengths.first().toStdString() );
    double rrLengthMax = std::stod( this->availableConnectionLengths.back().toStdString() );
    ui->RR_Length_SpinBox->setRange( rrLengthMin, rrLengthMax );
    ui->RR_Length_SpinBox->setSingleStep( 0.5 );
    ui->RR_Length_SpinBox->setValue( std::stod( noximConfigNode["r2r_link_length"].as<std::string>() ) );

    // Routing algorithm
    ui->Algorithm_SpinBox->setRange( 0, 1 );
    ui->Algorithm_SpinBox->setSingleStep( 0.1 );
    ui->Algorithm_SpinBox->setValue( std::stod( noximConfigNode["dyad_threshold"].as<std::string>() ) );

    std::string algorithmString = noximConfigNode["routing_algorithm"].as<std::string>();
    int algorithmIndex = ui->Algorithm_ComboBox->findText( QString::fromStdString( algorithmString ) );
    if ( algorithmIndex >= 0 )
    {
        ui->Algorithm_ComboBox->setCurrentIndex( algorithmIndex );
        if ( algorithmString.compare( "DYAD" ) == 0 )
        {
            ui->Algorithm_SpinBox->setDisabled( false );
        }
        else
        {
            ui->Algorithm_SpinBox->setDisabled( true );
        }
    }
    else
    {
        ui->Algorithm_ComboBox->setCurrentIndex( 0 );
        ui->Algorithm_SpinBox->setDisabled( true );
    }

    // Selection strategy
    std::string selectionString = noximConfigNode["selection_strategy"].as<std::string>();
    int selectionIndex = ui->Selection_Strategy_ComboBox->findText( QString::fromStdString( selectionString ) );
    if ( selectionIndex >= 0 )
    {
        ui->Selection_Strategy_ComboBox->setCurrentIndex( selectionIndex );
    }
    else
    {
        ui->Selection_Strategy_ComboBox->setCurrentIndex( 0 );
    }

    // Set wireless permanently to disabled, not currently supported
    ui->Wireless_Config_Widget->setDisabled( true );
}

/**
 * @brief Private method to populate noximConfigNode with field items
 */
void NoximGUI::updateNoximConfigNode()
{
    // X & Y mesh dimensions
    noximConfigNode["mesh_dim_x"] = ui->X_SpinBox->value();
    noximConfigNode["mesh_dim_y"] = ui->Y_SpinBox->value();
    // Flit size
    noximConfigNode["flit_size"] = ui->Flit_Size_ComboBox->currentText().toStdString();
    // Wired connection lengths
    noximConfigNode["r2h_link_length"] = ui->RH_Length_SpinBox->value();
    noximConfigNode["r2r_link_length"] = ui->RR_Length_SpinBox->value();
    // Clock options
    //noximConfigNode["clock_period_ps"] = ui->Clock_Period_Edit->toPlainText().toStdString();
    noximConfigNode["simulation_time"] = ui->Simulation_Time_SpinBox->value();
    noximConfigNode["stats_warm_up_time"] = ui->Warmup_Time_SpinBox->value();
    noximConfigNode["reset_time"] = ui->Reset_Time_SpinBox->value();
    noximConfigNode["max_volume_to_be_drained"] = ui->Delivery_Stop_SpinBox->value();
    // Packet Options
    noximConfigNode["min_packet_size"] = ui->Min_Packet_Size_SpinBox->value();
    noximConfigNode["max_packet_size"] = ui->Max_Packet_Size_SpinBox->value();
    noximConfigNode["probability_of_retransmission"] = ui->Retransmission_SpinBox->value();
    noximConfigNode["packet_injection_rate"] = ui->Packet_Injection_SpinBox->value();
    // Routing Options
    noximConfigNode["routing_algorithm"] = ui->Algorithm_ComboBox->currentText().toStdString();
    noximConfigNode["selection_strategy"] = ui->Selection_Strategy_ComboBox->currentText().toStdString();
    noximConfigNode["traffic_distribution"] = ui->Traffic_Pattern_ComboBox->currentText().toStdString();
    noximConfigNode["traffic_table_filename"] = ui->Traffic_Table_File_LineEdit->text().toStdString();
    // Buffer depth
    noximConfigNode["buffer_depth"] = ui->Depth_ComboBox->currentText().toStdString();
}

/**
 * @brief User has pressed 'new file' button, reset all params
 *          to default
 */
void NoximGUI::on_actionNew_triggered()
{
    bool success = setDefaultNoximConfig();
    populateParams();
    if( !success )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Could not load default config. Contact developer." ) );
    }
}

/**
 * @brief User has pressed 'load file' button, load file,
 *          check validity, and then populate fields
 */
void NoximGUI::on_actionOpen_triggered()
{
    QString loadConfigFileName = "";
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFile);
    loadConfigFileName = dialog.getOpenFileName( 0, "Select configuration" );
    if ( loadConfigFileName.isEmpty() || loadConfigFileName.isNull() )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Error opening configuration file. "
                                       "Check the file or try a different one." ) );
    }
    else
    {
        noximConfigFileName = loadConfigFileName.toStdString();
        setNoximConfig( loadConfigFileName );
        populateParams();
    }
}

/**
 * @brief User has pressed 'save file' button, write file
 */
void NoximGUI::on_actionSave_triggered()
{
    QFileDialog saveDialog;
    saveDialog.setDefaultSuffix("yaml");
    QString saveConfigFileName = saveDialog.getSaveFileName( this,
                                                               tr("Save Configuration"),
                                                               QDir::currentPath(),
                                                               tr("YAML Files (*.yaml *.yml)"));

    if ( saveConfigFileName.isEmpty() || saveConfigFileName.isNull() )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "You must supply a name to save this file to." ) );
    }
    else
    {
        noximConfigFileName = saveConfigFileName.toStdString();
        bool writeConfigResult = writeNoximConfig( saveConfigFileName );
        if( !writeConfigResult )
        {
            QMessageBox::warning( NULL, QString( "NoximGUI" ),
                                  QString( "There was an error saving the file. Contact developer." ) );
        }
    }
}

/**
 * @brief Private method for signal received when
 *  run simulation button pressed.
 *  Runs the simulation.
 */
void NoximGUI::on_actionRun_Simulation_triggered()
{
    updateNoximConfigNode();

    // Save config to temp file for simulation
    QString qTempFile = "temp";
    QString qTempPowFile = "tempPow";

    bool writeConfigResult = writeNoximConfig( qTempFile );
    bool writePowerResult = writePowerConfig( qTempPowFile );
    if ( writeConfigResult && writePowerResult )
    {
        // Set arguments
        std::string config( "-config " + noximConfigFileName );
        std::string powerConfig( "-power " + powerConfigFileName );
        std::string args = config + " " + powerConfig;

        // Have to set packet injection as separate arg
        //  Set pirType string and then change it to lowercase
        QString pirType = ui->Packet_Injection_ComboBox->currentText();
        std::string pirTypeLower = pirType.toStdString();
        std::transform(pirTypeLower.begin(), pirTypeLower.end(), pirTypeLower.begin(), ::tolower);
        std::string pir( "-pir " + noximConfigNode["packet_injection_rate"].as<std::string>() );
        if( pirType == "Poisson" )
        {
            pir = pir + " " + pirTypeLower;
        }
        else if( pirType == "Burst" )
        {
            std::ostringstream burst;
            burst << " " << pirTypeLower << " "
                  << ui->Packet_Injection_SpinBox_Secondary->value();
            pir = pir + burst.str();
        }
        else if( pirType == "Pareto" )
        {
            std::ostringstream pareto;
            pareto << " " << pirTypeLower << " "
                   << ui->Packet_Injection_SpinBox_Secondary->value() << " "
                   << ui->Packet_Injection_SpinBox_Tertiary->value() << " "
                   << ui->Packet_Injection_SpinBox_Quaternary->value();
            pir = pir + pareto.str();
        }
        args = args + " " + pir;
        std::string exec = guiConfigNode[execConfigName].as<std::string>() + " " + args;

        // Start process, execute code
        QProcess simulationProcess;
        simulationProcess.start( QString::fromStdString( exec ) );
        simulationProcess.waitForFinished();

        // Pipe output from program into stream and strings
        QTextStream out(stdout);
        QString stdout = simulationProcess.readAllStandardOutput();
        QString stderr = simulationProcess.readAllStandardError();
        out << stdout << "\n" << stderr << endl;

        // Display output with config values
        std::stringstream ss;
//        ss << "CONFIGURATION:" << std::endl;
//        ss << "______________" << std::endl;
//        Utils::writeYamlOrderedMaps( ss, noximConfigNode );
        ss << std::endl;
        ss << "OUTPUT:" << std::endl;
        ss << "______________" << std::endl;
        ss << stdout.toStdString();
        OutputDialog outputDialog;
        outputDialog.showOutput( QString::fromStdString(ss.str()) );
        outputDialog.setModal( true);
        outputDialog.exec();

        QFile file( qTempFile );
        file.remove();
        QFile file1( qTempPowFile );
        file1.remove();
    }
    else
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "You must save the config file "
                                       "before simulations can run. Check your settings." ) );
    }
}

/**
 * @brief Private signal that activates/deactivates extra UI elements
 *          when Routing Algorithm ComboBox activated.
 *          If DYAD, activate threshold spinbox.
 *          Else deactivate
 * @param QString &option - String value of option selected
 */
void NoximGUI::on_Algorithm_ComboBox_activated(const QString &algorithm)
{
    if( algorithm == "DYAD" )
    {
        ui->Algorithm_SpinBox->setDisabled( false );
    }
    else
    {
        ui->Algorithm_SpinBox->setDisabled( true );
    }
}


/**
 * @brief Private signal that activates/deactivates extra UI elements
 *          when Packet Injection ComboBox activated.
 *          If poisson, deactivate both spinboxes.
 *          Else if burst, activate one spinbox.
 *          Else if pareto, activate both spinboxes.
 * @param QString &option - String value of option selected
 */
void NoximGUI::on_Packet_Injection_ComboBox_activated(const QString &option)
{
    if( option == "Poisson" )
    {
        ui->Packet_Injection_SpinBox_Secondary->setDisabled( true );
        ui->Packet_Injection_SpinBox_Tertiary->setDisabled( true );
        ui->Packet_Injection_SpinBox_Quaternary->setDisabled( true );
    }
    else if( option == "Burst" )
    {
        ui->Packet_Injection_SpinBox_Secondary->setDisabled( false );
        ui->Packet_Injection_SpinBox_Tertiary->setDisabled( true );
        ui->Packet_Injection_SpinBox_Quaternary->setDisabled( true );
    }
    else if( option == "Pareto" )
    {
        ui->Packet_Injection_SpinBox_Secondary->setDisabled( false );
        ui->Packet_Injection_SpinBox_Tertiary->setDisabled( false );
        ui->Packet_Injection_SpinBox_Quaternary->setDisabled( false );
    }
    else
    {
        ui->Packet_Injection_SpinBox_Secondary->setDisabled( true );
        ui->Packet_Injection_SpinBox_Tertiary->setDisabled( true );
        ui->Packet_Injection_SpinBox_Quaternary->setDisabled( true );
    }
}

/**
 * @brief Private signal that activates/deactivates extra UI elements
 *          when Traffic Pattern ComboBox activated.
 *          If TRAFFIC_TABLE_BASED, activate file selector.
 *          Else deactivate
 * @param QString &traffic - String value of option selected
 *
 */
void NoximGUI::on_Traffic_Pattern_ComboBox_activated(const QString &traffic)
{
    if( traffic == "TRAFFIC_TABLE_BASED" )
    {
        ui->Traffic_Table_File_Widget->setDisabled( false );
    }
    else
    {
        ui->Traffic_Table_File_Widget->setDisabled( true );
    }
}

/**
 * @brief Private signal that calls file-explorer when button clicked.
 */
void NoximGUI::on_Traffic_Table_File_Button_clicked()
{
    QString tableFileName = "";
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFile);
    tableFileName = dialog.getOpenFileName( 0, "Select text file containing table routes" );
    if ( tableFileName.isEmpty() || tableFileName.isNull() )
    {
        QMessageBox::warning( NULL, QString( "NoximGUI" ),
                              QString( "Error opening table routing file. "
                                       "Check the file or try a different one." ) );
    }
    else
    {
        ui->Traffic_Table_File_LineEdit->setText(tableFileName);
    }
}

// Helper function to sort string-digits
bool Utils::convertAndCompare(QString i, QString j)
{
    int left = i.toInt();
    int right = j.toInt();
    return left < right;
}

// Recursive helper function that does all the work
// Code written by hersh (https://github.com/jbeder/yaml-cpp/issues/169)
// Modified to not print a node if its contents are empty
void Utils::writeNode(const YAML::Node& node, YAML::Emitter& emitter)
{
  switch (node.Type())
  {
    case YAML::NodeType::Sequence:
    {
      emitter << YAML::BeginSeq;
      for (size_t i = 0; i < node.size(); i++)
      {
        writeNode(node[i], emitter);
      }
      emitter << YAML::EndSeq;
      break;
    }
    case YAML::NodeType::Map:
    {
      emitter << YAML::BeginMap;

      // First collect all the keys
      std::vector<std::string> keys(node.size());
      int key_it = 0;
      for (YAML::const_iterator it = node.begin(); it != node.end(); ++it)
      {
        keys[key_it++] = it->first.as<std::string>();
      }

      // Then sort them
      std::sort(keys.begin(), keys.end());

      // Then emit all the entries in sorted order.
      for(size_t i = 0; i < keys.size(); i++)
      {
        emitter << YAML::Key;
        emitter << keys[i];
        emitter << YAML::Value;
        writeNode(node[keys[i]], emitter);
      }
      emitter << YAML::EndMap;
      break;
    }
    default:
      emitter << node;
      break;
  }
}

// Main function that emits a yaml node to an output stream.
void Utils::writeYamlOrderedMaps(std::ostream& out, const YAML::Node& node)
{
  YAML::Emitter emitter;
  writeNode(node, emitter);
  out << emitter.c_str() << std::endl;
}
