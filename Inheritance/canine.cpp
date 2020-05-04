#include "canine.h"

canine::canine(QObject *parent) : mammal(parent)
{
    qInfo()<<this<<" constructed";
}
