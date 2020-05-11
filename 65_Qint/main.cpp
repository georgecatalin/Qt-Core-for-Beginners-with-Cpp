#include <QCoreApplication>
#include <QDebug>

//typedef means defining one's types starting from existing data types

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint8 valueInt8=0;
    qint16 valueInt16=0;
    qint32 valueInt32=0;
    qint64 valueInt64=0;
    qintptr valueIntPtr=0;

    qInfo()<<" size of valueInt8:"<<sizeof(valueInt8);
    qInfo()<<" size of valueInt16:"<<sizeof(valueInt16);
    qInfo()<<" size of valueInt32:"<<sizeof(valueInt32);
    qInfo()<<" size of valueInt64:"<<sizeof(valueInt64);
    qInfo()<<" size of valueIntPtr:"<<sizeof(valueIntPtr); // same size on all machines =8 bytes;

    return a.exec();
}
