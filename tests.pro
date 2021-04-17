QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_1.cpp \
    inet_code.cpp

HEADERS += \
    inet_code.h
