#include <QCoreApplication>
#include <QtDebug>
#include "feline.h"
#include "car.h"
#include "racecar.h"

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
    testDrive(audi); //implicit cast, not recommended

    //the correct way is to dynamic cast to ensure the correct conversion takes place
    car* myCar=dynamic_cast<car*>(audi);
    if (myCar) testDrive(myCar);

    //upcasting :: static cast
    racecar* sportscar=static_cast<racecar*>(myCar);
    if (sportscar) testRace(sportscar);

    //reinterpret cast :: convert to a int pointer and back
    int* pointer=reinterpret_cast<int*>(myCar);
    qInfo()<<" The pointer is "<<pointer;

    car* myConvertedCar=reinterpret_cast<car*>(pointer);
    qInfo()<<" The colour of my car is "<<myConvertedCar->color;

    return a.exec();
}
