#include "backend.h"
#include <QDateTime>
#include <QDebug>

Backend::Backend(QObject* parent): QObject(parent), m_counter(0) //конструктор
{
    m_currentTime = QDateTime::currentDateTime().toString("hh:mm:ss"); //инициализация таймера
    m_timer.setInterval(1000); //интервал в одну секунду

    connect(&m_timer, &QTimer::timeout, this, &Backend::updateTime); //подключение сигнала m_timer "timeout" к слоту updateTime()
    m_timer.start(); //запуск таймера

    qDebug() <<  "Backend object created and timer started";
}

QString Backend::getCurrentTime() const {
    return m_currentTime; //getter
}

int Backend::getCounter() const {
    return m_counter; //getter
}

void Backend::setCurrentTime(const QString& currentTime){
    if (m_currentTime == currentTime){
        return; //setter (slot)
    }
    m_currentTime = currentTime;

    emit currentTimeChanged(); //Qml перечитает значение свойства
}


void Backend::setCounter(int counter){
    if (m_counter == counter){
        return; //setter (slot)
    }
    m_counter = counter;

    emit counterChanged(); //Qml перечитает значение свойства
}

void Backend::incrementCounter(){ //Q_INVOKABLE - можно вызывать эту функцию из Qml
    setCounter(m_counter + 1);
}

void Backend::resetCounter(){ //Q_INVOKABLE - можно вызывать эту функцию из Qml
    setCounter(0);
}

void Backend::updateTime(){ //slot который вызывается каждую секунду
    setCurrentTime(QDateTime::currentDateTime().toString("hh:mm:ss"));
}
