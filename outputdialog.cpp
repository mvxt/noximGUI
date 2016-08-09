#include "outputdialog.h"
#include "ui_outputdialog.h"

OutputDialog::OutputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputDialog)
{
    ui->setupUi(this);
}

OutputDialog::~OutputDialog()
{
    delete ui;
}

void OutputDialog::showOutput( QString text )
{
    ui->Simulation_Output_TextEdit_4->setText( text );
    ui->Simulation_Output_TextEdit_4->setReadOnly( true );
}
