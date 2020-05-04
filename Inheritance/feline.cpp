#include "feline.h"

feline::feline(QObject *parent) : mammal(parent)
{
    qInfo()<<this<<" constructed";
}
