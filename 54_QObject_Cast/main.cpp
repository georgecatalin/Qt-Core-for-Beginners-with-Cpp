#include <QCoreApplication>
#include <QDebug>
#include "feline.h"
#include "car.h"
#include "racecar.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //CONVERT DERIVED TO BASE
    racecar* mercedes=new racecar(&a);
    car* myCar=qobject_cast<car*>(mercedes);
    myCar->drive();


    //CONVERT BASE TO DERIVED
    racecar* speedster=qobject_cast<racecar*>(myCar);
    speedster->driveFast();

    //QOBject cast only works with QObjects
    //dog* Zizou=qobject_cast<dog*>(speedster);
    //Q_UNUSED(Zizou);

    return a.exec();
}
