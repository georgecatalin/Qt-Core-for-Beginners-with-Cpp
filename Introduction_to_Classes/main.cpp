#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal bird;

    cat.speak("Meaow");
    dog.speak("Ham ham");
    bird.speak("Cuucuuu");

    return a.exec();
}
