TEMPLATE = app

CONFIG += c++11
CONFIG += console
CONFIG -= app_bundle

QT -= gui

SOURCES += main.cpp mythread.cpp engine.cpp
HEADERS += mythread.h engine.h
