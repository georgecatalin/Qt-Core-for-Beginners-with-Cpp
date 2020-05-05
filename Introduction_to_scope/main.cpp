#include <QCoreApplication>
#include <QDebug>

void testByValue(int number)
{
    //int number=50;
    qInfo()<<"2. Test number at location: "<<&number<<"="<<number;
}

void testByReference(int &number)
{
    qInfo()<<"4. Test number at location: "<<&number<<"="<<number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number=50;
    qInfo()<<"1. Test number at location: "<<&number<<"="<<number;
    testByValue(number);

    bool isOk=true;

    if(isOk)
    {
        qInfo()<<"3. Test number at location: "<<&number<<"="<<number;
    }

    testByReference(number);

    return a.exec();
}

