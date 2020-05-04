#include "feline.h"

feline::feline(QObject *parent) : QObject(parent)
{

}

void feline::speak()
{
    qInfo()<<"meow";
}
