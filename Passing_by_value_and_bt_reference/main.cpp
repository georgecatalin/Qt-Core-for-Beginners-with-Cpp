#include <QCoreApplication>
#include <QDebug>

using namespace  std;

//passing by value
void passValue(int i)
{
    i=i*10;
    qInfo()<<"I: "<<i;
}

//passing by reference
void passRef(int &i)
{
    i=i*10;
    qInfo()<<"I: "<<i;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x=10;
    qInfo()<<" By value";
    passValue(x);
    qInfo()<<" The value of x by value: "<<x;

    qInfo()<<" By reference";
    passRef(x);
    qInfo()<<" The value of x by value: "<<x;


    return a.exec();
}
