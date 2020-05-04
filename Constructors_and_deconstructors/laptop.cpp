#include "laptop.h"

laptop::laptop(QObject *parent,QString name) : QObject(parent)
{
    //when constructing the object,'this' is automatically created

    this->name=name;
    qInfo()<<this<<name<<" when constructing object";
}

laptop::~laptop()
{
    //when deconstructing the object
    qInfo()<<this<<name<<" when deconstructing object";
}

double laptop::convertKilos()
{
    return this->weight*0.45;
}

void laptop::test()
{
    qInfo()<<this<<name<<convertKilos();
}
