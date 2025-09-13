#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "timer.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    MyTimer timerObj;
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("timer", &timerObj);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("timer", "Main");

    return app.exec();
}
