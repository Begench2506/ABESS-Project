#ifndef FUNCTION_H
#define FUNCTION_H
#include <QByteArray>
#include <QObject>
#include "Db_singleton.h"
#endif // FUNCTION_H
#include <QCoreApplication>
#include "task1_function.h"
#define print(a) qDebug() << a

QByteArray auth(QString login, QString password, QString socket){
    QByteArray res = "1 auth";
    qDebug() << MyDataBase::getInstance()->query("SELECT * FROM User") << " <#\n";
    if (MyDataBase::getInstance()->query("SELECT * FROM User").contains(QString(login+'|'+password)))
    {
        MyDataBase::getInstance()->login(login, socket);
        res = "auth OK";
    }
       else
    {
        res = "auth FAIL";
    }
    qDebug() << res << " <$\n";
    return res;
}
QByteArray reg(QString login, QString password, QString email){
    QByteArray res = "1 reg";
    MyDataBase::getInstance()->add(login, password, email);
    return res;
}
QByteArray get_task(QString socket){
    //MyDataBase::getInstance()->stat(socket);
    //QByteArray res = "1 check";
    QString p = MyDataBase::getInstance()->stat(socket);
    qDebug()<< p+"<check_stat";
    return MyDataBase::getInstance()->stat(socket);
}

QByteArray get_result(QString data, QString socket)
{
    QStringList parts = data.split("\n", Qt::SkipEmptyParts);
    QStringList params = parts.front().split(" ");
    int n = params.at(0).toInt();
    int m = params.at(1).toInt();
    vector<pair<int, int>> edges;
    for (int i = 1; i <= m; i++) {
        QStringList edge = parts.at(i).split(" ");
        int u = edge.at(0).toInt();
        int v = edge.at(1).toInt();
        edges.push_back({u, v});
    }
    bool hasEulerCycle = checkEulerCycle(n, edges);
    if (hasEulerCycle)
    {
        //обновить базу данных
        return QByteArray::fromStdString("Цикл является эйлеровым");
    } else
    {
        //обновить базу данных
        return QByteArray::fromStdString("Цикл не является эйлеровым");
    }
}



QByteArray out(QString login){
    QByteArray res = "1 log out";
    MyDataBase::getInstance()->logout(login);
    return res;
}
QByteArray send_answ(QString task, QString cor, QString socket){
    QByteArray res = "1 send answer";
    MyDataBase::getInstance()->correct1(task, cor, socket);
    return res;
}
QByteArray parsing(QString a, QString socket){


    QStringList data_from_client_list=a.split(QLatin1Char(' '), Qt::SkipEmptyParts);
    QString nameOfFunc = data_from_client_list.front();
    data_from_client_list.pop_front();
    if (nameOfFunc=="auth")
        {
        if (data_from_client_list.length() == 2) return auth(data_from_client_list.at(0), data_from_client_list.at(1), socket);
        else return "Wrong input data - Need 2 parametrs for auth.\n";
        }
    if (nameOfFunc=="reg")
    {
        if (data_from_client_list.length() == 3) return reg(data_from_client_list.at(0), data_from_client_list.at(1), data_from_client_list.at(2));
        else return "Wrong input data - Need 3 parametrs for reg.\n";
    }
    if (nameOfFunc=="get_task")
    {
        if (data_from_client_list.length() == 0) return get_task(socket);
        else return "Wrong input data - Dont't need parametrs for checking statisctic.\n";
    }
    if (nameOfFunc=="out")
    {
        if (data_from_client_list.length() == 0) return out(data_from_client_list.at(0));
        else return "Wrong input data - Dont't need parametrs for log out.\n";
    }
    if (nameOfFunc=="send_answ")
    {
        if (data_from_client_list.length() == 2) return send_answ(data_from_client_list.at(0), data_from_client_list.at(1), socket);
        else return "Wrong input data - Need 2 parametrs for send answer.\n";
    }
    else return "wrong syn\n";
}
/*QByteArray parsing(QString func_name, QString data, QString socket)
{
    QStringList met = func_name.split(' ');
    QString method = met.first();
    QString url = met.last();
    if (method == "get" && url == "result")
    {
            return get_result(data, socket);

    }
}
*/
