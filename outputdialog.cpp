#include "outputdialog.h"
#include "ui_outputdialog.h"

#include <iostream>

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

// Sets output text and prevents changes
void OutputDialog::showOutput( QString text )
{
    ui->Simulation_Output_TextBrowser->setText( text );
}

// Signal slot for print button click
void OutputDialog::on_Print_Button_clicked()
{
    QPrinter printer( QPrinter::HighResolution );
    QPrintDialog *dialog = new QPrintDialog( &printer, this );
    printer.setOutputFormat( QPrinter::PdfFormat );
    dialog->setWindowTitle( tr("Print Output") );
    if( dialog->exec() == QDialog::Accepted )
    {
        ui->Simulation_Output_TextBrowser->print( &printer );
        return;
    }
    else
    {
        return;
    }
}
