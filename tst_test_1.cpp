#include <QtTest>
#include <inet_code.h>

class test : public QObject
{
    Q_OBJECT
public:
    test();
    ~test();
private slots:
    void test_case();
};

test::test()
{

}

test::~test()
{

}

void test::test_case()
{
    char buffer[MAXLINE];
    port_listening(buffer);
    QCOMPARE(buffer, "simple test");
    QCOMPARE(buffer, "simple test!");
}

QTEST_APPLESS_MAIN(test)

#include "tst_test_1.moc"
