#-------------------------------------------------
#
# Project created by QtCreator 2010-12-28T13:51:17
#
#-------------------------------------------------

QT       += core gui
QT           += xml
TARGET = savescr
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    screenshotarea.cpp \
    screeneditor.cpp \
    rwidget.cpp \
    qcolorpicker.cpp \
    imagelistwidgetitem.cpp

HEADERS  += mainwindow.h \
    screenshotarea.h \
    screeneditor.h \
    rwidget.h \
    qcolorpicker.h \
    imagelistwidgetitem.h

FORMS    += mainwindow.ui \
    screenshotarea.ui \
    screeneditor.ui

QMAKE_CXXFLAGS_DEBUG += -g3 -pg
QMAKE_LFLAGS_DEBUG += -pg -lgmon
