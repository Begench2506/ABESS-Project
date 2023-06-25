#ifndef FUNCTION_H
#define FUNCTION_H
#include <QByteArray>
#include <QObject>
#include "Db_singleton.h"
#endif // FUNCTION_H
#include <QCoreApplication>
#include <QTcpSocket>
#define print(a) qDebug() << a

QByteArray auth(QString login, QString password, QString socket);

QByteArray reg(QString login, QString password, QString email);

QByteArray check_stat(QString socket);

QByteArray check_stat_all();

QByteArray out(QString login);

QByteArray send_answ(QString task, QString cor, QString socket);

QByteArray Parsing(QString a, QString socket);

