#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
  qInfo()<<this<<" Animal constructed.";
}

animal::~animal()
{
   qInfo()<<this<<" Animal deconstructed.";
}
