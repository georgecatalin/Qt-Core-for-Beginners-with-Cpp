#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"

class feline : public mammal
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);
    void meow()
    {
        qInfo()<<"meow";
    }

signals:

};

#endif // FELINE_H
