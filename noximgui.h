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
        // Run Simulation button pressed.
        void on_actionRun_Simulation_triggered();

    private:
        // Const strings
        std::string execConfigName;
        std::string guiConfigFileName;
        std::string noximConfigFileName;
        std::string powerConfigFileName;

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

        // Private method to populate dependent fields (changes other params)
        void populateDependentParams();

        // Private method to populate vectors
        void populateLists();

        // Private method to populate YAML power config
        bool populatePowerConfig( QString fileName );

        // Private method to populate universal fields (shared by all configs)
        void populateParams();

        // Private method to take info from fields and update noximConfigNode
        void updateNoximConfigNode();

        // Private method to write noximExec to gui_config.yaml
        bool writeGUIConfig();

        // Private method to write noximConfig to specified fileName
        bool writeNoximConfig( QString fileName );

        // Private method to write power Config to specified fileName
        bool writePowerConfig( QString fileName );
};

#endif // NOXIMGUI_H
