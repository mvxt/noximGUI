/********************************************************************************
** Form generated from reading UI file 'run_configurations.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_CONFIGURATIONS_H
#define UI_RUN_CONFIGURATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *Run_Configurations_Frame;
    QTabWidget *Run_Confirmations_Tab_Widget;
    QWidget *Misc_Config_Tab;
    QGroupBox *Simulation_Options_GroupBox;
    QCheckBox *Wireless_CheckBox;
    QCheckBox *Power_Saving_Mode_CheckBox;
    QWidget *Random_Number_Seed_Widget;
    QLabel *Random_Number_Seed_Label;
    QSpinBox *Random_Number_Seed_SpinBox;
    QCheckBox *Low_Power_Link_CheckBox;
    QWidget *Verbose_Widget;
    QCheckBox *Verbose_CheckBox;
    QComboBox *Verbose_ComboBox;
    QCheckBox *Detailed_Output_Checkbox;
    QGroupBox *Administrative_GroupBox;
    QCheckBox *Trace_Mode_CheckBox;
    QWidget *Trace_Mode_File_Widget;
    QPushButton *Trace_Mode_File_PushButton;
    QLineEdit *Trace_Mode_File_LineEdit;
    QGroupBox *Power_Configuration_GroupBox;
    QListWidget *Power_Configuration_ListWidget;
    QPushButton *Power_Configuration_Delete_PushButton;
    QPushButton *Power_Configuration_Add_PushButton;
    QPushButton *Power_Configuration_Edit_PushButton;
    QWidget *Sweeping_Config_Tab;
    QGroupBox *Sweep_Options_GroupBox;
    QWidget *widget_2;
    QComboBox *comboBox_2;
    QLabel *label;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGraphicsView *graphicsView;
    QWidget *widget_5;
    QPushButton *pushButton_6;
    QCheckBox *Power_Save_CheckBox_14;
    QLineEdit *lineEdit;
    QCheckBox *Enable_Sweeping_CheckBox;
    QDialogButtonBox *Confirm_ButtonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(640, 490);
        Dialog->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid black;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-position:top middle;\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"QLabel {\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"QLabel:disabled {\n"
"	color:rgb(120, 120, 120);\n"
"}\n"
"QLineEdit:disabled{\n"
"	background-color:rgb(180, 180, 180);\n"
"}\n"
"QWidget:disabled{\n"
"	background-color:rgb(180, 180, 180);\n"
"}\n"
"QTextEdit:disabled{\n"
"	background-color:rgb(180, 180, 180);\n"
"}\n"
"QComboBox:disabled{\n"
"	background-color:rgb(180, 180, 180);\n"
"}\n"
"background-color: rgb(80, 80, 80);"));
        Run_Configurations_Frame = new QFrame(Dialog);
        Run_Configurations_Frame->setObjectName(QStringLiteral("Run_Configurations_Frame"));
        Run_Configurations_Frame->setGeometry(QRect(0, 0, 641, 491));
        Run_Configurations_Frame->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80)"));
        Run_Configurations_Frame->setFrameShape(QFrame::StyledPanel);
        Run_Configurations_Frame->setFrameShadow(QFrame::Raised);
        Run_Confirmations_Tab_Widget = new QTabWidget(Run_Configurations_Frame);
        Run_Confirmations_Tab_Widget->setObjectName(QStringLiteral("Run_Confirmations_Tab_Widget"));
        Run_Confirmations_Tab_Widget->setGeometry(QRect(0, 0, 641, 431));
        Run_Confirmations_Tab_Widget->setStyleSheet(QLatin1String("background-color: rgb(50, 50, 50);\n"
"border-radius: 5px;"));
        Misc_Config_Tab = new QWidget();
        Misc_Config_Tab->setObjectName(QStringLiteral("Misc_Config_Tab"));
        Simulation_Options_GroupBox = new QGroupBox(Misc_Config_Tab);
        Simulation_Options_GroupBox->setObjectName(QStringLiteral("Simulation_Options_GroupBox"));
        Simulation_Options_GroupBox->setGeometry(QRect(10, 10, 296, 186));
        Simulation_Options_GroupBox->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Wireless_CheckBox = new QCheckBox(Simulation_Options_GroupBox);
        Wireless_CheckBox->setObjectName(QStringLiteral("Wireless_CheckBox"));
        Wireless_CheckBox->setEnabled(false);
        Wireless_CheckBox->setGeometry(QRect(15, 20, 156, 22));
        Power_Saving_Mode_CheckBox = new QCheckBox(Simulation_Options_GroupBox);
        Power_Saving_Mode_CheckBox->setObjectName(QStringLiteral("Power_Saving_Mode_CheckBox"));
        Power_Saving_Mode_CheckBox->setGeometry(QRect(15, 45, 161, 22));
        Random_Number_Seed_Widget = new QWidget(Simulation_Options_GroupBox);
        Random_Number_Seed_Widget->setObjectName(QStringLiteral("Random_Number_Seed_Widget"));
        Random_Number_Seed_Widget->setGeometry(QRect(15, 150, 271, 26));
        Random_Number_Seed_Label = new QLabel(Random_Number_Seed_Widget);
        Random_Number_Seed_Label->setObjectName(QStringLiteral("Random_Number_Seed_Label"));
        Random_Number_Seed_Label->setGeometry(QRect(0, 0, 191, 26));
        Random_Number_Seed_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Random_Number_Seed_SpinBox = new QSpinBox(Random_Number_Seed_Widget);
        Random_Number_Seed_SpinBox->setObjectName(QStringLiteral("Random_Number_Seed_SpinBox"));
        Random_Number_Seed_SpinBox->setGeometry(QRect(185, 0, 81, 27));
        Random_Number_Seed_SpinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Low_Power_Link_CheckBox = new QCheckBox(Simulation_Options_GroupBox);
        Low_Power_Link_CheckBox->setObjectName(QStringLiteral("Low_Power_Link_CheckBox"));
        Low_Power_Link_CheckBox->setGeometry(QRect(15, 70, 251, 22));
        Verbose_Widget = new QWidget(Simulation_Options_GroupBox);
        Verbose_Widget->setObjectName(QStringLiteral("Verbose_Widget"));
        Verbose_Widget->setGeometry(QRect(15, 120, 271, 26));
        Verbose_CheckBox = new QCheckBox(Verbose_Widget);
        Verbose_CheckBox->setObjectName(QStringLiteral("Verbose_CheckBox"));
        Verbose_CheckBox->setGeometry(QRect(0, 0, 106, 22));
        Verbose_ComboBox = new QComboBox(Verbose_Widget);
        Verbose_ComboBox->setObjectName(QStringLiteral("Verbose_ComboBox"));
        Verbose_ComboBox->setGeometry(QRect(105, 0, 161, 21));
        Verbose_ComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Detailed_Output_Checkbox = new QCheckBox(Simulation_Options_GroupBox);
        Detailed_Output_Checkbox->setObjectName(QStringLiteral("Detailed_Output_Checkbox"));
        Detailed_Output_Checkbox->setGeometry(QRect(15, 95, 161, 22));
        Administrative_GroupBox = new QGroupBox(Misc_Config_Tab);
        Administrative_GroupBox->setObjectName(QStringLiteral("Administrative_GroupBox"));
        Administrative_GroupBox->setGeometry(QRect(315, 10, 316, 156));
        Administrative_GroupBox->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Trace_Mode_CheckBox = new QCheckBox(Administrative_GroupBox);
        Trace_Mode_CheckBox->setObjectName(QStringLiteral("Trace_Mode_CheckBox"));
        Trace_Mode_CheckBox->setGeometry(QRect(15, 20, 111, 22));
        Trace_Mode_File_Widget = new QWidget(Administrative_GroupBox);
        Trace_Mode_File_Widget->setObjectName(QStringLiteral("Trace_Mode_File_Widget"));
        Trace_Mode_File_Widget->setGeometry(QRect(20, 50, 286, 21));
        Trace_Mode_File_PushButton = new QPushButton(Trace_Mode_File_Widget);
        Trace_Mode_File_PushButton->setObjectName(QStringLiteral("Trace_Mode_File_PushButton"));
        Trace_Mode_File_PushButton->setGeometry(QRect(210, 0, 71, 21));
        Trace_Mode_File_PushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        Trace_Mode_File_LineEdit = new QLineEdit(Trace_Mode_File_Widget);
        Trace_Mode_File_LineEdit->setObjectName(QStringLiteral("Trace_Mode_File_LineEdit"));
        Trace_Mode_File_LineEdit->setGeometry(QRect(0, -1, 201, 21));
        Trace_Mode_File_LineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 10pt;\n"
""));
        Power_Configuration_GroupBox = new QGroupBox(Misc_Config_Tab);
        Power_Configuration_GroupBox->setObjectName(QStringLiteral("Power_Configuration_GroupBox"));
        Power_Configuration_GroupBox->setGeometry(QRect(10, 200, 296, 191));
        Power_Configuration_GroupBox->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Power_Configuration_ListWidget = new QListWidget(Power_Configuration_GroupBox);
        Power_Configuration_ListWidget->setObjectName(QStringLiteral("Power_Configuration_ListWidget"));
        Power_Configuration_ListWidget->setGeometry(QRect(10, 20, 276, 126));
        Power_Configuration_ListWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 10pt;\n"
"text-align: right;"));
        Power_Configuration_Delete_PushButton = new QPushButton(Power_Configuration_GroupBox);
        Power_Configuration_Delete_PushButton->setObjectName(QStringLiteral("Power_Configuration_Delete_PushButton"));
        Power_Configuration_Delete_PushButton->setGeometry(QRect(130, 155, 71, 21));
        Power_Configuration_Delete_PushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        Power_Configuration_Add_PushButton = new QPushButton(Power_Configuration_GroupBox);
        Power_Configuration_Add_PushButton->setObjectName(QStringLiteral("Power_Configuration_Add_PushButton"));
        Power_Configuration_Add_PushButton->setGeometry(QRect(210, 155, 71, 21));
        Power_Configuration_Add_PushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);"));
        Power_Configuration_Edit_PushButton = new QPushButton(Power_Configuration_GroupBox);
        Power_Configuration_Edit_PushButton->setObjectName(QStringLiteral("Power_Configuration_Edit_PushButton"));
        Power_Configuration_Edit_PushButton->setGeometry(QRect(50, 155, 71, 21));
        Power_Configuration_Edit_PushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);"));
        Run_Confirmations_Tab_Widget->addTab(Misc_Config_Tab, QString());
        Sweeping_Config_Tab = new QWidget();
        Sweeping_Config_Tab->setObjectName(QStringLiteral("Sweeping_Config_Tab"));
        Sweep_Options_GroupBox = new QGroupBox(Sweeping_Config_Tab);
        Sweep_Options_GroupBox->setObjectName(QStringLiteral("Sweep_Options_GroupBox"));
        Sweep_Options_GroupBox->setEnabled(false);
        Sweep_Options_GroupBox->setGeometry(QRect(10, 30, 296, 186));
        Sweep_Options_GroupBox->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        widget_2 = new QWidget(Sweep_Options_GroupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 25, 271, 26));
        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(105, 0, 161, 21));
        comboBox_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-5, 1, 106, 21));
        label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        groupBox_5 = new QGroupBox(Sweeping_Config_Tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setEnabled(false);
        groupBox_5->setGeometry(QRect(315, 30, 316, 186));
        groupBox_5->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        radioButton = new QRadioButton(groupBox_5);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(15, 25, 117, 22));
        radioButton_2 = new QRadioButton(groupBox_5);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(15, 55, 117, 22));
        radioButton_3 = new QRadioButton(groupBox_5);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(15, 85, 117, 22));
        graphicsView = new QGraphicsView(groupBox_5);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(135, 20, 171, 91));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_5 = new QWidget(groupBox_5);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(10, 150, 296, 21));
        pushButton_6 = new QPushButton(widget_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(225, 0, 71, 21));
        pushButton_6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        Power_Save_CheckBox_14 = new QCheckBox(groupBox_5);
        Power_Save_CheckBox_14->setObjectName(QStringLiteral("Power_Save_CheckBox_14"));
        Power_Save_CheckBox_14->setGeometry(QRect(15, 120, 161, 22));
        lineEdit = new QLineEdit(groupBox_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 151, 211, 21));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;"));
        Enable_Sweeping_CheckBox = new QCheckBox(Sweeping_Config_Tab);
        Enable_Sweeping_CheckBox->setObjectName(QStringLiteral("Enable_Sweeping_CheckBox"));
        Enable_Sweeping_CheckBox->setEnabled(false);
        Enable_Sweeping_CheckBox->setGeometry(QRect(15, 5, 286, 22));
        Run_Confirmations_Tab_Widget->addTab(Sweeping_Config_Tab, QString());
        Confirm_ButtonBox = new QDialogButtonBox(Run_Configurations_Frame);
        Confirm_ButtonBox->setObjectName(QStringLiteral("Confirm_ButtonBox"));
        Confirm_ButtonBox->setGeometry(QRect(10, 445, 621, 32));
        Confirm_ButtonBox->setOrientation(Qt::Horizontal);
        Confirm_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog);

        Run_Confirmations_Tab_Widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        Simulation_Options_GroupBox->setTitle(QApplication::translate("Dialog", "Simulation Options", 0));
        Wireless_CheckBox->setText(QApplication::translate("Dialog", "Enable Wireless", 0));
        Power_Saving_Mode_CheckBox->setText(QApplication::translate("Dialog", "Power Saving Mode", 0));
        Random_Number_Seed_Label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">Random Number Seed:</p></body></html>", 0));
        Low_Power_Link_CheckBox->setText(QApplication::translate("Dialog", "Enable Low-Power Link Strategy", 0));
        Verbose_CheckBox->setText(QApplication::translate("Dialog", "Verbose", 0));
        Detailed_Output_Checkbox->setText(QApplication::translate("Dialog", "Detailed Output", 0));
        Administrative_GroupBox->setTitle(QApplication::translate("Dialog", "Administrative", 0));
        Trace_Mode_CheckBox->setText(QApplication::translate("Dialog", "Trace Mode", 0));
        Trace_Mode_File_PushButton->setText(QApplication::translate("Dialog", "File...", 0));
        Power_Configuration_GroupBox->setTitle(QApplication::translate("Dialog", "Power Configuration", 0));
        Power_Configuration_Delete_PushButton->setText(QApplication::translate("Dialog", "Delete", 0));
        Power_Configuration_Add_PushButton->setText(QApplication::translate("Dialog", "Add", 0));
        Power_Configuration_Edit_PushButton->setText(QApplication::translate("Dialog", "Edit...", 0));
        Run_Confirmations_Tab_Widget->setTabText(Run_Confirmations_Tab_Widget->indexOf(Misc_Config_Tab), QApplication::translate("Dialog", "Misc. Run Configurations", 0));
        Sweep_Options_GroupBox->setTitle(QApplication::translate("Dialog", "Sweep Options", 0));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">Variable:</p></body></html>", 0));
        groupBox_5->setTitle(QApplication::translate("Dialog", "Output Options", 0));
        radioButton->setText(QApplication::translate("Dialog", "Bar Graph", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "Line Graph", 0));
        radioButton_3->setText(QApplication::translate("Dialog", "Scatter Plot", 0));
        pushButton_6->setText(QApplication::translate("Dialog", "File...", 0));
        Power_Save_CheckBox_14->setText(QApplication::translate("Dialog", "Save copy to File:", 0));
        Enable_Sweeping_CheckBox->setText(QApplication::translate("Dialog", "Enable Sweeping (still in development)", 0));
        Run_Confirmations_Tab_Widget->setTabText(Run_Confirmations_Tab_Widget->indexOf(Sweeping_Config_Tab), QApplication::translate("Dialog", "Sweeping", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_CONFIGURATIONS_H
