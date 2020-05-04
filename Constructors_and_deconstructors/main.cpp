#include <QCoreApplication>
#include "laptop.h"

void test(laptop &machine)
{
    //tries to pass a copy of mine QObject which is forbidden in Qt
    machine.test();
}

void makeLaptop(QObject* parent)
{
    laptop mine(parent,"yourlaptop");
    laptop yours(parent,"mylaptop");

    mine.weight=3;
    yours.weight=5;

    test(mine);
    test(yours);

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptop(&a);

    return a.exec();
}
