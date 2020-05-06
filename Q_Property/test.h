#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT

    QString m_message;

public:
    explicit test(QObject *parent = nullptr);

    Q_PROPERTY(QString message READ getMessage WRITE setMessage NOTIFY messageChanged) //no need for semicolon ; because Q_Property is a MACRO like Q_OBJECT above

    //setting a getter for the private property m_message
    QString getMessage();
    //setting a setter
    void setMessage(QString value);

signals:
    void messageChanged(QString getMessage);

};

#endif // TEST_H
