#include <QCoreApplication>
#include <QDebug>


void display(QString* name)
{
    qInfo()<<" The pointer is: "<<name;
    qInfo()<<" The object is "<<&name<<" a copy of the pointer";
    qInfo()<<" The value behind the pointer is "<<*name;
    qInfo(" ");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="George";

    display(&name);

    QString* role=new QString("Holds the role of manager"); //THIS IS STORED ON THE HEAP. ALWAYS DELETE AFTER USAGE
    /* ****
     * the "role" pointer is stored on the stack(managed micro-memory) and points to a QString object being constructed on the heap(large computer memory)
    * ****/

    display(role);

    qInfo()<<" The length of the name (which is stored on the stack) is "<<name.length();
    qInfo()<<" The length of the role which is stored on the heap is "<<role->length();

    delete role;
    display(role);

    return a.exec();
}
