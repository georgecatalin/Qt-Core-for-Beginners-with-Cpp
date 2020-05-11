#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myString="Hello World this is new";
    QList<QString> myList=myString.split(" ");

    myList.insert(0,"Ahaha");

    foreach (QString var, myList) {
        qInfo()<<var;
    }

    QList<int> myListOfInts({18,20,36,41});

    foreach (int var, myListOfInts) {
        qInfo()<<var;
    }

    return a.exec();
}
