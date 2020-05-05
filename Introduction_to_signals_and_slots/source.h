#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class source : public QObject
{
    Q_OBJECT
public:
    explicit source(QObject *parent = nullptr);
    void test();

signals:
    void mySignal(QString message);

};

#endif // SOURCE_H
