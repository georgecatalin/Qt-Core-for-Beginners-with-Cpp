#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombox;
    station* channels[3]; //declare an array of three stations
    channels[0]=new station(&boombox,95,"rock and roll"); //personal explanation: we can not store new objects in the stack, hence the type of the array is pointer
    channels[1]=new station(&boombox,101,"country");
    channels[2]=new station(&boombox,99,"pop");

    //Qt::QueuedConnection = used when you work with threads
        boombox.connect(&boombox,&radio::quit,&a,&QCoreApplication::quit, Qt::QueuedConnection);

        do {
            qInfo() << "Enter on, off, test or quit:";
            QTextStream qtin(stdin);
            QString line = qtin.readLine().trimmed().toUpper();


            if(line == "ON") {
                qInfo() << "Turing the radio on";
                for(int i = 0; i < 3; i++) {
                    station* channel = channels[i];
                    boombox.connect(channel, &station::send,&boombox, &radio::listen);
                }
                qInfo() << "Radio is on!";
            }

            if(line == "OFF") {
                qInfo() << "Turing the radio off";
                for(int i = 0; i < 3; i++) {
                    station* channel = channels[i];
                    boombox.disconnect(channel, &station::send,&boombox, &radio::listen);
                }
                qInfo() << "Radio is off!";
            }

            if(line == "TEST") {
                qInfo() << "Testing";
                for(int i = 0; i < 3; i++) {
                    station* channel = channels[i];
                    channel->broadcast("Broadcasting live!");
                }
                qInfo() << "Testing complete";
            }

            if(line == "QUIT") {
                qInfo() << "Quitting";
                emit boombox.quit();
                break;
            }

        } while(true);



    return a.exec();
}
