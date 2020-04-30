#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Hello, World!";
    qInfo("Hello, again");

    return a.exec();
}
