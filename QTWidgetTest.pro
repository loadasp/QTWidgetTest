#-------------------------------------------------
#
# Project created by QtCreator 2016-09-27T21:56:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTWidgetTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    UIControls/imtoolbox.cpp \
    UIControls/imtoolitem.cpp \
    login.cpp \
    imdrawer.cpp

HEADERS  += mainwindow.h\
    UIControls/imtoolbox.h \
    UIControls/imtoolitem.h \
    login.h \
    imdrawer.h


FORMS    += mainwindow.ui \
    login.ui

RESOURCES += \
    images.qrc

DISTFILES +=
