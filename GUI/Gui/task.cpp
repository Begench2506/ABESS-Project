#include "task.h"
#include "ui_task.h"
#include "client_sing.h"
#include <QRandomGenerator>
#include <QDebug>
#include "func_for_tasks.h"

Task::Task(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Task)
{
    ui->setupUi(this);
}

QString Task::generateEdges(int n, int m) {
    n = ui->inner_text->text().toInt();
    m = ui->inner_text->text().toInt();

    // Генерируем граф
    std::vector<std::pair<int, int>> edges;
    QString edgesStr = generate_variant_Kimsanbaev(n, m, edges);

    // Конвертируем список вершин в строку
    QString verticesStr;
    for (int i = 1; i <= n; i++) {
        verticesStr += QString::number(i) + ",";
    }
    verticesStr.chop(1);

    // Отображаем список вершин и списка ребер в окне
    //ui->inner_text->setText("Сгенерированные вершины: " + verticesStr + "\n" + "Сгенерированные ребра: " + edgesStr);
    // Возвращаем строку с ребрами
    return edgesStr;


    // сохраняем список ребер в переменную класса
        this->edges = edges;
    QString myString;
    for (int i = 0; i < this->edges.size(); ++i)
        myString.append(QString("(%1, %2)").arg(this->edges[i].first).arg(this->edges[i].second));
    return myString;
}

Task::~Task()
{
    delete ui;
}

void Task::on_Ok_clicked()
{
    this->answer = ui->input_form->text();
    SingletonClient::getInstance()->send_to_server("send_answ " + this->task_num + " " + this->answer);
    close();
    emit on_closed();
}

void Task::prepare_number(QString num)
{
    this->task_num = num;
    ui->title->setText("Task " + num);
    if (this->task_num == "1")
    {
      // Генерируем граф и выводим его в текстовом поле
    std::vector<std::pair<int, int>> edges;
    QString edgesStr = generate_variant_Kimsanbaev(5, 5, edges);
    ui->inner_text->setText("Сгенерированные ребра: " + edgesStr);
      // Сохраняем список ребер для проверки ответа
    }
    if (this->task_num == "2")
    {
        ui->inner_text->setText("В заданном неориентированном графе G найти все максимальные \
    и все наибольшие внутренне устойчивые (независимые) множества вершин. \
    G = (V, E) = (V={1,2,3,4,5,6,7}, E={(1,2), (1,3), (1,5), (1,6), (2,3), (3,4), (3,6), \
    (4,5), (4,7), (5, 6), (6, 7)}).");
        }
    if (this->task_num == "3")
    {
        ui->inner_text->setText("Построить внешне устойчивое множество вершин для ориентированного графа, заданного списком ребер\
    G = (V,E) = (V={1,2,3,4,5}, E={(1,4), (1,5), (2,1),\
    (2,3),(3,1),(3,4),(4,5),(5,2)}).");
    }
    if (this->task_num == "4")
    {
        ui->inner_text->setText("В заданном неориентированном графе G найти все максимальные \
    и все наибольшие внутренне устойчивые (независимые) множества вершин.\n\
    1 2 3 4\n\
    1 0 1 0 1\n\
    2 0 0 1 1\n\
    3 0 1 0 0\n\
    4 1 0 1 0\n");
    }
    if (this->task_num == "5")
    {
        ui->inner_text->setText("Построить внешне устойчивое множество вершин для ориентированного графа, заданного матрицей смежности\n\
                                  1 2 3 4\n\
                                1 0 1 0 1\n\
                                2 0 0 1 1\n\
                                3 0 1 0 0\n\
                                4 1 0 1 0\n");
    }
}
