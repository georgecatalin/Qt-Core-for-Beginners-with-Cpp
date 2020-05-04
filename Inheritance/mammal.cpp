#include "mammal.h"

mammal::mammal(QObject *parent) : animal(parent)
{
    qInfo()<<this<<" constructed";
}
