#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

//Qt way of handling exceptions


bool doDivision(int max)
{


        int value;
        qInfo()<<"Enter a number";
        cin>>value;

        if (value==0 || value==NULL)
        {
            qWarning()<<" Number should be greater than 0 and not NULL";
            return  false;
        }

        if (value>5)
        {
            qWarning()<<" Number should be less than 5.";
            return false;
        }

        if (value==1)
        {
            qWarning()<<" Number should be greated than 1.";
            return  false;
        }

        int result=max/value;
        qWarning()<<" Result is "<<result;

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
