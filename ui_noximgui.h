/********************************************************************************
** Form generated from reading UI file 'noximgui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOXIMGUI_H
#define UI_NOXIMGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoximGUI
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExport;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionPreferences;
    QAction *actionFull_Screen;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear_All_Fields;
    QAction *actionRun_Simulation;
    QAction *actionRun_Configurations;
    QAction *actionTutorial;
    QAction *actionWhat_s_This;
    QAction *actionSend_Feedback;
    QAction *actionAbout_noximGUI;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QFrame *Main_Background_Frame;
    QWidget *NoC_Wired_Config_Widget;
    QLabel *Wired_Config_Label;
    QGroupBox *Mesh_Dim_Group;
    QVBoxLayout *verticalLayout;
    QWidget *X_Dim_Widget;
    QLabel *X_Label;
    QTextEdit *X_Edit;
    QWidget *Y_Dim_Widget;
    QLabel *Y_Label;
    QTextEdit *Y_Edit;
    QGroupBox *Buffer_Group;
    QVBoxLayout *verticalLayout_2;
    QWidget *Depth_Widget;
    QLabel *Depth_Label;
    QComboBox *Depth_ComboBox;
    QGroupBox *Flit_Group;
    QVBoxLayout *verticalLayout_3;
    QWidget *Flit_Size_Widget;
    QLabel *Flit_Size_Label;
    QComboBox *Flit_Size_ComboBox;
    QGroupBox *Connection_Group;
    QVBoxLayout *verticalLayout_4;
    QWidget *RH_Length_Widget;
    QLabel *RH_Length_Label;
    QComboBox *RH_Length_ComboBox;
    QWidget *RR_Length_Widget;
    QLabel *RR_Length_Label;
    QComboBox *RR_Length_ComboBox;
    QGroupBox *Routing_Options_Group;
    QWidget *Algorithm_Widget;
    QLabel *Algorithm_Label;
    QComboBox *Algorithm_ComboBox;
    QLineEdit *Traffic_Options_File_2;
    QWidget *Selection_Strategy_Widget;
    QLabel *Selection_Strategy_Label;
    QComboBox *Selection_Strategy_ComboBox;
    QWidget *Simulation_Params_Widget;
    QLabel *Simulation_Params_Label;
    QGroupBox *Clock_Options_Group;
    QVBoxLayout *verticalLayout_6;
    QWidget *Clock_Period_Widget;
    QLabel *Clock_Period_Label;
    QTextEdit *Clock_Period_Edit;
    QWidget *Simulation_Time_Widget;
    QLabel *Simulation_Time_Label;
    QTextEdit *Simulation_Time_Edit;
    QWidget *Warmup_Time_Widget;
    QLabel *Warmup_Time_Label;
    QTextEdit *Warmup_Time_Edit;
    QWidget *Reset_Time_Widget;
    QLabel *Reset_Time_Label;
    QTextEdit *Reset_Time_Edit;
    QWidget *Delivery_Stop_Widget;
    QLabel *Warmup_Time_Label_2;
    QTextEdit *Delivery_Stop_Edit;
    QCheckBox *Wireless_CheckBox;
    QCheckBox *Power_Save_CheckBox;
    QCheckBox *Trace_Mode_CheckBox;
    QLineEdit *Trace_Mode_File;
    QGroupBox *Packet_Options_Group;
    QWidget *Min_Packet_Size_Widget;
    QLabel *Min_Packet_Size_Label;
    QTextEdit *Min_Packet_Size_Edit;
    QWidget *Max_Packet_Size_Widget;
    QLabel *Max_Packet_Size_Label;
    QTextEdit *Max_Packet_Size_Edit;
    QWidget *Packet_Injection_Widget;
    QLabel *Packet_Injection_Label;
    QTextEdit *Packet_Injection_Edit;
    QComboBox *Packet_Injection_ComboBox;
    QTextEdit *Packet_Injection_Edit_2;
    QTextEdit *Packet_Injection_Edit_3;
    QTextEdit *Packet_Injection_Edit_4;
    QWidget *Retransmission_Widget;
    QLabel *Retransmission_Label;
    QTextEdit *Retransmission_Edit;
    QGroupBox *Traffic_Options_Group;
    QWidget *Traffic_Pattern_Widget;
    QLabel *Traffic_Pattern_Label;
    QComboBox *Traffic_Pattern_ComboBox;
    QLineEdit *Traffic_Options_File;
    QLabel *NoximGUI_Label;
    QWidget *Wireless_Config_Widget;
    QLabel *Wireless_Config_Label;
    QPushButton *pushButton;
    QWidget *widget;
    QGroupBox *Hub_Defaults_Group;
    QVBoxLayout *verticalLayout_7;
    QWidget *TT_Buffer_Size_Widget;
    QLabel *TT_Buffer_Size_Label;
    QTextEdit *TT_Buffer_Size_Edit;
    QWidget *FT_Buffer_Size_Widget;
    QLabel *FT_Buffer_Size_Label;
    QTextEdit *FT_Buffer_Size_Edit;
    QWidget *Antenna_Buffer_RX_Widget;
    QLabel *Antenna_Buffer_RX_Label;
    QTextEdit *Antenna_Buffer_RX_Edit;
    QWidget *Antenna_Buffer_TX_Widget;
    QLabel *Antenna_Buffer_TX_Label;
    QTextEdit *Antenna_Buffer_TX_Edit;
    QGroupBox *Channel_Defaults_Group;
    QWidget *TT_Buffer_Size_Widget_2;
    QLabel *TT_Buffer_Size_Label_2;
    QTextEdit *TT_Buffer_Size_Edit_2;
    QWidget *FT_Buffer_Size_Widget_2;
    QLabel *FT_Buffer_Size_Label_2;
    QTextEdit *FT_Buffer_Size_Edit_2;
    QComboBox *Algorithm_ComboBox_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QMenu *menuRun;
    QMenu *menuAnalyze;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NoximGUI)
    {
        if (NoximGUI->objectName().isEmpty())
            NoximGUI->setObjectName(QStringLiteral("NoximGUI"));
        NoximGUI->resize(850, 892);
        NoximGUI->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        actionNew = new QAction(NoximGUI);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/file-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(NoximGUI);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/folder-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(NoximGUI);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/hard-drive-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(NoximGUI);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon3;
        QString iconThemeName = QStringLiteral("document-save-as");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(":/icons/icons/hard-drive-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSave_As->setIcon(icon3);
        actionExport = new QAction(NoximGUI);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/external-link-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon4);
        actionPrint = new QAction(NoximGUI);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/print-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon5);
        actionExit = new QAction(NoximGUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/delete-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        actionPreferences = new QAction(NoximGUI);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionFull_Screen = new QAction(NoximGUI);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons/fullscreen-enter-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFull_Screen->setIcon(icon7);
        actionUndo = new QAction(NoximGUI);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/icons/action-undo-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(NoximGUI);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icons/action-redo-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon9);
        actionCut = new QAction(NoximGUI);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionCopy = new QAction(NoximGUI);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionPaste = new QAction(NoximGUI);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/icons/clipboard-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon12);
        actionClear_All_Fields = new QAction(NoximGUI);
        actionClear_All_Fields->setObjectName(QStringLiteral("actionClear_All_Fields"));
        actionClear_All_Fields->setIcon(icon6);
        actionRun_Simulation = new QAction(NoximGUI);
        actionRun_Simulation->setObjectName(QStringLiteral("actionRun_Simulation"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/icons/media-play-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_Simulation->setIcon(icon13);
        actionRun_Configurations = new QAction(NoximGUI);
        actionRun_Configurations->setObjectName(QStringLiteral("actionRun_Configurations"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/icons/wrench-2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_Configurations->setIcon(icon14);
        actionTutorial = new QAction(NoximGUI);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        QIcon icon15;
        iconThemeName = QStringLiteral("help");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QStringLiteral("../noximGUI"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTutorial->setIcon(icon15);
        actionWhat_s_This = new QAction(NoximGUI);
        actionWhat_s_This->setObjectName(QStringLiteral("actionWhat_s_This"));
        QIcon icon16;
        iconThemeName = QStringLiteral("help-contents");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QStringLiteral("../noximGUI"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionWhat_s_This->setIcon(icon16);
        actionSend_Feedback = new QAction(NoximGUI);
        actionSend_Feedback->setObjectName(QStringLiteral("actionSend_Feedback"));
        QIcon icon17;
        iconThemeName = QStringLiteral("mail-send-receive");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QStringLiteral("../noximGUI"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSend_Feedback->setIcon(icon17);
        actionAbout_noximGUI = new QAction(NoximGUI);
        actionAbout_noximGUI->setObjectName(QStringLiteral("actionAbout_noximGUI"));
        QIcon icon18;
        iconThemeName = QStringLiteral("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QStringLiteral("../noximGUI"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout_noximGUI->setIcon(icon18);
        centralWidget = new QWidget(NoximGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Main_Background_Frame = new QFrame(centralWidget);
        Main_Background_Frame->setObjectName(QStringLiteral("Main_Background_Frame"));
        Main_Background_Frame->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177)"));
        NoC_Wired_Config_Widget = new QWidget(Main_Background_Frame);
        NoC_Wired_Config_Widget->setObjectName(QStringLiteral("NoC_Wired_Config_Widget"));
        NoC_Wired_Config_Widget->setGeometry(QRect(10, 270, 831, 191));
        NoC_Wired_Config_Widget->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
"border-radius: 5px;"));
        Wired_Config_Label = new QLabel(NoC_Wired_Config_Widget);
        Wired_Config_Label->setObjectName(QStringLiteral("Wired_Config_Label"));
        Wired_Config_Label->setGeometry(QRect(10, 10, 251, 21));
        Mesh_Dim_Group = new QGroupBox(NoC_Wired_Config_Widget);
        Mesh_Dim_Group->setObjectName(QStringLiteral("Mesh_Dim_Group"));
        Mesh_Dim_Group->setGeometry(QRect(10, 35, 226, 86));
        Mesh_Dim_Group->setAutoFillBackground(false);
        Mesh_Dim_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Mesh_Dim_Group->setCheckable(false);
        verticalLayout = new QVBoxLayout(Mesh_Dim_Group);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        X_Dim_Widget = new QWidget(Mesh_Dim_Group);
        X_Dim_Widget->setObjectName(QStringLiteral("X_Dim_Widget"));
        X_Label = new QLabel(X_Dim_Widget);
        X_Label->setObjectName(QStringLiteral("X_Label"));
        X_Label->setGeometry(QRect(0, 0, 101, 26));
        X_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        X_Edit = new QTextEdit(X_Dim_Widget);
        X_Edit->setObjectName(QStringLiteral("X_Edit"));
        X_Edit->setGeometry(QRect(108, 0, 96, 25));
        X_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout->addWidget(X_Dim_Widget);

        Y_Dim_Widget = new QWidget(Mesh_Dim_Group);
        Y_Dim_Widget->setObjectName(QStringLiteral("Y_Dim_Widget"));
        Y_Label = new QLabel(Y_Dim_Widget);
        Y_Label->setObjectName(QStringLiteral("Y_Label"));
        Y_Label->setGeometry(QRect(5, 0, 96, 26));
        Y_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Y_Edit = new QTextEdit(Y_Dim_Widget);
        Y_Edit->setObjectName(QStringLiteral("Y_Edit"));
        Y_Edit->setGeometry(QRect(108, 0, 96, 25));
        Y_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout->addWidget(Y_Dim_Widget);

        Buffer_Group = new QGroupBox(NoC_Wired_Config_Widget);
        Buffer_Group->setObjectName(QStringLiteral("Buffer_Group"));
        Buffer_Group->setGeometry(QRect(10, 125, 226, 56));
        Buffer_Group->setAutoFillBackground(false);
        Buffer_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Buffer_Group->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(Buffer_Group);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Depth_Widget = new QWidget(Buffer_Group);
        Depth_Widget->setObjectName(QStringLiteral("Depth_Widget"));
        Depth_Label = new QLabel(Depth_Widget);
        Depth_Label->setObjectName(QStringLiteral("Depth_Label"));
        Depth_Label->setGeometry(QRect(5, 0, 96, 26));
        Depth_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;\n"
""));
        Depth_ComboBox = new QComboBox(Depth_Widget);
        Depth_ComboBox->setObjectName(QStringLiteral("Depth_ComboBox"));
        Depth_ComboBox->setGeometry(QRect(110, 0, 96, 27));
        Depth_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));

        verticalLayout_2->addWidget(Depth_Widget);

        Flit_Group = new QGroupBox(NoC_Wired_Config_Widget);
        Flit_Group->setObjectName(QStringLiteral("Flit_Group"));
        Flit_Group->setGeometry(QRect(245, 35, 291, 56));
        Flit_Group->setAutoFillBackground(false);
        Flit_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Flit_Group->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(Flit_Group);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Flit_Size_Widget = new QWidget(Flit_Group);
        Flit_Size_Widget->setObjectName(QStringLiteral("Flit_Size_Widget"));
        Flit_Size_Label = new QLabel(Flit_Size_Widget);
        Flit_Size_Label->setObjectName(QStringLiteral("Flit_Size_Label"));
        Flit_Size_Label->setGeometry(QRect(5, 0, 111, 26));
        Flit_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;\n"
""));
        Flit_Size_ComboBox = new QComboBox(Flit_Size_Widget);
        Flit_Size_ComboBox->setObjectName(QStringLiteral("Flit_Size_ComboBox"));
        Flit_Size_ComboBox->setGeometry(QRect(130, 0, 141, 27));
        Flit_Size_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));

        verticalLayout_3->addWidget(Flit_Size_Widget);

        Connection_Group = new QGroupBox(NoC_Wired_Config_Widget);
        Connection_Group->setObjectName(QStringLiteral("Connection_Group"));
        Connection_Group->setGeometry(QRect(245, 95, 291, 86));
        Connection_Group->setAutoFillBackground(false);
        Connection_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Connection_Group->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(Connection_Group);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        RH_Length_Widget = new QWidget(Connection_Group);
        RH_Length_Widget->setObjectName(QStringLiteral("RH_Length_Widget"));
        RH_Length_Label = new QLabel(RH_Length_Widget);
        RH_Length_Label->setObjectName(QStringLiteral("RH_Length_Label"));
        RH_Length_Label->setGeometry(QRect(5, 0, 111, 26));
        RH_Length_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        RH_Length_ComboBox = new QComboBox(RH_Length_Widget);
        RH_Length_ComboBox->setObjectName(QStringLiteral("RH_Length_ComboBox"));
        RH_Length_ComboBox->setEnabled(true);
        RH_Length_ComboBox->setGeometry(QRect(130, 0, 141, 27));
        RH_Length_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));

        verticalLayout_4->addWidget(RH_Length_Widget);

        RR_Length_Widget = new QWidget(Connection_Group);
        RR_Length_Widget->setObjectName(QStringLiteral("RR_Length_Widget"));
        RR_Length_Label = new QLabel(RR_Length_Widget);
        RR_Length_Label->setObjectName(QStringLiteral("RR_Length_Label"));
        RR_Length_Label->setGeometry(QRect(5, 0, 111, 26));
        RR_Length_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        RR_Length_ComboBox = new QComboBox(RR_Length_Widget);
        RR_Length_ComboBox->setObjectName(QStringLiteral("RR_Length_ComboBox"));
        RR_Length_ComboBox->setGeometry(QRect(130, 0, 141, 27));
        RR_Length_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));

        verticalLayout_4->addWidget(RR_Length_Widget);

        Routing_Options_Group = new QGroupBox(NoC_Wired_Config_Widget);
        Routing_Options_Group->setObjectName(QStringLiteral("Routing_Options_Group"));
        Routing_Options_Group->setGeometry(QRect(545, 35, 276, 146));
        Routing_Options_Group->setAutoFillBackground(false);
        Routing_Options_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Routing_Options_Group->setCheckable(false);
        Algorithm_Widget = new QWidget(Routing_Options_Group);
        Algorithm_Widget->setObjectName(QStringLiteral("Algorithm_Widget"));
        Algorithm_Widget->setGeometry(QRect(10, 19, 261, 71));
        Algorithm_Label = new QLabel(Algorithm_Widget);
        Algorithm_Label->setObjectName(QStringLiteral("Algorithm_Label"));
        Algorithm_Label->setGeometry(QRect(-5, 5, 96, 21));
        Algorithm_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Algorithm_ComboBox = new QComboBox(Algorithm_Widget);
        Algorithm_ComboBox->setObjectName(QStringLiteral("Algorithm_ComboBox"));
        Algorithm_ComboBox->setGeometry(QRect(85, 5, 176, 21));
        Algorithm_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Traffic_Options_File_2 = new QLineEdit(Algorithm_Widget);
        Traffic_Options_File_2->setObjectName(QStringLiteral("Traffic_Options_File_2"));
        Traffic_Options_File_2->setGeometry(QRect(0, 40, 261, 21));
        Traffic_Options_File_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;"));
        Selection_Strategy_Widget = new QWidget(Routing_Options_Group);
        Selection_Strategy_Widget->setObjectName(QStringLiteral("Selection_Strategy_Widget"));
        Selection_Strategy_Widget->setGeometry(QRect(10, 90, 261, 41));
        Selection_Strategy_Label = new QLabel(Selection_Strategy_Widget);
        Selection_Strategy_Label->setObjectName(QStringLiteral("Selection_Strategy_Label"));
        Selection_Strategy_Label->setGeometry(QRect(0, 0, 261, 21));
        Selection_Strategy_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Selection_Strategy_ComboBox = new QComboBox(Selection_Strategy_Widget);
        Selection_Strategy_ComboBox->setObjectName(QStringLiteral("Selection_Strategy_ComboBox"));
        Selection_Strategy_ComboBox->setGeometry(QRect(0, 20, 261, 21));
        Selection_Strategy_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Simulation_Params_Widget = new QWidget(Main_Background_Frame);
        Simulation_Params_Widget->setObjectName(QStringLiteral("Simulation_Params_Widget"));
        Simulation_Params_Widget->setGeometry(QRect(10, 10, 831, 251));
        Simulation_Params_Widget->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
"border-radius: 5px;\n"
""));
        Simulation_Params_Label = new QLabel(Simulation_Params_Widget);
        Simulation_Params_Label->setObjectName(QStringLiteral("Simulation_Params_Label"));
        Simulation_Params_Label->setGeometry(QRect(10, 10, 251, 21));
        Clock_Options_Group = new QGroupBox(Simulation_Params_Widget);
        Clock_Options_Group->setObjectName(QStringLiteral("Clock_Options_Group"));
        Clock_Options_Group->setGeometry(QRect(10, 35, 226, 186));
        Clock_Options_Group->setAutoFillBackground(false);
        Clock_Options_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Clock_Options_Group->setCheckable(false);
        verticalLayout_6 = new QVBoxLayout(Clock_Options_Group);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Clock_Period_Widget = new QWidget(Clock_Options_Group);
        Clock_Period_Widget->setObjectName(QStringLiteral("Clock_Period_Widget"));
        Clock_Period_Label = new QLabel(Clock_Period_Widget);
        Clock_Period_Label->setObjectName(QStringLiteral("Clock_Period_Label"));
        Clock_Period_Label->setGeometry(QRect(0, 0, 126, 26));
        Clock_Period_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Clock_Period_Edit = new QTextEdit(Clock_Period_Widget);
        Clock_Period_Edit->setObjectName(QStringLiteral("Clock_Period_Edit"));
        Clock_Period_Edit->setGeometry(QRect(125, 0, 81, 25));
        Clock_Period_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_6->addWidget(Clock_Period_Widget);

        Simulation_Time_Widget = new QWidget(Clock_Options_Group);
        Simulation_Time_Widget->setObjectName(QStringLiteral("Simulation_Time_Widget"));
        Simulation_Time_Label = new QLabel(Simulation_Time_Widget);
        Simulation_Time_Label->setObjectName(QStringLiteral("Simulation_Time_Label"));
        Simulation_Time_Label->setGeometry(QRect(0, 0, 121, 26));
        Simulation_Time_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Simulation_Time_Edit = new QTextEdit(Simulation_Time_Widget);
        Simulation_Time_Edit->setObjectName(QStringLiteral("Simulation_Time_Edit"));
        Simulation_Time_Edit->setGeometry(QRect(125, 0, 81, 25));
        Simulation_Time_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_6->addWidget(Simulation_Time_Widget);

        Warmup_Time_Widget = new QWidget(Clock_Options_Group);
        Warmup_Time_Widget->setObjectName(QStringLiteral("Warmup_Time_Widget"));
        Warmup_Time_Label = new QLabel(Warmup_Time_Widget);
        Warmup_Time_Label->setObjectName(QStringLiteral("Warmup_Time_Label"));
        Warmup_Time_Label->setGeometry(QRect(0, 0, 121, 26));
        Warmup_Time_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Warmup_Time_Edit = new QTextEdit(Warmup_Time_Widget);
        Warmup_Time_Edit->setObjectName(QStringLiteral("Warmup_Time_Edit"));
        Warmup_Time_Edit->setGeometry(QRect(125, 0, 81, 25));
        Warmup_Time_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_6->addWidget(Warmup_Time_Widget);

        Reset_Time_Widget = new QWidget(Clock_Options_Group);
        Reset_Time_Widget->setObjectName(QStringLiteral("Reset_Time_Widget"));
        Reset_Time_Label = new QLabel(Reset_Time_Widget);
        Reset_Time_Label->setObjectName(QStringLiteral("Reset_Time_Label"));
        Reset_Time_Label->setGeometry(QRect(0, 0, 121, 26));
        Reset_Time_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Reset_Time_Edit = new QTextEdit(Reset_Time_Widget);
        Reset_Time_Edit->setObjectName(QStringLiteral("Reset_Time_Edit"));
        Reset_Time_Edit->setGeometry(QRect(125, 0, 81, 25));
        Reset_Time_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_6->addWidget(Reset_Time_Widget);

        Delivery_Stop_Widget = new QWidget(Clock_Options_Group);
        Delivery_Stop_Widget->setObjectName(QStringLiteral("Delivery_Stop_Widget"));
        Warmup_Time_Label_2 = new QLabel(Delivery_Stop_Widget);
        Warmup_Time_Label_2->setObjectName(QStringLiteral("Warmup_Time_Label_2"));
        Warmup_Time_Label_2->setGeometry(QRect(0, 0, 121, 26));
        Warmup_Time_Label_2->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Delivery_Stop_Edit = new QTextEdit(Delivery_Stop_Widget);
        Delivery_Stop_Edit->setObjectName(QStringLiteral("Delivery_Stop_Edit"));
        Delivery_Stop_Edit->setGeometry(QRect(125, 0, 81, 25));
        Delivery_Stop_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_6->addWidget(Delivery_Stop_Widget);

        Wireless_CheckBox = new QCheckBox(Simulation_Params_Widget);
        Wireless_CheckBox->setObjectName(QStringLiteral("Wireless_CheckBox"));
        Wireless_CheckBox->setGeometry(QRect(5, 225, 121, 22));
        Power_Save_CheckBox = new QCheckBox(Simulation_Params_Widget);
        Power_Save_CheckBox->setObjectName(QStringLiteral("Power_Save_CheckBox"));
        Power_Save_CheckBox->setGeometry(QRect(125, 225, 126, 22));
        Trace_Mode_CheckBox = new QCheckBox(Simulation_Params_Widget);
        Trace_Mode_CheckBox->setObjectName(QStringLiteral("Trace_Mode_CheckBox"));
        Trace_Mode_CheckBox->setGeometry(QRect(250, 225, 111, 22));
        Trace_Mode_File = new QLineEdit(Simulation_Params_Widget);
        Trace_Mode_File->setObjectName(QStringLiteral("Trace_Mode_File"));
        Trace_Mode_File->setGeometry(QRect(360, 225, 176, 21));
        Trace_Mode_File->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;"));
        Packet_Options_Group = new QGroupBox(Simulation_Params_Widget);
        Packet_Options_Group->setObjectName(QStringLiteral("Packet_Options_Group"));
        Packet_Options_Group->setGeometry(QRect(245, 35, 291, 186));
        Packet_Options_Group->setAutoFillBackground(false);
        Packet_Options_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Packet_Options_Group->setCheckable(false);
        Min_Packet_Size_Widget = new QWidget(Packet_Options_Group);
        Min_Packet_Size_Widget->setObjectName(QStringLiteral("Min_Packet_Size_Widget"));
        Min_Packet_Size_Widget->setGeometry(QRect(10, 19, 271, 26));
        Min_Packet_Size_Label = new QLabel(Min_Packet_Size_Widget);
        Min_Packet_Size_Label->setObjectName(QStringLiteral("Min_Packet_Size_Label"));
        Min_Packet_Size_Label->setGeometry(QRect(0, 0, 191, 26));
        Min_Packet_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Min_Packet_Size_Edit = new QTextEdit(Min_Packet_Size_Widget);
        Min_Packet_Size_Edit->setObjectName(QStringLiteral("Min_Packet_Size_Edit"));
        Min_Packet_Size_Edit->setGeometry(QRect(190, 0, 81, 25));
        Min_Packet_Size_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Max_Packet_Size_Widget = new QWidget(Packet_Options_Group);
        Max_Packet_Size_Widget->setObjectName(QStringLiteral("Max_Packet_Size_Widget"));
        Max_Packet_Size_Widget->setGeometry(QRect(10, 51, 271, 26));
        Max_Packet_Size_Label = new QLabel(Max_Packet_Size_Widget);
        Max_Packet_Size_Label->setObjectName(QStringLiteral("Max_Packet_Size_Label"));
        Max_Packet_Size_Label->setGeometry(QRect(0, 0, 191, 26));
        Max_Packet_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Max_Packet_Size_Edit = new QTextEdit(Max_Packet_Size_Widget);
        Max_Packet_Size_Edit->setObjectName(QStringLiteral("Max_Packet_Size_Edit"));
        Max_Packet_Size_Edit->setGeometry(QRect(190, 0, 81, 25));
        Max_Packet_Size_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Packet_Injection_Widget = new QWidget(Packet_Options_Group);
        Packet_Injection_Widget->setObjectName(QStringLiteral("Packet_Injection_Widget"));
        Packet_Injection_Widget->setGeometry(QRect(5, 120, 281, 61));
        Packet_Injection_Label = new QLabel(Packet_Injection_Widget);
        Packet_Injection_Label->setObjectName(QStringLiteral("Packet_Injection_Label"));
        Packet_Injection_Label->setGeometry(QRect(0, 5, 121, 21));
        Packet_Injection_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Packet_Injection_Edit = new QTextEdit(Packet_Injection_Widget);
        Packet_Injection_Edit->setObjectName(QStringLiteral("Packet_Injection_Edit"));
        Packet_Injection_Edit->setGeometry(QRect(6, 31, 63, 26));
        Packet_Injection_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Packet_Injection_ComboBox = new QComboBox(Packet_Injection_Widget);
        Packet_Injection_ComboBox->setObjectName(QStringLiteral("Packet_Injection_ComboBox"));
        Packet_Injection_ComboBox->setGeometry(QRect(125, 5, 151, 21));
        Packet_Injection_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Packet_Injection_Edit_2 = new QTextEdit(Packet_Injection_Widget);
        Packet_Injection_Edit_2->setObjectName(QStringLiteral("Packet_Injection_Edit_2"));
        Packet_Injection_Edit_2->setGeometry(QRect(75, 31, 63, 26));
        Packet_Injection_Edit_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Packet_Injection_Edit_3 = new QTextEdit(Packet_Injection_Widget);
        Packet_Injection_Edit_3->setObjectName(QStringLiteral("Packet_Injection_Edit_3"));
        Packet_Injection_Edit_3->setGeometry(QRect(144, 31, 63, 26));
        Packet_Injection_Edit_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Packet_Injection_Edit_4 = new QTextEdit(Packet_Injection_Widget);
        Packet_Injection_Edit_4->setObjectName(QStringLiteral("Packet_Injection_Edit_4"));
        Packet_Injection_Edit_4->setGeometry(QRect(213, 31, 62, 26));
        Packet_Injection_Edit_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Retransmission_Widget = new QWidget(Packet_Options_Group);
        Retransmission_Widget->setObjectName(QStringLiteral("Retransmission_Widget"));
        Retransmission_Widget->setGeometry(QRect(10, 85, 271, 26));
        Retransmission_Label = new QLabel(Retransmission_Widget);
        Retransmission_Label->setObjectName(QStringLiteral("Retransmission_Label"));
        Retransmission_Label->setGeometry(QRect(0, 0, 191, 26));
        Retransmission_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Retransmission_Edit = new QTextEdit(Retransmission_Widget);
        Retransmission_Edit->setObjectName(QStringLiteral("Retransmission_Edit"));
        Retransmission_Edit->setGeometry(QRect(190, 0, 81, 25));
        Retransmission_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Traffic_Options_Group = new QGroupBox(Simulation_Params_Widget);
        Traffic_Options_Group->setObjectName(QStringLiteral("Traffic_Options_Group"));
        Traffic_Options_Group->setGeometry(QRect(545, 35, 276, 106));
        Traffic_Options_Group->setAutoFillBackground(false);
        Traffic_Options_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Traffic_Options_Group->setCheckable(false);
        Traffic_Pattern_Widget = new QWidget(Traffic_Options_Group);
        Traffic_Pattern_Widget->setObjectName(QStringLiteral("Traffic_Pattern_Widget"));
        Traffic_Pattern_Widget->setGeometry(QRect(10, 19, 261, 52));
        Traffic_Pattern_Label = new QLabel(Traffic_Pattern_Widget);
        Traffic_Pattern_Label->setObjectName(QStringLiteral("Traffic_Pattern_Label"));
        Traffic_Pattern_Label->setGeometry(QRect(0, -5, 176, 21));
        Traffic_Pattern_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Traffic_Pattern_ComboBox = new QComboBox(Traffic_Pattern_Widget);
        Traffic_Pattern_ComboBox->setObjectName(QStringLiteral("Traffic_Pattern_ComboBox"));
        Traffic_Pattern_ComboBox->setGeometry(QRect(0, 20, 256, 21));
        Traffic_Pattern_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Traffic_Options_File = new QLineEdit(Traffic_Options_Group);
        Traffic_Options_File->setObjectName(QStringLiteral("Traffic_Options_File"));
        Traffic_Options_File->setGeometry(QRect(10, 77, 256, 19));
        Traffic_Options_File->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;"));
        NoximGUI_Label = new QLabel(Simulation_Params_Widget);
        NoximGUI_Label->setObjectName(QStringLiteral("NoximGUI_Label"));
        NoximGUI_Label->setGeometry(QRect(595, 185, 176, 26));
        Wireless_Config_Widget = new QWidget(Main_Background_Frame);
        Wireless_Config_Widget->setObjectName(QStringLiteral("Wireless_Config_Widget"));
        Wireless_Config_Widget->setGeometry(QRect(10, 470, 831, 331));
        Wireless_Config_Widget->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
"border-radius: 5px;\n"
""));
        Wireless_Config_Label = new QLabel(Wireless_Config_Widget);
        Wireless_Config_Label->setObjectName(QStringLiteral("Wireless_Config_Label"));
        Wireless_Config_Label->setGeometry(QRect(10, 10, 261, 21));
        pushButton = new QPushButton(Wireless_Config_Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 5, 121, 31));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        widget = new QWidget(Wireless_Config_Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 45, 431, 276));
        widget->setStyleSheet(QLatin1String("border-radius: 9px;\n"
"background-color: rgb(255, 255, 255);"));
        Hub_Defaults_Group = new QGroupBox(Wireless_Config_Widget);
        Hub_Defaults_Group->setObjectName(QStringLiteral("Hub_Defaults_Group"));
        Hub_Defaults_Group->setGeometry(QRect(10, 35, 371, 156));
        Hub_Defaults_Group->setAutoFillBackground(false);
        Hub_Defaults_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Hub_Defaults_Group->setCheckable(false);
        verticalLayout_7 = new QVBoxLayout(Hub_Defaults_Group);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        TT_Buffer_Size_Widget = new QWidget(Hub_Defaults_Group);
        TT_Buffer_Size_Widget->setObjectName(QStringLiteral("TT_Buffer_Size_Widget"));
        TT_Buffer_Size_Label = new QLabel(TT_Buffer_Size_Widget);
        TT_Buffer_Size_Label->setObjectName(QStringLiteral("TT_Buffer_Size_Label"));
        TT_Buffer_Size_Label->setGeometry(QRect(0, 0, 181, 26));
        TT_Buffer_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        TT_Buffer_Size_Edit = new QTextEdit(TT_Buffer_Size_Widget);
        TT_Buffer_Size_Edit->setObjectName(QStringLiteral("TT_Buffer_Size_Edit"));
        TT_Buffer_Size_Edit->setGeometry(QRect(190, 0, 161, 26));
        TT_Buffer_Size_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_7->addWidget(TT_Buffer_Size_Widget);

        FT_Buffer_Size_Widget = new QWidget(Hub_Defaults_Group);
        FT_Buffer_Size_Widget->setObjectName(QStringLiteral("FT_Buffer_Size_Widget"));
        FT_Buffer_Size_Label = new QLabel(FT_Buffer_Size_Widget);
        FT_Buffer_Size_Label->setObjectName(QStringLiteral("FT_Buffer_Size_Label"));
        FT_Buffer_Size_Label->setGeometry(QRect(0, 0, 181, 26));
        FT_Buffer_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        FT_Buffer_Size_Edit = new QTextEdit(FT_Buffer_Size_Widget);
        FT_Buffer_Size_Edit->setObjectName(QStringLiteral("FT_Buffer_Size_Edit"));
        FT_Buffer_Size_Edit->setGeometry(QRect(190, -5, 161, 31));
        FT_Buffer_Size_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_7->addWidget(FT_Buffer_Size_Widget);

        Antenna_Buffer_RX_Widget = new QWidget(Hub_Defaults_Group);
        Antenna_Buffer_RX_Widget->setObjectName(QStringLiteral("Antenna_Buffer_RX_Widget"));
        Antenna_Buffer_RX_Label = new QLabel(Antenna_Buffer_RX_Widget);
        Antenna_Buffer_RX_Label->setObjectName(QStringLiteral("Antenna_Buffer_RX_Label"));
        Antenna_Buffer_RX_Label->setGeometry(QRect(0, 0, 181, 26));
        Antenna_Buffer_RX_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Antenna_Buffer_RX_Edit = new QTextEdit(Antenna_Buffer_RX_Widget);
        Antenna_Buffer_RX_Edit->setObjectName(QStringLiteral("Antenna_Buffer_RX_Edit"));
        Antenna_Buffer_RX_Edit->setGeometry(QRect(190, -5, 161, 31));
        Antenna_Buffer_RX_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_7->addWidget(Antenna_Buffer_RX_Widget);

        Antenna_Buffer_TX_Widget = new QWidget(Hub_Defaults_Group);
        Antenna_Buffer_TX_Widget->setObjectName(QStringLiteral("Antenna_Buffer_TX_Widget"));
        Antenna_Buffer_TX_Label = new QLabel(Antenna_Buffer_TX_Widget);
        Antenna_Buffer_TX_Label->setObjectName(QStringLiteral("Antenna_Buffer_TX_Label"));
        Antenna_Buffer_TX_Label->setGeometry(QRect(0, 0, 186, 26));
        Antenna_Buffer_TX_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Antenna_Buffer_TX_Edit = new QTextEdit(Antenna_Buffer_TX_Widget);
        Antenna_Buffer_TX_Edit->setObjectName(QStringLiteral("Antenna_Buffer_TX_Edit"));
        Antenna_Buffer_TX_Edit->setGeometry(QRect(190, 0, 161, 26));
        Antenna_Buffer_TX_Edit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));

        verticalLayout_7->addWidget(Antenna_Buffer_TX_Widget);

        Channel_Defaults_Group = new QGroupBox(Wireless_Config_Widget);
        Channel_Defaults_Group->setObjectName(QStringLiteral("Channel_Defaults_Group"));
        Channel_Defaults_Group->setGeometry(QRect(10, 200, 371, 121));
        Channel_Defaults_Group->setAutoFillBackground(false);
        Channel_Defaults_Group->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: normal;"));
        Channel_Defaults_Group->setCheckable(false);
        TT_Buffer_Size_Widget_2 = new QWidget(Channel_Defaults_Group);
        TT_Buffer_Size_Widget_2->setObjectName(QStringLiteral("TT_Buffer_Size_Widget_2"));
        TT_Buffer_Size_Widget_2->setGeometry(QRect(10, 19, 356, 27));
        TT_Buffer_Size_Label_2 = new QLabel(TT_Buffer_Size_Widget_2);
        TT_Buffer_Size_Label_2->setObjectName(QStringLiteral("TT_Buffer_Size_Label_2"));
        TT_Buffer_Size_Label_2->setGeometry(QRect(0, 0, 181, 26));
        TT_Buffer_Size_Label_2->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        TT_Buffer_Size_Edit_2 = new QTextEdit(TT_Buffer_Size_Widget_2);
        TT_Buffer_Size_Edit_2->setObjectName(QStringLiteral("TT_Buffer_Size_Edit_2"));
        TT_Buffer_Size_Edit_2->setGeometry(QRect(190, 0, 161, 31));
        TT_Buffer_Size_Edit_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        FT_Buffer_Size_Widget_2 = new QWidget(Channel_Defaults_Group);
        FT_Buffer_Size_Widget_2->setObjectName(QStringLiteral("FT_Buffer_Size_Widget_2"));
        FT_Buffer_Size_Widget_2->setGeometry(QRect(10, 52, 356, 66));
        FT_Buffer_Size_Label_2 = new QLabel(FT_Buffer_Size_Widget_2);
        FT_Buffer_Size_Label_2->setObjectName(QStringLiteral("FT_Buffer_Size_Label_2"));
        FT_Buffer_Size_Label_2->setGeometry(QRect(0, 0, 136, 31));
        FT_Buffer_Size_Label_2->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        FT_Buffer_Size_Edit_2 = new QTextEdit(FT_Buffer_Size_Widget_2);
        FT_Buffer_Size_Edit_2->setObjectName(QStringLiteral("FT_Buffer_Size_Edit_2"));
        FT_Buffer_Size_Edit_2->setGeometry(QRect(0, 35, 351, 26));
        FT_Buffer_Size_Edit_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 11pt;\n"
"text-align: right;"));
        Algorithm_ComboBox_2 = new QComboBox(FT_Buffer_Size_Widget_2);
        Algorithm_ComboBox_2->setObjectName(QStringLiteral("Algorithm_ComboBox_2"));
        Algorithm_ComboBox_2->setGeometry(QRect(140, 5, 211, 21));
        Algorithm_ComboBox_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));

        verticalLayout_5->addWidget(Main_Background_Frame);

        NoximGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NoximGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuRun = new QMenu(menuBar);
        menuRun->setObjectName(QStringLiteral("menuRun"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QStringLiteral("menuAnalyze"));
        NoximGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NoximGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(20, 20));
        NoximGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NoximGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setBaseSize(QSize(0, 0));
        NoximGUI->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuRun->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClear_All_Fields);
        menuWindow->addAction(actionFull_Screen);
        menuWindow->addSeparator();
        menuWindow->addAction(actionPreferences);
        menuHelp->addAction(actionTutorial);
        menuHelp->addAction(actionWhat_s_This);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSend_Feedback);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_noximGUI);
        menuRun->addAction(actionRun_Simulation);
        menuRun->addAction(actionRun_Configurations);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionExport);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionClear_All_Fields);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun_Simulation);
        mainToolBar->addAction(actionRun_Configurations);
        mainToolBar->addSeparator();

        retranslateUi(NoximGUI);

        QMetaObject::connectSlotsByName(NoximGUI);
    } // setupUi

    void retranslateUi(QMainWindow *NoximGUI)
    {
        NoximGUI->setWindowTitle(QApplication::translate("NoximGUI", "noximGUI", 0));
        actionNew->setText(QApplication::translate("NoximGUI", "New...", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("NoximGUI", "New Configuration", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("NoximGUI", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("NoximGUI", "Open...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("NoximGUI", "Open Configuration", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("NoximGUI", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("NoximGUI", "Save...", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("NoximGUI", "Save Configuration", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("NoximGUI", "Ctrl+S", 0));
        actionSave_As->setText(QApplication::translate("NoximGUI", "Save As...", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_As->setToolTip(QApplication::translate("NoximGUI", "Save Configuration As...", 0));
#endif // QT_NO_TOOLTIP
        actionExport->setText(QApplication::translate("NoximGUI", "Export", 0));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("NoximGUI", "Export Configuration", 0));
#endif // QT_NO_TOOLTIP
        actionExport->setShortcut(QApplication::translate("NoximGUI", "Ctrl+E", 0));
        actionPrint->setText(QApplication::translate("NoximGUI", "Print", 0));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("NoximGUI", "Print Configuration", 0));
#endif // QT_NO_TOOLTIP
        actionPrint->setShortcut(QApplication::translate("NoximGUI", "Ctrl+P", 0));
        actionExit->setText(QApplication::translate("NoximGUI", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("NoximGUI", "Exit Application", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Q", 0));
        actionPreferences->setText(QApplication::translate("NoximGUI", "Preferences", 0));
        actionFull_Screen->setText(QApplication::translate("NoximGUI", "Full Screen", 0));
        actionFull_Screen->setShortcut(QApplication::translate("NoximGUI", "F11", 0));
        actionUndo->setText(QApplication::translate("NoximGUI", "Undo", 0));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("NoximGUI", "Undo", 0));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("NoximGUI", "Redo", 0));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("NoximGUI", "Redo", 0));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Shift+Z", 0));
        actionCut->setText(QApplication::translate("NoximGUI", "Cut", 0));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("NoximGUI", "Cut", 0));
#endif // QT_NO_TOOLTIP
        actionCut->setShortcut(QApplication::translate("NoximGUI", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("NoximGUI", "Copy", 0));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("NoximGUI", "Copy", 0));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("NoximGUI", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("NoximGUI", "Paste", 0));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("NoximGUI", "Paste", 0));
#endif // QT_NO_TOOLTIP
        actionPaste->setShortcut(QApplication::translate("NoximGUI", "Ctrl+V", 0));
        actionClear_All_Fields->setText(QApplication::translate("NoximGUI", "Clear All Fields", 0));
#ifndef QT_NO_TOOLTIP
        actionClear_All_Fields->setToolTip(QApplication::translate("NoximGUI", "Clear All", 0));
#endif // QT_NO_TOOLTIP
        actionClear_All_Fields->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Shift+Backspace", 0));
        actionRun_Simulation->setText(QApplication::translate("NoximGUI", "Run Simulation", 0));
#ifndef QT_NO_TOOLTIP
        actionRun_Simulation->setToolTip(QApplication::translate("NoximGUI", "Run Simulation", 0));
#endif // QT_NO_TOOLTIP
        actionRun_Simulation->setShortcut(QApplication::translate("NoximGUI", "Ctrl+R", 0));
        actionRun_Configurations->setText(QApplication::translate("NoximGUI", "Run Configurations...", 0));
#ifndef QT_NO_TOOLTIP
        actionRun_Configurations->setToolTip(QApplication::translate("NoximGUI", "Run Configurations", 0));
#endif // QT_NO_TOOLTIP
        actionRun_Configurations->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Shift+R", 0));
        actionTutorial->setText(QApplication::translate("NoximGUI", "noximGUI Help", 0));
#ifndef QT_NO_TOOLTIP
        actionTutorial->setToolTip(QApplication::translate("NoximGUI", "Tutorial", 0));
#endif // QT_NO_TOOLTIP
        actionTutorial->setShortcut(QApplication::translate("NoximGUI", "F1", 0));
        actionWhat_s_This->setText(QApplication::translate("NoximGUI", "What's This?", 0));
#ifndef QT_NO_TOOLTIP
        actionWhat_s_This->setToolTip(QApplication::translate("NoximGUI", "Turn Off Tooltips", 0));
#endif // QT_NO_TOOLTIP
        actionWhat_s_This->setShortcut(QApplication::translate("NoximGUI", "Ctrl+H", 0));
        actionSend_Feedback->setText(QApplication::translate("NoximGUI", "Send Feedback...", 0));
#ifndef QT_NO_TOOLTIP
        actionSend_Feedback->setToolTip(QApplication::translate("NoximGUI", "Send Feedback", 0));
#endif // QT_NO_TOOLTIP
        actionSend_Feedback->setShortcut(QApplication::translate("NoximGUI", "Ctrl+Shift+F", 0));
        actionAbout_noximGUI->setText(QApplication::translate("NoximGUI", "About...", 0));
        Wired_Config_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Wired Configuration</span></p></body></html>", 0));
        Mesh_Dim_Group->setTitle(QApplication::translate("NoximGUI", "Mesh Dimensions", 0));
        X_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Mesh Size (X):</p></body></html>", 0));
        Y_Label->setText(QApplication::translate("NoximGUI", "Mesh Size (Y):", 0));
        Buffer_Group->setTitle(QApplication::translate("NoximGUI", "Buffer", 0));
        Depth_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Depth:</p></body></html>", 0));
        Flit_Group->setTitle(QApplication::translate("NoximGUI", "Flit Options", 0));
        Flit_Size_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Size (bits):</p></body></html>", 0));
        Connection_Group->setTitle(QApplication::translate("NoximGUI", "Connection Lengths", 0));
        RH_Length_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">R-to-H (mm):</p></body></html>", 0));
        RR_Length_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">R-to-R (mm):</p></body></html>", 0));
        Routing_Options_Group->setTitle(QApplication::translate("NoximGUI", "Routing Options", 0));
        Algorithm_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Algorithm:</p></body></html>", 0));
        Selection_Strategy_Label->setText(QApplication::translate("NoximGUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Selection Strategy:</p></body></html>", 0));
        Simulation_Params_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Simulation Parameters</span></p></body></html>", 0));
        Clock_Options_Group->setTitle(QApplication::translate("NoximGUI", "Clock Options", 0));
        Clock_Period_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Clock Period (ps):</p></body></html>", 0));
        Simulation_Time_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Simulation Time:</p></body></html>", 0));
        Warmup_Time_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Warmup Time:</p></body></html>", 0));
        Reset_Time_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Reset Time:</p></body></html>", 0));
        Warmup_Time_Label_2->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Delivery Stop:</p></body></html>", 0));
        Wireless_CheckBox->setText(QApplication::translate("NoximGUI", "Use Wireless", 0));
        Power_Save_CheckBox->setText(QApplication::translate("NoximGUI", "Power Saving", 0));
        Trace_Mode_CheckBox->setText(QApplication::translate("NoximGUI", "Trace Mode", 0));
        Packet_Options_Group->setTitle(QApplication::translate("NoximGUI", "Packet Options", 0));
        Min_Packet_Size_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Min Packet Size:</p></body></html>", 0));
        Max_Packet_Size_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Max Packet Size:</p></body></html>", 0));
        Packet_Injection_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Packet Injection:</p></body></html>", 0));
        Retransmission_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Retransmission Probability:</span></p></body></html>", 0));
        Traffic_Options_Group->setTitle(QApplication::translate("NoximGUI", "Traffic Options", 0));
        Traffic_Pattern_Label->setText(QApplication::translate("NoximGUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Traffic Pattern:</p></body></html>", 0));
        NoximGUI_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">NoximGUI </span><span style=\" font-size:12pt;\">v0.6.0</span></p></body></html>", 0));
        Wireless_Config_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Wireless Configuration</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("NoximGUI", "Add Channel...", 0));
        Hub_Defaults_Group->setTitle(QApplication::translate("NoximGUI", "Hub Defaults", 0));
        TT_Buffer_Size_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">To-Tile Buffer Size:</p></body></html>", 0));
        FT_Buffer_Size_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">From-Tile Buffer Size:</p></body></html>", 0));
        Antenna_Buffer_RX_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Antenna Buffer (RX):</p></body></html>", 0));
        Antenna_Buffer_TX_Label->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Antenna Buffer (TX):</p></body></html>", 0));
        Channel_Defaults_Group->setTitle(QApplication::translate("NoximGUI", "Channel Defaults", 0));
        TT_Buffer_Size_Label_2->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Flit Transmission Rate:</p></body></html>", 0));
        FT_Buffer_Size_Label_2->setText(QApplication::translate("NoximGUI", "<html><head/><body><p align=\"center\">Mac Policy:</p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("NoximGUI", "File", 0));
        menuEdit->setTitle(QApplication::translate("NoximGUI", "Edit", 0));
        menuWindow->setTitle(QApplication::translate("NoximGUI", "Window", 0));
        menuHelp->setTitle(QApplication::translate("NoximGUI", "Help", 0));
        menuRun->setTitle(QApplication::translate("NoximGUI", "Run", 0));
        menuAnalyze->setTitle(QApplication::translate("NoximGUI", "Analyze", 0));
    } // retranslateUi

};

namespace Ui {
    class NoximGUI: public Ui_NoximGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOXIMGUI_H
