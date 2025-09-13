#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTime> // время/работа со временем
#include <QTimer> // постоянно тикающий будильник который шлет мне сигналы
#include <QString>

class MyTimer : public QObject {

Q_OBJECT

Q_PROPERTY(QTime time READ getTime WRITE setTime NOTIFY timeChanged)
Q_PROPERTY(QString displayTime READ displayTime NOTIFY displayTimeChanged)

public:

    explicit MyTimer(QObject* parent = nullptr);

    QTime getTime() const;

    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE void specifyTime(const QString& time);
    Q_INVOKABLE void startStopTime();
    Q_INVOKABLE QString displayTime();

public slots:

    void setTime(QTime time);
    void updateTime();

signals:

    void timeChanged();
    void displayTimeChanged();
    // void reserveTimeChanged();

private:

    QTime m_time;
    QTimer m_timer;

};



#endif // TIMER_H
