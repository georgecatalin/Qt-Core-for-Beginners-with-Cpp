#include "test.h"

test::test(QObject *parent) : QObject(parent)
{
     qInfo()<<this<<" Test constructed.";
}

test::~test()
{
    qInfo()<<this<<" Test deconstructed.";
}
