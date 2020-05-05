#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>

class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);

signals:

public slots:
    void onMessage(QString message);
};

#endif // DESTINATION_H
