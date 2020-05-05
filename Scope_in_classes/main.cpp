#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="George";
    qInfo()<<"Animal name param: "<<&name<<" = "<<name;

    animal cat(&a,"Fluffy"); //{} constructor scope
    animal dog(&a,"Zizou"); //{} constructor scope
    animal person(&a,name); //{} constructor scope

    return a.exec();
}
