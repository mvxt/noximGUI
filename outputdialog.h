#ifndef OUTPUTDIALOG_H
#define OUTPUTDIALOG_H

#include <QDialog>
#include <QPainter>
#include <QPrintDialog>
#include <QPrinter>

namespace Ui {
    class OutputDialog;
}

class OutputDialog : public QDialog
{
    Q_OBJECT

  public:
    explicit OutputDialog(QWidget *parent = 0);
    void showOutput( QString text );
    ~OutputDialog();

  private slots:
    void on_Print_Button_clicked();

  private:
    Ui::OutputDialog *ui;
};

#endif // OUTPUTDIALOG_H
