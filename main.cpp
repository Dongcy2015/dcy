#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argcm, char *argv[])
{
    QGuiApplication app(argcm, argv);

    QQmlApplicationEngine *engine;
    engine->load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
