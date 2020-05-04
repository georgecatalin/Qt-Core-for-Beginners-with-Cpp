#include <QCoreApplication>
#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lion simba;
    simba.speak();

    return a.exec();
}
