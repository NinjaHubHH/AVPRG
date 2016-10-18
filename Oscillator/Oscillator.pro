#-------------------------------------------------
#
# Project created by QtCreator 2014-08-04T12:43:08
#
#-------------------------------------------------

QT       += core gui widgets multimedia


TARGET = Oscillator
TEMPLATE = app

INCLUDEPATH += ../audioEngine
SOURCES += main.cpp\
        mainwindow.cpp\
        oscillatorsource.cpp\
    oscillator.cpp

HEADERS  += mainwindow.h \
    oscillatorsource.h\
    oscillator.h

FORMS    += mainwindow.ui

include(../audioEngine/audioplayer.pri)
