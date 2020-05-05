#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr,QString name="");

    //static  means it is shared amongst all objects instances of the class and it is rewritten all the time when a new object is created
    static QString name;

signals:

};

#endif // ANIMAL_H
