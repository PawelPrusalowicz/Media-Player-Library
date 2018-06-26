#-------------------------------------------------
#
# Project created by QtCreator 2018-05-16T14:15:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROE_Projekt3
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    bluray.cpp \
    disc.cpp \
    drive.cpp \
    from_disc.cpp \
    from_memory.cpp \
    media_player.cpp \
    work_parameters.cpp

HEADERS += \
        mainwindow.h \
    bluray.h \
    disc.h \
    drive.h \
    from_disc.h \
    from_memory.h \
    media_player.h \
    work_parameters.h

FORMS += \
        mainwindow.ui


