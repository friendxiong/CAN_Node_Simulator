QT       += core gui

TARGET = CAN_Node_Simulator
TEMPLATE = app

WIN32
{
  LIBS += -L$$PWD/Lib/ -lECanVci64
}

!WIN32: DEFINES += OS_UNIX

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../Source/DeviceConfig.cpp \
    ../Source/main.cpp \
    ../Source/mainwindow.cpp


HEADERS += \
    ../Header/DeviceConfig.h \
    ../Header/ECanVci.h \
    ../Header/mainwindow.h


FORMS += \
    ../Forms/DeviceConfig.ui \
    ../Forms/mainwindow.ui

TRANSLATIONS += \
    CAN_Node_Simulator_en_AS.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

