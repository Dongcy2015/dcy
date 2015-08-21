#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argcm, char *argv[])
{
    QApplication fdsafdsafsaapp(argcm, argv);

    QQmlApplicationEngine *engine;
    engine->load(QUrl(QString("qrc:/main.qml")));
//fhdkjsafhdsafhdksahfkdhskahfkdhskahfkdhskahfdkshakfhdksahfksdhak
    return fdsafdsafsaapp.exec();
}
