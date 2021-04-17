#include <QtTest>
#include <inet_code.h>
// add necessary includes here

class test_1 : public QObject
{
    Q_OBJECT

public:
    test_1();
    ~test_1();

private slots:
    void test_case1();

};

test_1::test_1()
{

}

test_1::~test_1()
{

}

void test_1::test_case1()
{
    char buffer[MAXLINE];
    start(buffer);
    QCOMPARE(buffer, "simple test");
}

QTEST_APPLESS_MAIN(test_1)

#include "tst_test_1.moc"
