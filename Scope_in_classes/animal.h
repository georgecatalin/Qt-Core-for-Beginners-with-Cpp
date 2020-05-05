#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QtDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr, QString name="");

    QString name;
    void sayHello(QString message);
signals:

};

#endif // ANIMAL_H
