#ifndef MONSTER_H
#define MONSTER_H

#include "feline.h"
#include "canine.h"

class monster : public feline, canine //Warning: it is not possible to inherit from two separate classes in C++
{
    Q_OBJECT
public:
    explicit monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
