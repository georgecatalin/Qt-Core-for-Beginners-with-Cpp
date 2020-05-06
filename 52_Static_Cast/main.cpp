#include <QCoreApplication>
#include <QDebug>
#include "feline.h"
#include "racecar.h"
#include "car.h"

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

    racecar* audi=new racecar(&a);
    testDrive(audi);

    car* myCar=dynamic_cast<car*>(audi);
    if (myCar) testDrive(myCar);

    //UPCASTING - Going from the car to the racecar
    racecar* speedster=static_cast<racecar*>(myCar);
    if (speedster) testRace(speedster);

    return a.exec();
}
