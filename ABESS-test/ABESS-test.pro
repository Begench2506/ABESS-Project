QT += testlib
QT -= gui
QT += sql network

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_task3_test.cpp \
    ../ABESS/Server/Db_singleton.cpp \
    ../ABESS/Server/eulercycle.cpp \
    ../ABESS/Server/function.cpp \
    ../ABESS/Server/mytcpserver.cpp \
    ../ABESS/Server/task3_func.cpp

HEADERS += \
    ../ABESS/Server/Db_singleton.h \
    ../ABESS/Server/eulercycle.h \
    ../ABESS/Server/function.h \
    ../ABESS/Server/mytcpserver.h \
    ../ABESS/Server/task3_func.h
