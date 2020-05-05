#include <QCoreApplication>
#include "animal.h"

QString animal::name="";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat(&a,"Fluffy");
    animal dog(&a,"Robbie");
    animal person(&a,"George");

    qInfo()<<" Cat name is "<<cat.name;

    return a.exec();
}
