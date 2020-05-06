#include "car.h"

car::car(QObject *parent) : QObject(parent)
{

}

void car::drive()
{
    qInfo()<<"driving";
}

void car::stop()
{
    qInfo()<<"stopping";
}
