#include "station.h"

station::station(QObject *parent, QString name, int channel) : QObject(parent)
{
    this->name=name;
    this->channel=channel;
}

void station::broadcast(QString message)
{
    emit send(channel,name,message);
}
