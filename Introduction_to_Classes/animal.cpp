#include "animal.h"

Animal::Animal(QObject *parent) : QObject(parent)
{

}

void Animal::speak(QString message)
{
   qDebug()<<message;
}
