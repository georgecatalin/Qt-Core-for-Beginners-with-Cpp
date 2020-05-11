#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="George Calin";

    qInfo()<<name.mid(0,6);
    qInfo()<< name.insert(0, "Mr. ");
    qInfo()<<name;
    qInfo()<<name.split(" ");
     qInfo()<<name;

    int index=name.indexOf(".");
    QString newName=name.remove(0,index+1).trimmed();
    qInfo()<<newName;

    return a.exec();
}
