#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value=43.034;
    qInfo()<<" Value is: "<<value;

    int age=value;
    qInfo()<<" Age is converted implicity to : "<<age; //implicit conversion should not be trusted

    age=(int) value; //Casting the old style
    qInfo()<<" Age is converted explicitly to :"<<age; //explicit conversion should be trusted

    return a.exec();
}
