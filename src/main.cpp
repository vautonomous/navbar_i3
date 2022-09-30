#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "RunFromTerminal.h"

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  RunFromTerminal run_from_terminal;

  QQmlApplicationEngine engine;
  engine.rootContext()->setContextProperty("RunFromTerminal", &run_from_terminal);
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;


  return app.exec();
}
