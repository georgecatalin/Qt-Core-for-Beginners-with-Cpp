#include <QCoreApplication>
#include <QtDebug>
#include <iostream>

using namespace  std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;

    qInfo()<<" Enter your age:";
    cin>>age;
    qInfo()<<" You entered"<<age<<endl;

    qInfo()<<" Information";
    qDebug()<<" Debug";
    qCritical()<<" Critical";

    qFatal(" This crashes the app!!"); //it will stop the program from running too

    return a.exec();
}
