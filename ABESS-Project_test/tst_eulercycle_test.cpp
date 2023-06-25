#include <QtTest>
#include "D:\WorkDir\ABESS-Project\ABESS-Project\task1_function.h"
// add necessary includes here

class EulerCycle_test : public QObject
{
    Q_OBJECT

public:
    EulerCycle_test();
    ~EulerCycle_test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
};

EulerCycle_test::EulerCycle_test()
{

}

EulerCycle_test::~EulerCycle_test()
{

}

void EulerCycle_test::test_case1()
{
    vector<pair<int, int>> edges_1 = {{1, 2}, {2, 3}, {3, 4}, {4, 1}};
       QCOMPARE(checkEulerCycle(4, edges_1), true);
}

void EulerCycle_test::test_case2()
{
    vector<pair<int, int>> edges_2 = {{1, 2}, {2, 3}, {3,4}, {4, 3}};
    QCOMPARE(checkEulerCycle(4, edges_2), false);
}

void EulerCycle_test::test_case3()
{
    vector<pair<int, int>> edges_3 = {};
    QCOMPARE(checkEulerCycle(6, edges_3), true);
}

void EulerCycle_test::test_case4()
{
    vector<pair<int, int>> edges_4 = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 2}};
    QCOMPARE(checkEulerCycle(5, edges_4), false);
}

QTEST_APPLESS_MAIN(EulerCycle_test)

#include "tst_eulercycle_test.moc"
