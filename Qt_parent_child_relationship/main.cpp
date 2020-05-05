#include <QCoreApplication>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test* parent=new test(&a);
    parent->dog=new animal(parent);

    delete(parent); //if one deletes the parent, then the child vanishes away too=is deconstructed so to say

   return a.exec();
   //a is deconstructed
}

/* ***
 * Use delete() for good memory management
 * *** */
