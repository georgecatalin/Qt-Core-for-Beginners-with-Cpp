#include <QCoreApplication>
#include <QDebug>

//global scope
static QString name="Catalin";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<name<<" (1) at memory location "<< &name;

    name="George";
    qInfo()<<name<<"  (2) at memory location "<< &name;

    if (true)
    {
       QString name="Paul"; //this is a completely another variable, even it holds the same "name" name
        qInfo()<<name<<" (3) at memory location "<< &name;;
    }

    qInfo()<<name<<" (4) at memory location "<< &name;

    return a.exec();
}
