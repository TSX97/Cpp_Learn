#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QObject>
#include <QTimer>
#include <QString>
#include <QTime>
class StopWatch : public QObject{

Q_OBJECT

Q_PROPERTY(QTime time READ getTime WRITE setTime NOTIFY timeChanged)

public:

    explicit StopWatch(QObject* parent = nullptr);

    QTime getTime() const ; //геттер

    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE void startStopTimer(); //вызывается из Qml
    Q_INVOKABLE void resetTimer(); //вызывается из Qml

public slots:

    void setTime(QTime time); //setter slot
    void updateTime(); //slot

signals:

    void timeChanged(); //signal

private:

    QTime m_time;
    QTimer m_timer;
};
#endif
