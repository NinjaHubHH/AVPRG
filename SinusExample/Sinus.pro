#-------------------------------------------------
#
# Project created by QtCreator 2014-08-04T12:43:08
#
#-------------------------------------------------

QT       += core gui widgets multimedia


TARGET = Sinus
TEMPLATE = app

INCLUDEPATH += ../audioEngine
SOURCES += main.cpp\
        mainwindow.cpp\
        oscillatorsource.cpp\
    sinus.cpp

HEADERS  += mainwindow.h \
    oscillatorsource.h\
    sinus.h

FORMS    += mainwindow.ui

include(../audioEngine/audioplayer.pri)
