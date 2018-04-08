#-------------------------------------------------
#
# Project created by QtCreator 2018-04-08T12:22:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator_GUI_REGEX_BASED
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
        calculatorgui.cpp \
    calculatorbackend.cpp \
    calculatorbackend.cpp \
    calculatorgui.cpp \
    main.cpp \
    moc_calculatorgui.cpp

HEADERS += \
        calculatorgui.h \
    calculatorbackend.h \
    calculatorbackend.h \
    calculatorgui.h \
    moc_predefs.h \
    ui_calculatorgui.h

FORMS += \
        calculatorgui.ui \
    calculatorgui.ui

SUBDIRS += \
    Calculator_GUI_REGEX_BASED.pro

DISTFILES += \
    .qmake.stash \
    Calculator_GUI_REGEX_BASED.exe \
    libgcc_s_dw2-1.dll \
    libstdc++-6.dll \
    libwinpthread-1.dll \
    Qt5Core.dll \
    Qt5Gui.dll \
    Qt5Widgets.dll \
    calculatorbackend.o \
    calculatorgui.o \
    main.o \
    moc_calculatorgui.o \
    Calculator_GUI_REGEX_BASED.pro.user \
    Makefile \
    Makefile.Debug \
    Makefile.Release \
    platforms/qminimal.dll \
    platforms/qminimald.dll \
    platforms/qoffscreen.dll \
    platforms/qoffscreend.dll \
    platforms/qwindows.dll \
    platforms/qwindowsd.dll
