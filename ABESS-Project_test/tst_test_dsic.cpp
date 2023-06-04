#include <QtTest>
#include "D:\WorkDir\ABESS-Project\ABESS-Project\function.h"
// add necessary includes here

class test_dsic : public QObject
{
    Q_OBJECT
private slots:
    void test_case1();

};

void test_dsic::test_case1()
{
    QString result = "get_result +";
    QVERIFY(get_result("4 4", "1 2, 2 3, 3 4, 4 1")==result);
}


QTEST_MAIN(test_dsic)
#include "tst_test_dsic.moc"
