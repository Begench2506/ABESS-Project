QT += testlib
QT -= gui
QT += sql network

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_eulercycle_test.cpp \
    ../ABESS-Project/Db_singleton.cpp \
    ../ABESS-Project/function.cpp \
    ../ABESS-Project/mytcpserver.cpp \
    ../ABESS-Project/task1_function.cpp

HEADERS += \
    ../ABESS-Project/Db_singleton.h \
    ../ABESS-Project/function.h \
    ../ABESS-Project/mytcpserver.h \
    ../ABESS-Project/task1_function.h
