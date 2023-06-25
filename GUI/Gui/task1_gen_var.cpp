#include <vector>
#include <set>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
using namespace std;

std::pair<std::vector<int>, std::vector<std::pair<int, int>>> generateGraph(int n, int m) {
    std::srand(std::time(nullptr)); // Инициализация генератора случайных чисел текущим временем

    std::vector<int> V(n);
    for (int i = 0; i < n; i++) {
        V[i] = i + 1;
    }

    std::vector<std::pair<int, int>> E;
    for (int i = 1; i <= n; i++) {
        int u = i;
        int v = (i % n) + 1;
        E.push_back(std::make_pair(u, v));
    }

    // Перемешиваем ребра графа
    std::random_shuffle(E.begin(), E.end());

    return std::make_pair(V, E);
}
