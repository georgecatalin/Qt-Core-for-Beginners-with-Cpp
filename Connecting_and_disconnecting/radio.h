#ifndef RADIO_H
#define RADIO_H

#include <QObject>
#include <QDebug>

class radio : public QObject
{
    Q_OBJECT
public:
    explicit radio(QObject *parent = nullptr);

signals:
    void quit();

public slots:
    /* **
     * pay attention so that definition of slots coincide with the one for the signal in the other class e.g.
     * void send(int channel,QString name,QString message);
     * **/

    void listen(int channel, QString name,QString message);

};

#endif // RADIO_H
