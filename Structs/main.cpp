#include <QCoreApplication>
#include  <QDebug>

enum Colors
{
    white=0,
    black=1,
    red=2,
    green=3,
    blue=4
};

struct product
{
    int weight;
    double price;
    Colors color;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop;

    laptop.weight=5;
    laptop.price=1500.23;
    laptop.color=Colors::red;

    qInfo()<<" The weight of the laptop is "<<laptop.weight;
    qInfo()<<" The price of the laptop is "<<laptop.price;
    qInfo()<<" The color of the laptop is"<<laptop.color;

    return a.exec();
}
