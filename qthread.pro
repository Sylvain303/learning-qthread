TEMPLATE = app

CONFIG += c++11
CONFIG += console
CONFIG -= app_bundle

QT -= gui

SOURCES += main.cpp engine.cpp mythread.cpp
HEADERS += engine.h mythread.h
