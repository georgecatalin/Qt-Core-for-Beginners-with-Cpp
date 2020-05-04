#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
    qInfo()<<this<<" constructed";
}
