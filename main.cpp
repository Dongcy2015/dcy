#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argcm, char *argv[])
{
    QGuiApplication fdsafdsafsaapp(argcm, argv);

    QQmlApplicationEngine *engine;
    engine->load(QUrl(QStringLiteral("qrc:/main.qml")));
//fhdkjsafhdsafhdksahfkdhskahfkdhskahfkdhskahfdkshakfhdksahfksdhak
    return fdsafdsafsaapp.exec();
}
