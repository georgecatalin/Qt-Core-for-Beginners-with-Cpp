#include <QCoreApplication>
#include <QDebug>

struct laptop
{
    int weight;

    double convertKilogrammes(){
        return weight*0.45;
    };
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop notebook;
    notebook.weight=5;

    qInfo()<<" The weight of notebook in pounds is "<<notebook.weight;

    qInfo()<<" The weight of notebook in Kg is "<<notebook.convertKilogrammes();

    return a.exec();
}
