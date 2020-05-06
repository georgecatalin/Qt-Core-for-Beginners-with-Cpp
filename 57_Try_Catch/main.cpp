#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

//try/catch


bool doDivision(int max)
{
    try {
        int value;
        qInfo()<<"Enter a number";
        cin>>value;

        if (value==0)
        {
            throw "Can not divide by 0";
        }
        if (value>5) throw 99;

        if (value==1) throw std::runtime_error("The number should be greater than 1");

        int result=max/value;
        qWarning()<<" Result is "<<result;
        return  true;
    }
    catch (std::exception const& e) {
        qWarning()<<" We caught the STD error. Number should be greated than 1."<<e.what();
        return false;
    }
    catch(int* e)
    {
        qWarning()<<"The value should be less than 5! "<<e;
        return false;
    }
    catch (char* e) {
        qWarning()<<"Can not divide by 0, alligator!!"<<e;
        return false;
    }
    catch (...)
    {
        //catch all BAD BAD BAD
        qInfo()<<"We need that something happened, but we do not know exactly what";
        return false;
    }
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
