#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myString="Hello World this is new";
    QList<QString> myList=myString.split(" ");

    QVector<int> myVector({18,20,36,41}); //unlike QList<T>, QVector<T> stored elements consequently in the heap memory

    foreach (int var, myVector)
    {
        qInfo()<<var;
    }

    return a.exec();
}
