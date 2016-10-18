QT += core
QT -= gui

CONFIG += c++11

TARGET = MidiTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

include (../drumstick/drumstick.pro)
