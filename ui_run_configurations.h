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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QTabWidget *tabWidget;
    QWidget *Misc_Config_Tab;
    QGroupBox *groupBox;
    QCheckBox *Wireless_CheckBox;
    QCheckBox *Power_Save_CheckBox;
    QWidget *Max_Packet_Size_Widget;
    QLabel *Max_Packet_Size_Label;
    QSpinBox *Max_Packet_Size_SpinBox;
    QCheckBox *Power_Save_CheckBox_2;
    QWidget *widget;
    QCheckBox *Power_Save_CheckBox_3;
    QComboBox *comboBox;
    QCheckBox *Power_Save_CheckBox_4;
    QGroupBox *groupBox_2;
    QCheckBox *Trace_Mode_CheckBox_2;
    QWidget *widget_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *Sweeping_Config_Tab;
    QGroupBox *groupBox_4;
    QCheckBox *Wireless_CheckBox_2;
    QCheckBox *Power_Save_CheckBox_5;
    QWidget *Max_Packet_Size_Widget_2;
    QLabel *Max_Packet_Size_Label_2;
    QSpinBox *Max_Packet_Size_SpinBox_2;
    QCheckBox *Power_Save_CheckBox_6;
    QWidget *widget_2;
    QCheckBox *Power_Save_CheckBox_7;
    QComboBox *comboBox_2;
    QCheckBox *Power_Save_CheckBox_8;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGraphicsView *graphicsView;
    QWidget *widget_5;
    QPushButton *pushButton_6;
    QCheckBox *Power_Save_CheckBox_14;
    QLineEdit *lineEdit;
    QCheckBox *Power_Save_CheckBox_15;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(640, 490);
        Dialog->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"background-color: rgb(80, 80, 80);"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 641, 491));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 431));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(50, 50, 50);\n"
"border-radius: 5px;"));
        Misc_Config_Tab = new QWidget();
        Misc_Config_Tab->setObjectName(QStringLiteral("Misc_Config_Tab"));
        groupBox = new QGroupBox(Misc_Config_Tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 296, 186));
        groupBox->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Wireless_CheckBox = new QCheckBox(groupBox);
        Wireless_CheckBox->setObjectName(QStringLiteral("Wireless_CheckBox"));
        Wireless_CheckBox->setGeometry(QRect(15, 20, 156, 22));
        Power_Save_CheckBox = new QCheckBox(groupBox);
        Power_Save_CheckBox->setObjectName(QStringLiteral("Power_Save_CheckBox"));
        Power_Save_CheckBox->setGeometry(QRect(15, 45, 161, 22));
        Max_Packet_Size_Widget = new QWidget(groupBox);
        Max_Packet_Size_Widget->setObjectName(QStringLiteral("Max_Packet_Size_Widget"));
        Max_Packet_Size_Widget->setGeometry(QRect(15, 150, 271, 26));
        Max_Packet_Size_Label = new QLabel(Max_Packet_Size_Widget);
        Max_Packet_Size_Label->setObjectName(QStringLiteral("Max_Packet_Size_Label"));
        Max_Packet_Size_Label->setGeometry(QRect(0, 0, 191, 26));
        Max_Packet_Size_Label->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Max_Packet_Size_SpinBox = new QSpinBox(Max_Packet_Size_Widget);
        Max_Packet_Size_SpinBox->setObjectName(QStringLiteral("Max_Packet_Size_SpinBox"));
        Max_Packet_Size_SpinBox->setGeometry(QRect(190, 0, 81, 27));
        Max_Packet_Size_SpinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Power_Save_CheckBox_2 = new QCheckBox(groupBox);
        Power_Save_CheckBox_2->setObjectName(QStringLiteral("Power_Save_CheckBox_2"));
        Power_Save_CheckBox_2->setGeometry(QRect(15, 70, 251, 22));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(15, 120, 271, 26));
        Power_Save_CheckBox_3 = new QCheckBox(widget);
        Power_Save_CheckBox_3->setObjectName(QStringLiteral("Power_Save_CheckBox_3"));
        Power_Save_CheckBox_3->setGeometry(QRect(0, 0, 106, 22));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(105, 0, 166, 21));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Power_Save_CheckBox_4 = new QCheckBox(groupBox);
        Power_Save_CheckBox_4->setObjectName(QStringLiteral("Power_Save_CheckBox_4"));
        Power_Save_CheckBox_4->setGeometry(QRect(15, 95, 161, 22));
        groupBox_2 = new QGroupBox(Misc_Config_Tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(315, 10, 316, 156));
        groupBox_2->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Trace_Mode_CheckBox_2 = new QCheckBox(groupBox_2);
        Trace_Mode_CheckBox_2->setObjectName(QStringLiteral("Trace_Mode_CheckBox_2"));
        Trace_Mode_CheckBox_2->setGeometry(QRect(15, 20, 111, 22));
        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(20, 50, 286, 21));
        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(215, 0, 71, 21));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(-5, 0, 211, 21));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 10pt;\n"
"text-align: right;"));
        groupBox_3 = new QGroupBox(Misc_Config_Tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 200, 296, 191));
        groupBox_3->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        listWidget = new QListWidget(groupBox_3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 276, 126));
        listWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"font-size: 10pt;\n"
"text-align: right;"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 155, 71, 21));
        pushButton_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
""));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 155, 71, 21));
        pushButton_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 155, 71, 21));
        pushButton_5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(240, 240, 240, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);"));
        tabWidget->addTab(Misc_Config_Tab, QString());
        Sweeping_Config_Tab = new QWidget();
        Sweeping_Config_Tab->setObjectName(QStringLiteral("Sweeping_Config_Tab"));
        groupBox_4 = new QGroupBox(Sweeping_Config_Tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 30, 296, 186));
        groupBox_4->setStyleSheet(QLatin1String("border-radius: 5px;\n"
""));
        Wireless_CheckBox_2 = new QCheckBox(groupBox_4);
        Wireless_CheckBox_2->setObjectName(QStringLiteral("Wireless_CheckBox_2"));
        Wireless_CheckBox_2->setGeometry(QRect(15, 20, 156, 22));
        Power_Save_CheckBox_5 = new QCheckBox(groupBox_4);
        Power_Save_CheckBox_5->setObjectName(QStringLiteral("Power_Save_CheckBox_5"));
        Power_Save_CheckBox_5->setGeometry(QRect(15, 45, 161, 22));
        Max_Packet_Size_Widget_2 = new QWidget(groupBox_4);
        Max_Packet_Size_Widget_2->setObjectName(QStringLiteral("Max_Packet_Size_Widget_2"));
        Max_Packet_Size_Widget_2->setGeometry(QRect(15, 150, 271, 26));
        Max_Packet_Size_Label_2 = new QLabel(Max_Packet_Size_Widget_2);
        Max_Packet_Size_Label_2->setObjectName(QStringLiteral("Max_Packet_Size_Label_2"));
        Max_Packet_Size_Label_2->setGeometry(QRect(0, 0, 191, 26));
        Max_Packet_Size_Label_2->setStyleSheet(QLatin1String("font-size: 11pt;\n"
"font-style: italic;"));
        Max_Packet_Size_SpinBox_2 = new QSpinBox(Max_Packet_Size_Widget_2);
        Max_Packet_Size_SpinBox_2->setObjectName(QStringLiteral("Max_Packet_Size_SpinBox_2"));
        Max_Packet_Size_SpinBox_2->setGeometry(QRect(190, 0, 81, 27));
        Max_Packet_Size_SpinBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Power_Save_CheckBox_6 = new QCheckBox(groupBox_4);
        Power_Save_CheckBox_6->setObjectName(QStringLiteral("Power_Save_CheckBox_6"));
        Power_Save_CheckBox_6->setGeometry(QRect(15, 70, 251, 22));
        widget_2 = new QWidget(groupBox_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(15, 120, 271, 26));
        Power_Save_CheckBox_7 = new QCheckBox(widget_2);
        Power_Save_CheckBox_7->setObjectName(QStringLiteral("Power_Save_CheckBox_7"));
        Power_Save_CheckBox_7->setGeometry(QRect(0, 0, 106, 22));
        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(105, 0, 166, 21));
        comboBox_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"text-align: center;"));
        Power_Save_CheckBox_8 = new QCheckBox(groupBox_4);
        Power_Save_CheckBox_8->setObjectName(QStringLiteral("Power_Save_CheckBox_8"));
        Power_Save_CheckBox_8->setGeometry(QRect(15, 95, 161, 22));
        groupBox_5 = new QGroupBox(Sweeping_Config_Tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
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
        Power_Save_CheckBox_15 = new QCheckBox(Sweeping_Config_Tab);
        Power_Save_CheckBox_15->setObjectName(QStringLiteral("Power_Save_CheckBox_15"));
        Power_Save_CheckBox_15->setGeometry(QRect(15, 5, 251, 22));
        tabWidget->addTab(Sweeping_Config_Tab, QString());
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 445, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Simulation Options", 0));
        Wireless_CheckBox->setText(QApplication::translate("Dialog", "Enable Wireless", 0));
        Power_Save_CheckBox->setText(QApplication::translate("Dialog", "Power Saving Mode", 0));
        Max_Packet_Size_Label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">Random Number Seed:</p></body></html>", 0));
        Power_Save_CheckBox_2->setText(QApplication::translate("Dialog", "Enable Low-Power Link Strategy", 0));
        Power_Save_CheckBox_3->setText(QApplication::translate("Dialog", "Verbose", 0));
        Power_Save_CheckBox_4->setText(QApplication::translate("Dialog", "Detailed Output", 0));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Administrative", 0));
        Trace_Mode_CheckBox_2->setText(QApplication::translate("Dialog", "Trace Mode", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "File...", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Power Configuration", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "Delete", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "Add", 0));
        pushButton_5->setText(QApplication::translate("Dialog", "Edit...", 0));
        tabWidget->setTabText(tabWidget->indexOf(Misc_Config_Tab), QApplication::translate("Dialog", "Misc. Run Configurations", 0));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Sweep Options", 0));
        Wireless_CheckBox_2->setText(QApplication::translate("Dialog", "Enable Wireless", 0));
        Power_Save_CheckBox_5->setText(QApplication::translate("Dialog", "Power Saving Mode", 0));
        Max_Packet_Size_Label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">Random Number Seed:</p></body></html>", 0));
        Power_Save_CheckBox_6->setText(QApplication::translate("Dialog", "Enable Low-Power Link Strategy", 0));
        Power_Save_CheckBox_7->setText(QApplication::translate("Dialog", "Verbose", 0));
        Power_Save_CheckBox_8->setText(QApplication::translate("Dialog", "Detailed Output", 0));
        groupBox_5->setTitle(QApplication::translate("Dialog", "Output Options", 0));
        radioButton->setText(QApplication::translate("Dialog", "Bar Graph", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "Line Graph", 0));
        radioButton_3->setText(QApplication::translate("Dialog", "Scatter Plot", 0));
        pushButton_6->setText(QApplication::translate("Dialog", "File...", 0));
        Power_Save_CheckBox_14->setText(QApplication::translate("Dialog", "Save to File:", 0));
        Power_Save_CheckBox_15->setText(QApplication::translate("Dialog", "Enable Sweeping", 0));
        tabWidget->setTabText(tabWidget->indexOf(Sweeping_Config_Tab), QApplication::translate("Dialog", "Sweeping", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_CONFIGURATIONS_H
