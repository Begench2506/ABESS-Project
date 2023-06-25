#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <vector>
#include <string>

using std::vector;
using std::string;

class MyDataBase;
/**
 * @brief The SingletonDestroyer class
 */
class SingletonDestroyer
{
    private:
    //! Объект базы данных
        MyDataBase * p_instance;
    public:
        //! Деструктор
        ~SingletonDestroyer() { delete p_instance;}
        void initialize(MyDataBase * p){p_instance = p;}
};

/**
 * @brief The MyDataBase class
 */

class MyDataBase
{
    private:
        //!  указатель на объект класса
        static MyDataBase * p_instance;
        //! дестройер объекта
        static SingletonDestroyer destroyer;
        //! База данных, с которой взаимодействует класс
        QSqlDatabase db;
    protected:
        /**
         * @brief MyDataBase
         * Конструктор класса
         */
        MyDataBase();
        MyDataBase(const MyDataBase& )=delete;
        MyDataBase& operator = (MyDataBase &)= delete;
        ~MyDataBase();
        friend class SingletonDestroyer;
    public:
        /**
         * @brief getInstance
         * @return возвращает p_instance
         */
        static MyDataBase* getInstance();
        /**
         * @brief query
         * @param q - QString строка с запросом
         * @return res - возврат строки с логином и паролем
         */
        QString query (QString q);
        /**
         * @brief add
         * @param login - QString с логином пользователя
         * @param password - QString с паролем пользователя
         * @param email - QString с почтой пользователя
         * функция нужна для добваления записи в таблицу идентификации
         */
        void add (QString login, QString password, QString email);
        /**
         * @brief login - функция входа в систему
         * @param login - QString с логином пользователя
         * @param socket - сокет, с которого пришёл запрос на вход
         */
        void login(QString login, QString socket);

        void logout(QString login);
        QByteArray stat(QString socket);
        QByteArray stat_all();
        void correct(QString task, bool result, QString socket);

};





//MyDataBase * SingletonDestroyer::p_instance;
