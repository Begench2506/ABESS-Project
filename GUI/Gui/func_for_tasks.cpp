#include "func_for_tasks.h"
#include "task1_gen_var.h"
#include <QRandomGenerator>
#include <QString>

QString generate_variant_Kimsanbaev(int n, int m, std::vector<std::pair<int, int>>& edges) {

    // Генерируем граф
    std::pair<std::vector<int>, std::vector<std::pair<int, int>>> graph = generateGraph(n, m);

    // Конвертируем список ребер в строку
    QString edgesStr;
    for (int i = 0; i < graph.second.size(); i++) {
        edges.push_back(graph.second[i]);
        edgesStr += QString::number(graph.second[i].first) + "," + QString::number(graph.second[i].second) + ";";
    }

    // Возвращаем строку с ребрами
    return edgesStr;
}
