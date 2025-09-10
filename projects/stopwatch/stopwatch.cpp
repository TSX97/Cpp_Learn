#include <QDebug>
#include <QTime>
#include "stopwatch.h"

StopWatch::StopWatch(QObject* parent)
    : QObject(parent),
    m_time(QTime::fromString("00:00:00", "hh:mm:ss")) {
    m_timer.setInterval(1000);

    connect(&m_timer, &QTimer::timeout, this, &StopWatch::updateTime);
    m_timer.start();
}

QTime StopWatch::getTime() const {return m_time;}

void StopWatch::setTime(QTime time) {
    if(m_time != time){m_time = time;}
    return;
}

bool StopWatch::isActive() const {
    return m_timer.isActive();
}

void StopWatch::startStopTimer(){
    if(m_timer.isActive()){
        m_timer.stop();
    } else{
        m_timer.start();
    }
}

void StopWatch::resetTimer(){
    m_timer.stop();
    // m_time = QTime::fromString("00:00:00", "hh:mm:ss");
    m_time = QTime(0, 0, 0);

    m_timer.start();
    emit timeChanged();
}

void StopWatch::updateTime(){
    m_time = m_time.addMSecs(1000);
    // qDebug() << "time: " << m_time;

    emit timeChanged();
}



