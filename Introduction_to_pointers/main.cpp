#include <QCoreApplication>
#include <QDebug>

void test(QString name)
{
    qInfo()<<" The size is "<< name.length(); //most of the times these kind of variables are stored in the stack (managed memory) of the processor
}

void testPointer(QString* name)
{
    qInfo()<<" The size is "<< name->length(); //in 99.9999% of the cases pointers are stored on the heap memory (the total RAM memory available in the machine)
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="George Catalin"; //Constructor here
    test(name);

    testPointer(&name);

    return a.exec();

    //Deconstructor here
}
