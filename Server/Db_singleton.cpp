#include "Db_singleton.h"


MyDataBase::MyDataBase(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\WorkDir\\ABESS\\ABESS\\Server\\Users.db");
    db.open();
    if(!db.isOpen())
        qDebug() << "Ошибка открытия бд:" << db.lastError().text();
}
MyDataBase::~MyDataBase()
{
    db.close();
}

MyDataBase* MyDataBase::getInstance(){
    if (!p_instance)
    {
        p_instance = new MyDataBase();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}
QString MyDataBase::query (QString q){
    QSqlQuery query_obj(db);
    query_obj.exec(q);
    QString res="";
    //            if (db.isOpen()) qDebug() << "111";
    while (query_obj.next()){
        vector<QString> qwert;
        QString login = query_obj.value("login").toString();
        QString password = query_obj.value("password").toString();
        qwert.push_back(login);
        qwert.push_back(password);
        //qDebug()<<login <<" " << password<<"\n";
        res.append(login).append('|').append(password).append("||");
    }
    return res;
}

void MyDataBase::add (QString login, QString password, QString email){
    QSqlQuery query(db);
    query.prepare("INSERT INTO User (login,password,email) VALUES(:login, :password, :email)");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    query.bindValue(":email", email);
    query.exec();
}

void MyDataBase::login(QString login, QString socket)
{
    QSqlQuery query(db);
    query.prepare("UPDATE User SET socket=:socket WHERE login=:login");
    query.bindValue(":socket", socket);
    query.bindValue(":login", login);
    query.exec();
}

void MyDataBase::logout(QString login)
{
    QSqlQuery query(db);
    query.prepare("UPDATE User SET socket=NULL WHERE login=:login");
    query.bindValue(":login", login);
    query.exec();
}
QByteArray MyDataBase::stat(QString socket)
{
    QSqlQuery query(db);
    query.prepare("SELECT * FROM User WHERE socket=:socket;");
    query.bindValue(":socket", socket);
    query.exec();
    QString task1;
    QString task2;
    QString task3;
    QString task4;
    QString task5;

    QString task1_cor;
    QString task2_cor;
    QString task3_cor;
    QString task4_cor;
    QString task5_cor;

    QString task1_incor;
    QString task2_incor;
    QString task3_incor;
    QString task4_incor;
    QString task5_incor;
    while (query.next()){
        task1 = query.value("task1").toString();
        task2 = query.value("task2").toString();
        task3 = query.value("task3").toString();
        task4 = query.value("task4").toString();
        task5 = query.value("task5").toString();

        task1_cor = query.value("cor1").toString();
        task2_cor = query.value("cor2").toString();
        task3_cor = query.value("cor3").toString();
        task4_cor = query.value("cor4").toString();
        task5_cor = query.value("cor5").toString();

        task1_incor = query.value("incor1").toString();
        task2_incor = query.value("incor2").toString();
        task3_incor = query.value("incor3").toString();
        task4_incor = query.value("incor4").toString();
        task5_incor = query.value("incor5").toString();
        qDebug() << "@" << task1 << " & " << task2 << "$\n";
    }
    //            QByteArray stata = query.value("stat").toByteArray();
    //            qDebug() << query.executedQuery() << "###";
    QByteArray stat = QByteArray::fromStdString((task1+" "+task2+" "+task3+" "+task4+" "+task5 + " " + task1_cor+" "+task2_cor+" "+task3_cor+" "+task4_cor+" "+task5_cor  + " " + task1_incor+" "+task2_incor+" "+task3_incor+" "+task4_incor+" "+task5_incor).toStdString());
    qDebug()<< " !!! " <<stat;
    return "check "+stat;
}

QByteArray MyDataBase::stat_all()
{
    QSqlQuery query(db);
    query.prepare("SELECT * FROM User;");
    query.exec();
    QString res="";
    QString task2;
    int ind_1 = query.record().indexOf("task1");
    int ind_2 = query.record().indexOf("task2");
    while (query.next()){
        res+= query.value(ind_1).toString()+" "+query.value(ind_2).toString()+" ";
    }
    //res = "eewwe";
    //            QByteArray stata = query.value("stat").toByteArray();
    //            qDebug() << query.executedQuery() << "###";
    //QByteArray stat = QByteArray::fromStdString((task1+" "+task2).toStdString());
    //return stat;
    return "stat_all "+res.toUtf8();
}

void MyDataBase::correct(QString task, bool result, QString socket)
{
    QSqlQuery query(db);
    QString s;
    if (result == true)
    {
        s = "UPDATE User SET task" + task + " = task" + task + "+1, cor" + task + " = cor" + task + "+1 WHERE socket = :socket";
        // = "UPDATE User SET task1=task1+1, cor1=cor1+1 WHERE socket =: socket";
    }
    else if (result == false)
    {
        s = "UPDATE User SET task" + task + " = task" + task + "-1, incor" + task + " = incor" + task + "+1 WHERE socket = :socket";
        // = "UPDATE User SET task1=task1-1, incor1=incor1+1 WHERE socket =: socket";
    }
    query.prepare(s);
    query.bindValue(":socket", socket);
    query.exec();
}

MyDataBase * MyDataBase::p_instance;
SingletonDestroyer MyDataBase::destroyer;
