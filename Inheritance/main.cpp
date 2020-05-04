#include <QCoreApplication>
#include "canine.h"
#include "feline.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //we know about this because it is included in feline and canine classes
    //animal test;

    feline kitty;
    canine brutus;


    return a.exec();
}
