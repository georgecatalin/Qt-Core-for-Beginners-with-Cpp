#include <QCoreApplication>
#include <QDebug>

template<class T,class F>

T add(T value1, F value2)
{
    return value1+value2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<add<int,double>(1,3.4); //always provide explicitely the template, otherwise compiler will try guessing what data types you mean
    qInfo()<<add<double,int>(3.14,2);
    qInfo()<<add<int,bool>(2,true);
    //qInfo()<<add<int,QString>(1,"Hello");  //can not do that because the operation can not apply to int + const char* types

    return a.exec();
}
