#include <QCoreApplication>
#include <QDebug>
#include <QDateTime>
#include <QDate>
#include <QTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate currentDate=QDate::currentDate();
    qInfo()<<"current date is:"<<currentDate;
    qInfo()<<currentDate.addDays(1);
    qInfo()<<currentDate.addYears(15);
    qInfo()<<currentDate.toString(Qt::DateFormat::LocalDate);
    qInfo()<<currentDate.toString((Qt::DateFormat::TextDate));

    QTime currentTime=QTime::currentTime();
    qInfo()<<"Time now is: "<<currentTime;
    qInfo()<<currentTime.addSecs(35);
    qInfo()<<currentTime.toString(Qt::DateFormat::LocalDate);

    QDateTime currentDateTime=QDateTime::currentDateTime();
    qInfo()<<currentDateTime;

    QDateTime expiryDate=currentDateTime.addDays(45);
    qInfo()<<"Expiry Date:"<<expiryDate;

    if (currentDateTime>expiryDate)
    {
        qInfo()<<"Expired";
    }
    else
    {
        qInfo()<<"Still Valid";
    }


    return a.exec();
}
