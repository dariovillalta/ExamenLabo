#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T13:15:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = exam_labprog3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    productos.cpp \
    p_alcoholicos.cpp \
    agregar.cpp \
    agregar_cliente.cpp \
    p_educativos.cpp \
    deLujo.cpp \
    cliente.cpp \
    historial.cpp

HEADERS  += mainwindow.h \
    productos.h \
    p_alcoholicos.h \
    agregar.h \
    agregar_cliente.h \
    p_educativos.h \
    deLujo.h \
    cliente.h \
    historial.h

FORMS    += mainwindow.ui \
    agregar.ui \
    agregar_cliente.ui \
    historial.ui
