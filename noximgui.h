#ifndef NOXIMGUI_H
#define NOXIMGUI_H

// QT Classes
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QPlainTextEdit>
#include <QProcess>
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

class NoximGUI : public QMainWindow
{
    Q_OBJECT

    public:
        // CTOR & DTOR
        explicit NoximGUI(QWidget *parent = 0);
        ~NoximGUI();

        // Opens fileDialog asking user to select location of noxim executable
        bool getNoximExecutable();

        // Method to set the noximExec
        bool setGUIConfig( QString fileName );

        // Method to set the default config file to run with noxim, calls setNoximConfig
        bool setDefaultNoximConfig();

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

        // Vectors containing packet injection, routing, selection_strategy, traffic types
        QStringList packetInjectionTypes;
        QStringList routingTypes;
        QStringList selectionStrategies;
        QStringList trafficTypes;

        // YAML Node object containing gui config
        YAML::Node guiConfigNode;

        // YAML Node object containing noxim config
        YAML::Node noximConfigNode;

        // Pointer to noximGUI object
        Ui::NoximGUI *ui;

        // Private method to check if gui_config.yaml exists
        bool noximExecSet();

        // Private method to populate combo boxes
        void populateComboBoxes();

        // Private method to populate dependent fields (changes other params)
        void populateDependentParams();

        // Private method to populate vectors
        void populateLists();

        // Private method to populate universal fields (shared by all configs)
        void populateUniversalParams();

        // Private method to take info from fields and update noximConfigNode
        void updateNoximConfigNode();

        // Private method to write noximExec to gui_config.yaml
        bool writeGUIConfig();

        // Private method to write noximConfig to specified fileName
        bool writeNoximConfig( QString fileName );
};

#endif // NOXIMGUI_H
