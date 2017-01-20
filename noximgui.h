#ifndef NOXIMGUI_H
#define NOXIMGUI_H

// QT Classes
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QPlainTextEdit>
#include <QProcess>
#include <QSplashScreen>
#include <QString>
#include <QStringList>
#include <QTextStream>

// C Headers
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <yaml.h>

// C++ Headers
#include <algorithm>
#include <fstream>
#include <list>
#include <string>
#include <vector>

namespace Ui
{
    class NoximGUI;
}

namespace Utils
{
    bool convertAndCompare(QString i, QString j);
    void writeNode(const YAML::Node& node, YAML::Emitter& emitter);
    void writeYamlOrderedMaps(std::ostream& out, const YAML::Node& node);
}

class NoximGUI : public QMainWindow
{
    Q_OBJECT

    public:
        // CTOR & DTOR
        explicit NoximGUI(QWidget *parent = 0);
        ~NoximGUI();

        // Opens fileDialog asking user to select location of noxim executable
        bool getNoximExecutable();

        // Method to set the default config file to run with noxim, calls setNoximConfig
        bool setDefaultNoximConfig();

        // Method to set the noximExec
        bool setGUIConfig( QString fileName );

        // Method to set the config file to run with noxim
        bool setNoximConfig( QString fileName );

    private slots:
        // Algorithm selection enables/disables other UI elements
        void on_Algorithm_ComboBox_activated(const QString &algorithm);

        // Packet injection enables/disables other UI elements
        void on_Packet_Injection_ComboBox_activated(const QString &option);

        // Traffic pattern enables/disables other UI elements
        void on_Traffic_Pattern_ComboBox_activated(const QString &traffic);

        // Traffic file button calls file dialog
        void on_Traffic_Table_File_Button_clicked();

        // New default configuration
        void on_actionNew_triggered();

        // Open a configuration file
        void on_actionOpen_triggered();

        // Save configuration file
        void on_actionSave_triggered();

        // Run Simulation button pressed.
        void on_actionRun_Simulation_triggered();

        // Run Configurations
        void on_actionRun_Configurations_triggered();

        // Exit program
        void on_actionExit_triggered();


private:
        // Const strings
        const std::string DEFAULT_CONFIG = ":/assets/default_config.yaml";
        const std::string DEFAULT_POWER = ":/assets/default_power.yaml";

        // Strings
        std::string execConfigName;
        std::string guiConfigFileName;
        std::string noximConfigFileName;
        std::string powerConfigFileName;
        std::string shortName;

        // Vectors containing packet injection, routing, selection_strategy, traffic types
        QStringList availableBufferDepthValues;
        QStringList availableConnectionLengths;
        QStringList availableFlitSizes;
        QStringList availablePacketInjectionTypes;
        QStringList availableRoutingTypes;
        QStringList availableSelectionStrategies;
        QStringList availableTrafficTypes;

        // Constants
        int MAX = 1000000000;

        // YAML Node object containing gui config
        YAML::Node guiConfigNode;

        // YAML Node object containing noxim config
        YAML::Node noximConfigNode;

        // YAML Node object containing power config
        YAML::Node powerConfigNode;

        // Pointer to noximGUI object
        Ui::NoximGUI *ui;

        // Private method to populate combo boxes
        void populateComboBoxes();

        // Private method to populate static vectors
        void populateStaticLists();

        // Private method to populate dynamic vectors
        void populateDynamicLists();

        // Private method to populate YAML power config
        bool populatePowerConfig( QString fileName );

        // Private method to populate universal fields (shared by all configs)
        void populateParams();

        // Private method to populate combo boxes
        void repopulateComboBoxes();

        // Private method to repopulate dynamic vectors
        void repopulateDynamicLists();

        // Private method to populate universal fields (shared by all configs)
        void repopulateParams();

        // Private method to take info from fields and update noximConfigNode
        void updateNoximConfigNode();

        // Private method to set the new power config filename accordingly
        void setPowerConfigPath( std::string pwrShortName );

        // Private method to write noximExec to gui_config.yaml
        bool writeGUIConfig();

        // Private method to write noximConfig to specified fileName
        bool writeNoximConfig( QString fileName );

        // Private method to write power Config to specified fileName
        bool writePowerConfig( QString fileName );
};

#endif // NOXIMGUI_H
