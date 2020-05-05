#include "destination.h"

destination::destination(QObject *parent) : QObject(parent)
{

}

void destination::onMessage(QString message)
{
    qInfo()<<"onMessage: "<<message;
}
