#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T00:28:42
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    funcoes.cpp \
    sons.cpp

HEADERS  += mainwindow.h \
    funcoes.h \
    sons.h

FORMS    += mainwindow.ui

RESOURCES += \
    fontes.qrc

DISTFILES +=
