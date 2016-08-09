#include "noximgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    NoximGUI window;

    return app.exec();
}
