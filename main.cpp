#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "datamodel.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<dataModel>("org.example", 1, 0, "DataModel");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/untitled3/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}