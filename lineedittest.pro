QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lineedit
TEMPLATE = app

INCLUDEPATH += src

SOURCES += main.cpp \
src/clineedit.cpp

HEADERS  += src/clineedit.h

RESOURCES += \
    resources.qrc
