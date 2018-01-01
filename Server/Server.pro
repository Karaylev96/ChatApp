QT += core
QT += network
QT -= gui
QT += sql

CONFIG += c++11

TARGET = Server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    server.cpp \
    database.cpp

HEADERS += \
    server.h \
    database.h
