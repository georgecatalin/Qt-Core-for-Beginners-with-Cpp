#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myString="Hello, World!";
    QByteArray buffer(myString.toLatin1());

    buffer.append("!");
    qInfo()<<buffer;

    qInfo()<<buffer.rightJustified(20,'.');
    qInfo()<<buffer.at(buffer.length()-1);

    QString newString(buffer);
    qInfo()<<newString;


    return a.exec();
}
