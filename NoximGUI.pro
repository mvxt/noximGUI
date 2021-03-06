#-------------------------------------------------
#
# Project created by QtCreator 2016-08-08T20:54:40
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NoximGUI
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp \
    noximgui.cpp \
    outputdialog.cpp \
    runconfigurations.cpp

HEADERS  += \
    noximgui.h \
    outputdialog.h \
    runconfigurations.h

FORMS    += \
    noximgui.ui \
    runconfigurations.ui \
    outputdialog.ui

INCLUDEPATH += $$PWD/../../../usr/local/include/yaml-cpp
DEPENDPATH += $$PWD/../../../usr/local/include/yaml-cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../usr/local/include/yaml-cpp/release/ -lyaml-cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../usr/local/include/yaml-cpp/debug/ -lyaml-cpp
else:unix: CONFIG(release, debug|release): LIBS += -lyaml-cpp
else:unix: CONFIG(debug, debug|release): LIBS += -lyaml-cpp

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/release/libyaml-cpp.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/debug/libyaml-cpp.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/release/yaml-cpp.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/debug/yaml-cpp.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/libyaml-cpp.a

DISTFILES += \
    splash.png \
    logo.png

RESOURCES += \
    resources.qrc
