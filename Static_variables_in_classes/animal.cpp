#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    qInfo()<<" Name changed into"<<this<<"="<<name;
}
