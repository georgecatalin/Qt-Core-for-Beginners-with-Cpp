#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data="Hello World How are you?";
    QStringList stringList=data.split(" ");

    qInfo()<<stringList;

    foreach (QString var, stringList)
    {
        qInfo()<<var;
    }


    QString toSearch="are";
    if (stringList.contains(toSearch))
    {
        int index=stringList.indexOf(toSearch);
        qInfo()<<stringList.value(index);
    }


    return a.exec();
}
