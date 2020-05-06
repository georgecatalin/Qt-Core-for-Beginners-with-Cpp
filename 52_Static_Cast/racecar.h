#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include <QDebug>
#include "car.h"

class racecar : public car
{
    Q_OBJECT
public:
    explicit racecar(QObject *parent = nullptr);

    bool superCharger=true;
    void driveFast();

signals:

};

#endif // RACECAR_H
