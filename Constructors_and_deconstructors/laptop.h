#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class laptop : public QObject
{
    Q_OBJECT
public:

    //Default constructor
    explicit laptop(QObject *parent = nullptr, QString name="");

    //Default deconstructor
    ~laptop();

    int weight;
    QString name;
    double convertKilos();
    void test();

    //laptop * this;  //there exists this automatically added variable to each class. It assigns a pointer to the object and assigns it to variable this

signals:

};

#endif // LAPTOP_H
