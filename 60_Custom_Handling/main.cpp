#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

struct myWay : public exception
{
    const char * description;
    const char * what() const throw()
    {
        return "Our Description here";
    }
};


bool doDivision(int max)
{

    try
    {
        int value;
        qInfo()<<"Enter a number";
        cin>>value;

        if (value==0 || value==NULL)
        {
            throw std::invalid_argument("Can not divide bt ZERO!!");
        }

        if (value>5)
        {
            throw std::out_of_range("This is out of range!!!!");
        }

        if (value==1)
        {
            myWay e;
            e.description="Should not be equal to 1";
            throw e;
        }

        int result=max/value;
        qWarning()<<" Result is "<<result;

        return  true;
    }
    catch (myWay &e)
    {
        qWarning()<<e.what()<<" "<<e.description;
        return false;
    }
     catch (std::exception &e)
    {
        qWarning()<<e.what();
        return  false;
    }

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
