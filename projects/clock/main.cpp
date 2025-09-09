#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "backend.h"

int main(int argc, char* argv[]){

    QGuiApplication app(argc, argv);

    Backend backendObject;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("backend", &backendObject);

    const QUrl url(QStringLiteral("qrc:main.qml"));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app, [url](QObject* obj, const QUrl &objUrl) {
            if(!obj && url == objUrl) QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);

    engine.loadFromModule("bublic_xdd", "Main");
    // engine.load(url);

    return app.exec();
}
