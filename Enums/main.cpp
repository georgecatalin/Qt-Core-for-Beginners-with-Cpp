#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    enum Color
    {
        white,
        red,
        green
    };

    Color favoriteColor=Color::green;

    qInfo()<<" The favourite color is "<< favoriteColor;
    qInfo()<<" The un-favorite color is"<< Color::white;


    return a.exec();
}
