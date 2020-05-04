#ifndef ANIMAL_H //pre processor directives: if not defined
#define ANIMAL_H //pre processor directives: define ; pre processor means executed before compiling the actual code

#include <QDebug>
#include <QObject>

class Animal : public QObject //class Animal inherits from
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);

    void speak (QString message);

signals:

};

#endif // ANIMAL_H
