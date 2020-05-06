#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value=44;
    int div=0;

    do
    {
        qInfo()<<" Enter a number to divide to or 0 for an error";
        cin>>div;

        int result=value/div;
        qInfo()<<result;

    } while (true);


    return a.exec();
}
