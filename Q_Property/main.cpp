#include <QCoreApplication>
#include "test.h"
#include "watcher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test objTest;
    watcher objWatcher;

    QObject::connect(&objTest,&test::messageChanged,&objWatcher,&watcher::messageChanged);

    objTest.setProperty("message","Hello, Qt");
    objTest.setMessage("this is the value of the property");

    return a.exec();
}
