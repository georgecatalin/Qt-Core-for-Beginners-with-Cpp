#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool isON=false;
    qInfo()<<"  The switch is " << isON;

    isON=true;
    qInfo()<<isON;

    return a.exec();
}
