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

INCLUDEPATH += include/

SOURCES += src/main.cpp \
    src/noximgui.cpp \
    src/outputdialog.cpp \
    src/runconfigurations.cpp

HEADERS  += \
    include/noximgui.h \
    include/outputdialog.h \
    include/runconfigurations.h

FORMS    += \
    forms/noximgui.ui \
    forms/runconfigurations.ui \
    forms/outputdialog.ui

DISTFILES += \
    assets/img/splash.png \
    assets/img/logo.png

RESOURCES += \
    resources.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/yaml-cpp/lib/release/ -lyaml-cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/yaml-cpp/lib/debug/ -lyaml-cpp
else:unix: LIBS += -L$$PWD/lib/yaml-cpp/lib/ -lyaml-cpp

INCLUDEPATH += $$PWD/lib/yaml-cpp/include
DEPENDPATH += $$PWD/lib/yaml-cpp/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/lib/yaml-cpp/lib/release/libyaml-cpp.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/lib/yaml-cpp/lib/debug/libyaml-cpp.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/lib/yaml-cpp/lib/release/yaml-cpp.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/lib/yaml-cpp/lib/debug/yaml-cpp.lib
else:unix: PRE_TARGETDEPS += $$PWD/lib/yaml-cpp/lib/libyaml-cpp.a
