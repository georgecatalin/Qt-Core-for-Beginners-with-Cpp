#include <QCoreApplication>
#include <iostream>
#include <QtDebug>

using namespace  std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<" Hello, World with cout"<<endl;
    qInfo()<<" Hello, World with QDebug";

    return a.exec();
}
