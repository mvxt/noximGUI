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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputDialog
{
public:
    QFrame *Output_Dialog_Frame;
    QWidget *Simulation_Widget_4;
    QLabel *Simulation_Label_4;
    QTextEdit *Simulation_Output_TextEdit_4;
    QDialogButtonBox *Output_Dialog_ButtonBox_4;

    void setupUi(QDialog *OutputDialog)
    {
        if (OutputDialog->objectName().isEmpty())
            OutputDialog->setObjectName(QStringLiteral("OutputDialog"));
        OutputDialog->resize(700, 579);
        Output_Dialog_Frame = new QFrame(OutputDialog);
        Output_Dialog_Frame->setObjectName(QStringLiteral("Output_Dialog_Frame"));
        Output_Dialog_Frame->setGeometry(QRect(0, 0, 701, 581));
        Output_Dialog_Frame->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177);"));
        Output_Dialog_Frame->setFrameShape(QFrame::StyledPanel);
        Output_Dialog_Frame->setFrameShadow(QFrame::Raised);
        Simulation_Widget_4 = new QWidget(Output_Dialog_Frame);
        Simulation_Widget_4->setObjectName(QStringLiteral("Simulation_Widget_4"));
        Simulation_Widget_4->setGeometry(QRect(10, 10, 676, 526));
        Simulation_Widget_4->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
"border-radius: 5px;\n"
""));
        Simulation_Label_4 = new QLabel(Simulation_Widget_4);
        Simulation_Label_4->setObjectName(QStringLiteral("Simulation_Label_4"));
        Simulation_Label_4->setGeometry(QRect(10, 0, 221, 36));
        Simulation_Output_TextEdit_4 = new QTextEdit(Simulation_Widget_4);
        Simulation_Output_TextEdit_4->setObjectName(QStringLiteral("Simulation_Output_TextEdit_4"));
        Simulation_Output_TextEdit_4->setGeometry(QRect(10, 35, 656, 481));
        Simulation_Output_TextEdit_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        Output_Dialog_ButtonBox_4 = new QDialogButtonBox(Output_Dialog_Frame);
        Output_Dialog_ButtonBox_4->setObjectName(QStringLiteral("Output_Dialog_ButtonBox_4"));
        Output_Dialog_ButtonBox_4->setGeometry(QRect(-25, 545, 701, 32));
        Output_Dialog_ButtonBox_4->setOrientation(Qt::Horizontal);
        Output_Dialog_ButtonBox_4->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(OutputDialog);
        QObject::connect(Output_Dialog_ButtonBox_4, SIGNAL(accepted()), OutputDialog, SLOT(close()));
        QObject::connect(Output_Dialog_ButtonBox_4, SIGNAL(rejected()), OutputDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(OutputDialog);
    } // setupUi

    void retranslateUi(QDialog *OutputDialog)
    {
        OutputDialog->setWindowTitle(QApplication::translate("OutputDialog", "Dialog", 0));
        Simulation_Label_4->setText(QApplication::translate("OutputDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Simulation Output</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class OutputDialog: public Ui_OutputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTDIALOG_H
