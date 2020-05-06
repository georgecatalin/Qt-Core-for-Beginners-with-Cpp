#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive(car* obj)
{
    obj->drive();
    obj->stop();
}

void testRace(racecar* obj)
{
    obj->driveFast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    racecar* r=new racecar(&a);
    testDrive(r); //it is converted implicitly

    car* c=dynamic_cast<car*>(r);
    if(c!=0)
    {
        testDrive(c);
    }

    feline* f=dynamic_cast<feline*>(r);
    if (f==0)
    {
        qInfo()<<"Unable to convert dynamically";
    }

    return a.exec();
}
