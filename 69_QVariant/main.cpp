#include <QCoreApplication>
#include <QVariant>
#include <QDebug>

void test(QVariant value)
{
    qInfo()<<value;

    int testConvert=0;
    bool canConvert=false;

    testConvert=value.toInt(&canConvert);

    if (testConvert)
    {
        qInfo()<<"Can be converted."<<testConvert;
    }
    else
    {
        qInfo()<<"Can not be converted.";
    }

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value1=1;
    QVariant value2="Hello, World!";

    test(value1);
    test(value2);

    return a.exec();
}
