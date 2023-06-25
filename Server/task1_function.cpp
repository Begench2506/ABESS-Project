#ifndef TASK1_FUNCTION_H
#define TASK1_FUNCTION_H
#endif // TASK1_FUNCTION_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <QString>

using namespace std;


std::vector<std::string> splitString(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> tokens;
    std::istringstream iss(str);
    std::string token;

    while (std::getline(iss, token, delimiter[0])) {
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }

    return tokens;
}

bool checkEulerCycle(const std::string& data) {
    std::vector<std::string> edgesStr = splitString(data, ";");

    std::vector<std::pair<int, int>> edges;
    for (const auto& edgeStr : edgesStr) {
        std::vector<std::string> verticesStr = splitString(edgeStr, ",");
        int u = std::stoi(verticesStr[0]);
        int v = std::stoi(verticesStr[1]);
        edges.push_back(std::make_pair(u, v));
    }

    int n = 0;
    for (const auto& edge : edges) {
        n = std::max(n, std::max(edge.first, edge.second));
    }

    std::vector<int> degree(n + 1, 0);
    std::vector<std::vector<int>> graph(n + 1, std::vector<int>());

    for (const auto& edge : edges) {
        int u = edge.first, v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }

    for (int i = 1; i <= n; i++) {
        if (degree[i] % 2 == 1) {
            return false;
        }
    }

    std::vector<bool> visited(n + 1, false);
    std::queue<int> q;
    int start = 1;
    while (start <= n && degree[start] == 0) {
        start++;
    }
    if (start > n) {
        return true;
    }
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (degree[i] > 0 && !visited[i]) {
            return false;
        }
    }
    return true;
}

QString generate_variant_Kimsanbaev(const std::vector<std::pair<int, int>>& edges) {
    // Конвертируем список ребер в строку
    QString edgesStr;
    for (int i = 0; i < edges.size(); i++) {
        edgesStr += QString::number(edges[i].first) + "," + QString::number(edges[i].second) + ";";
    }

    // Удаляем последний символ (;)
    edgesStr.chop(1);

    // Добавляем информацию о наличии эйлерова цикла в строку
    bool hasEulerCycle = checkEulerCycle(edgesStr.toStdString());
    if (hasEulerCycle) {
        edgesStr += ";1";
    } else {
        edgesStr += ";0";
    }

    // Возвращаем строку с ребрами и информацией о наличии эйлерова цикла
    return edgesStr;
}
