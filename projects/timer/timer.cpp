#include "timer.h"
#include <QDebug>
#include <QDateTime>

MyTimer::MyTimer(QObject* parent)
    : QObject(parent),
    m_time(QTime::fromString("00:00:00", "hh:mm:ss")){

    m_timer.setInterval(1000);

    connect(&m_timer, &QTimer::timeout, this, &MyTimer::updateTime);
    m_timer.start();
    qDebug() << "timeR start";
}

QTime MyTimer::getTime() const {
    return m_time;
}

void MyTimer::setTime(QTime time){
    m_time = time;
    emit timeChanged();
}

bool MyTimer::isActive() const {
    return m_timer.isActive();
}

void MyTimer::specifyTime(const QString& time){
    qDebug() << "specify time to: " << time;
    setTime(QTime::fromString(time, "h:m:s"));
    emit displayTimeChanged();
}

void MyTimer::startStopTime(){
    m_timer.isActive() ? m_timer.stop() : m_timer.start();
}



QString MyTimer::displayTime(){
    return m_time.toString("hh:mm:ss");
}

void MyTimer::updateTime(){
    if(m_time > QTime(0,0,0)){
        m_time = m_time.addSecs(-1);
        emit timeChanged();
        emit displayTimeChanged();
    }
    qDebug() << "time: " << m_time;

}
