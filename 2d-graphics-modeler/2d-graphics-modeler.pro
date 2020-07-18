#-------------------------------------------------
#
# Project created by QtCreator 2020-07-14T16:49:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2d-graphics-modeler
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    loginscreen.cpp \
    circle.cpp \
    shape.cpp \
    ellipse.cpp \
    line.cpp \
    polygon.cpp \
    polyline.cpp \
    rectangle.cpp \
    square.cpp \
    text.cpp \
    palette.cpp \
    renderarea.cpp \
    shapebuffer.cpp \
    shapeinfo.cpp

HEADERS += \
        mainwindow.h \
    loginscreen.h \
    circle.h \
    shape.h \
    ellipse.h \
    line.h \
    polygon.h \
    polyline.h \
    rectangle.h \
    square.h \
    text.h \
    comp_func.h \
    palette.h \
    renderarea.h \
    selection_sort.h \
    shapebuffer.h \
    shapeinfo.h \
    ui_palette.h \
    ui_shapeinfo.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    shapeData.txt \
    shapeData.txt
