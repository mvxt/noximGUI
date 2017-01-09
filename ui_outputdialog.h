/********************************************************************************
** Form generated from reading UI file 'outputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTDIALOG_H
#define UI_OUTPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputDialog
{
public:
    QFrame *Output_Dialog_Frame;
    QWidget *Simulation_Widget;
    QLabel *Simulation_Label;
    QTextBrowser *Simulation_Output_TextBrowser;
    QDialogButtonBox *Output_Dialog_ButtonBox;
    QPushButton *Print_Button;

    void setupUi(QDialog *OutputDialog)
    {
        if (OutputDialog->objectName().isEmpty())
            OutputDialog->setObjectName(QStringLiteral("OutputDialog"));
        OutputDialog->resize(700, 579);
        Output_Dialog_Frame = new QFrame(OutputDialog);
        Output_Dialog_Frame->setObjectName(QStringLiteral("Output_Dialog_Frame"));
        Output_Dialog_Frame->setGeometry(QRect(0, 0, 701, 581));
        Output_Dialog_Frame->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80)"));
        Output_Dialog_Frame->setFrameShape(QFrame::StyledPanel);
        Output_Dialog_Frame->setFrameShadow(QFrame::Raised);
        Simulation_Widget = new QWidget(Output_Dialog_Frame);
        Simulation_Widget->setObjectName(QStringLiteral("Simulation_Widget"));
        Simulation_Widget->setGeometry(QRect(10, 10, 676, 526));
        Simulation_Widget->setStyleSheet(QLatin1String("background-color: rgb(50, 50, 50);\n"
"border-radius: 5px;\n"
""));
        Simulation_Label = new QLabel(Simulation_Widget);
        Simulation_Label->setObjectName(QStringLiteral("Simulation_Label"));
        Simulation_Label->setGeometry(QRect(10, 0, 221, 36));
        Simulation_Output_TextBrowser = new QTextBrowser(Simulation_Widget);
        Simulation_Output_TextBrowser->setObjectName(QStringLiteral("Simulation_Output_TextBrowser"));
        Simulation_Output_TextBrowser->setGeometry(QRect(10, 35, 656, 481));
        Simulation_Output_TextBrowser->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        Output_Dialog_ButtonBox = new QDialogButtonBox(Output_Dialog_Frame);
        Output_Dialog_ButtonBox->setObjectName(QStringLiteral("Output_Dialog_ButtonBox"));
        Output_Dialog_ButtonBox->setGeometry(QRect(145, 541, 536, 36));
        Output_Dialog_ButtonBox->setOrientation(Qt::Horizontal);
        Output_Dialog_ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Print_Button = new QPushButton(Output_Dialog_Frame);
        Print_Button->setObjectName(QStringLiteral("Print_Button"));
        Print_Button->setGeometry(QRect(25, 545, 99, 27));

        retranslateUi(OutputDialog);
        QObject::connect(Output_Dialog_ButtonBox, SIGNAL(accepted()), OutputDialog, SLOT(close()));
        QObject::connect(Output_Dialog_ButtonBox, SIGNAL(rejected()), OutputDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(OutputDialog);
    } // setupUi

    void retranslateUi(QDialog *OutputDialog)
    {
        OutputDialog->setWindowTitle(QApplication::translate("OutputDialog", "Dialog", 0));
        Simulation_Label->setText(QApplication::translate("OutputDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Simulation Output</span></p></body></html>", 0));
        Print_Button->setText(QApplication::translate("OutputDialog", "Print...", 0));
    } // retranslateUi

};

namespace Ui {
    class OutputDialog: public Ui_OutputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTDIALOG_H
