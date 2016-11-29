#-------------------------------------------------
#
# Project created by QtCreator 2016-08-08T20:54:40
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NoximGUI
TEMPLATE = app


SOURCES += main.cpp \
    noximgui.cpp \
    outputdialog.cpp

HEADERS  += \
    noximgui.h \
    outputdialog.h

FORMS    += \
    noximgui.ui \
    outputdialog.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../usr/local/include/yaml-cpp/release/ -lyaml-cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../usr/local/include/yaml-cpp/debug/ -lyaml-cpp
else:unix: LIBS += -L$$PWD/../../../usr/local/include/yaml-cpp/ -lyaml-cpp

INCLUDEPATH += $$PWD/../../../usr/local/include/yaml-cpp
DEPENDPATH += $$PWD/../../../usr/local/include/yaml-cpp

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/release/libyaml-cpp.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/debug/libyaml-cpp.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/release/yaml-cpp.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/debug/yaml-cpp.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../usr/local/include/yaml-cpp/libyaml-cpp.a

DISTFILES += \
    default_config.yaml \
    default_power.yaml \
    splash.jpg

RESOURCES += \
    resources.qrc
