#include <QCoreApplication>
#include <QDebug>

template<typename T>

void print(T value)
{
    qInfo()<<value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(10);
    print<double>(123.33);
    print<QString>("Hello, World!");

    return a.exec();
}
