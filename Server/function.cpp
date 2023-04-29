#include "function.h"
#include <QDebug>

QByteArray auth(QStringList str){
    QByteArray stub;
    if (str.size()!=3)
        stub.append("Authorization error");
    else if(str[0] == "user" && str[1] == "1234")
//    else if(SingletonDB::getinstance()->sendQuery("select * from users where login = " + str[0]+ "and pass = " + str[1]).value(0).toString() != "")
        stub.append("Authorization was successful");
    else
        stub.append(("Authorization was failed"));
    return stub;
}


QByteArray reg(QStringList str) {
    QByteArray stub;
    if (str.size()!=3)
        stub.append("Registration error");
    else if(str[0] == "user" && str[1] == "user@ru" && str[2] == "1234")
        stub.append("Registration was successful");
    else
        stub.append("Registration was failed");
    return stub;
//если пользователя нет в базе данных - регистрация успешна
   //если пользователь есть в базе данных - регистрация не успешна
}

QByteArray get_task(QStringList str){
    QByteArray stub;
    if(str.size()!=2)
        stub.append("Task is not found");
    else if(str[0] == "task" && str[1] == "1")
        stub.append("Task_1");
    else
          stub.append("Task is not found");
    return stub;
    /* Если задание есть - все ок
      Если задания нет - ошибка
      */
}


QByteArray get_result(QStringList str){
    QByteArray stub;
    if (str.size()!=2)
        stub.append("Results are not found");
   // else if (str[0] == "task" && str[1] == "result")
     //   stub.append("Task is right");
    else if(str[0]== "task_4" && str [1] == "answer_8")
        stub.append("Task is right");
    else
        stub.append("Task is wrong");
    return stub;
    /*Если задание правильное - все ок
     *
     Если задание неправильное - ошибка
    */
}



QByteArray parsing(QString func_name)
{
    QStringList met = func_name.split(' ');
    if (met[0] == "auth")
    {
        met.pop_front();
        return auth(met);
    }
    if (met[0] == "reg")
    {
        met.pop_front();
        return reg(met);
    }
    if (met[0] == "get_task")
    {
        met.pop_front();
        return get_task(met);
    }
    if (met[0] == "get_result")
    {
        met.pop_front();
        return get_result(met);
    }
    else
        return "Incorrect command...";
}
