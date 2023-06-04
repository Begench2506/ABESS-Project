QT += testlib sql network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_dsic.cpp \
    ../ABESS-Project/mytcpserver.cpp \
    ../ABESS-Project/singleton.cpp

HEADERS += \
    ../ABESS-Project/Db_singleton.h \
    ../ABESS-Project/function.h \
    ../ABESS-Project/mytcpserver.h \
    ../ABESS-Project/task1_function.h
