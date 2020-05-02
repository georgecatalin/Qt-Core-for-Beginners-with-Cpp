#include <QCoreApplication>
#include <QDebug>
#include <array>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Define an array in the C-ish style
    int myarray[]={1978,1985,1997,2002};

    qInfo()<<" This is the address of the array in memory: \t"<<myarray;
    qInfo()<<myarray[0];
    qInfo()<<myarray[1];
    qInfo()<<myarray[2];
    qInfo()<<myarray[3];

    //Define an array in the newer C++ STL Library style
    array<int,4> otherArray;

    otherArray[0]=2006;
    otherArray[1]=2008;
    otherArray[2]=2011;
    otherArray[3]=2020;
    otherArray[99]=2030; //although it is a bad practice, compiler will not return error for exceeding the number of elements from definition

    qInfo()<<otherArray[0];
    qInfo()<<otherArray[1];
    qInfo()<<otherArray[2];
    qInfo()<<otherArray[3];
    qInfo()<<otherArray[99]; //BAD PRACTICE exceeding the size of the array definition

    //Difference between size and sizeof()
    qInfo()<<otherArray.size();
    qInfo()<<sizeof(otherArray);

    qInfo()<<otherArray[otherArray.size()-1]; //the last element of the array

    return a.exec();
}
