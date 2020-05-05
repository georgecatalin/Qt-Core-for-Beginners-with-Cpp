#include <QCoreApplication>
#include <QDebug>

void test(QString* var)
{
    qInfo()<<*var;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString* pointer=new QString("asasasaasasassdasffffffffffffffffffffffffffffffffffffdfsafsafsa");

    /* ****
     * We use pointers to optimize the use of memory and speed up the programs
     * C++ allows operation on pointers.
     * Thus, instead operating on copies of the variables=values , C++ handles addresses in memory=pointers to these variables
     * *** */

    qInfo()<<" The size of the pointer is"<<sizeof(pointer);
    qInfo()<<" The size of the actual data which is used by the application is "<<pointer->length();
    qInfo()<<" The data it is pointing to "<<*pointer;
    qInfo()<<" The size of the actual data is"<<sizeof(*pointer);

    test(pointer);

    delete pointer; //always kill the object in heap memory after its construction with new

    return a.exec();
}

/* ***
 * BOTTOM LINE:
 * We are using pointers in C++ to avoid passing copies and copies of variables or instances of the classes
 * each time when they are used
 *  ** */
