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

    // Shows splash screen
    //showSplash(this);

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
    populateUniversalParams();

    // Sets specialized parameters which may be depended on by other parameters
    populateDependentParams();

    // Finally, show splash screen and start program
    QImage splashImage;
    splashImage.load(":/assets/splash.jpg");
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
 * @brief Private method to check if a gui config already exists
 */
bool NoximGUI::noximExecSet()
{
    struct stat buffer;
    return ( stat( "gui_config.yaml", &buffer ) == 0 );
}

/**
 * @brief Private method to populate comboboxes for UI
 */
void NoximGUI::populateComboBoxes()
{
    // Buffer Depth Values
    ui->Depth_ComboBox->addItems( availableBufferDepthValues );
    // Connection Lengths
    ui->RH_Length_ComboBox->addItems( availableConnectionLengths );
    ui->RR_Length_ComboBox->addItems( availableConnectionLengths );
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
    availableSelectionStrategies << "RANDOM" << "BUFFER_LEVEL" <<"NOP";
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
 * @brief Private method to populate dependent fields (changes other params)
 */
void NoximGUI::populateDependentParams()
{
    // TODO
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
 * @brief Private method to populate universal fields (shared by all configs)
 */
void NoximGUI::populateUniversalParams()
{
    // X & Y mesh dimensions
    ui->X_Edit->setText( QString::fromStdString( noximConfigNode["mesh_dim_x"].as<std::string>() ) );
    ui->Y_Edit->setText( QString::fromStdString( noximConfigNode["mesh_dim_y"].as<std::string>() ) );

    // Clock options
    ui->Clock_Period_SpinBox->setRange( noximConfigNode["stats_warm_up_time"].as<int>() + 1, (int) LONG_MAX );


    // Set minimum to warmup time, since clock cycle must be larger than warmup time
    ui->Simulation_Time_Edit->setText( QString::fromStdString( noximConfigNode["simulation_time"].as<std::string>() ) );
    ui->Warmup_Time_Edit->setText( QString::fromStdString( noximConfigNode["stats_warm_up_time"].as<std::string>() ) );
    ui->Reset_Time_Edit->setText( QString::fromStdString( noximConfigNode["reset_time"].as<std::string>() ) );
    ui->Delivery_Stop_Edit->setText( QString::fromStdString( noximConfigNode["max_volume_to_be_drained"].as<std::string>() ) );

    // Packet Options
    ui->Min_Packet_Size_Edit->setText( QString::fromStdString( noximConfigNode["min_packet_size"].as<std::string>() ) );
    ui->Max_Packet_Size_Edit->setText( QString::fromStdString( noximConfigNode["max_packet_size"].as<std::string>() ) );
    ui->Retransmission_Edit->setText( QString::fromStdString( noximConfigNode["probability_of_retransmission"].as<std::string>() ) );
    ui->Packet_Injection_Edit->setText( QString::fromStdString( noximConfigNode["packet_injection_rate"].as<std::string>() ) );

    // Disable unsupported features or features TODO
    ui->Wireless_CheckBox->setDisabled( true );
    ui->Wireless_Config_Widget->setDisabled( true );
    ui->Packet_Injection_Edit_2->setDisabled( true );
    ui->Packet_Injection_Edit_3->setDisabled( true );
    ui->Packet_Injection_Edit_4->setDisabled( true );
}

/**
 * @brief Private method to populate noximConfigNode with field items
 */
void NoximGUI::updateNoximConfigNode()
{
    // X & Y mesh dimensions
    noximConfigNode["mesh_dim_x"] = ui->X_Edit->toPlainText().toStdString();
    noximConfigNode["mesh_dim_y"] = ui->Y_Edit->toPlainText().toStdString();
    // Flit size
    noximConfigNode["flit_size"] = ui->Flit_Size_ComboBox->currentText().toStdString();
    // Wired connection lengths
    noximConfigNode["r2h_link_length"] = ui->RH_Length_ComboBox->currentText().toStdString();
    noximConfigNode["r2r_link_length"] = ui->RR_Length_ComboBox->currentText().toStdString();
    // Clock options
    //noximConfigNode["clock_period_ps"] = ui->Clock_Period_Edit->toPlainText().toStdString();
    noximConfigNode["simulation_time"] = ui->Simulation_Time_Edit->toPlainText().toStdString();
    noximConfigNode["stats_warm_up_time"] = ui->Warmup_Time_Edit->toPlainText().toStdString();
    noximConfigNode["reset_time"] = ui->Reset_Time_Edit->toPlainText().toStdString();
    noximConfigNode["max_volume_to_be_drained"] = ui->Delivery_Stop_Edit->toPlainText().toStdString();
    // Packet Options
    noximConfigNode["min_packet_size"] = ui->Min_Packet_Size_Edit->toPlainText().toStdString();
    noximConfigNode["max_packet_size"] = ui->Max_Packet_Size_Edit->toPlainText().toStdString();
    noximConfigNode["probability_of_retransmission"] = ui->Retransmission_Edit->toPlainText().toStdString();
    noximConfigNode["packet_injection_rate"] = ui->Packet_Injection_Edit->toPlainText().toStdString();
    // Routing Options
    noximConfigNode["routing_algorithm"] = ui->Algorithm_ComboBox->currentText().toStdString();
    noximConfigNode["selection_strategy"] = ui->Selection_Strategy_ComboBox->currentText().toStdString();
    noximConfigNode["traffic_distribution"] = ui->Traffic_Pattern_ComboBox->currentText().toStdString();
    // Buffer depth
    noximConfigNode["buffer_depth"] = ui->Depth_ComboBox->currentText().toStdString();
}

/**
 * @brief Private method to run the simulation when button pressed.
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
        ss << "CONFIGURATION:" << std::endl;
        ss << "______________" << std::endl;
        Utils::writeYamlOrderedMaps( ss, noximConfigNode );
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
                              QString( "You must save the config file before simulations can run. Check your settings." ) );
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
