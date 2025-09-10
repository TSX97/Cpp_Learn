#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "stopwatch.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    StopWatch stopWatch;

    QUrl url(QStringLiteral("qrc:main.qml"));

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("stopWatch", &stopWatch);

    QObject::connect(
        &engine, //
        &QQmlApplicationEngine::objectCreationFailed,//
        &app,//
        [](const QUrl &objUrl) {QCoreApplication::exit(-1);}, //
        Qt::QueuedConnection);
    engine.loadFromModule("stopwatch", "Main");

    return app.exec();
}
