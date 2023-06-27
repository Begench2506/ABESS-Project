#include <QtTest>
#include "D:\WorkDir\ABESS\ABESS\Server\task3_func.h"

// add necessary includes here

class task3_test : public QObject
{
    Q_OBJECT

public:
    task3_test();
    ~task3_test();

private slots:
    void test_case1();

};

task3_test::task3_test()
{

}

task3_test::~task3_test()
{

}

void task3_test::test_case1()
{

            int numVertices = 7;
            std::vector<std::pair<int, int>> edges = { {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 1}, {1, 3}, {2, 4}, {2, 5}, {3, 6}, {4, 7} };

            // Ожидаемый результат
            std::vector<std::set<int>> expected = { {1, 3, 5, 7}, {2, 4, 6} };

            // Вызов функции findIndependentSets()
            std::vector<std::set<int>> actual = findIndependentSets(numVertices, edges);

            // Проверка результата
            QCOMPARE(actual.size(), expected.size());

}

QTEST_APPLESS_MAIN(task3_test)

#include "tst_task3_test.moc"
