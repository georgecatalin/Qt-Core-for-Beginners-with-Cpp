#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

//throwing
bool doDivision(int max)
{
    int value;
    qInfo()<<"Enter a number";
    cin>>value;

    if (value==0)
    {
        throw "Can not divide by 0";
    }

    int result=max/value;
    qInfo()<<" Result is "<<result;
    return  true;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int max=77;

    do {
        //do something;
    } while (doDivision(max));

    return a.exec();
}
