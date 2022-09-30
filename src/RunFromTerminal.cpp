#include "RunFromTerminal.h"
#include <iostream>
#include <QQmlEngine>

RunFromTerminal::RunFromTerminal(QObject *parent) : QObject(parent),
                                                    process_(new QProcess(this)) {
  qmlRegisterType<RunFromTerminal>("MyRunFromTerminal", 1, 0, "RunFromTerminal");
}

void RunFromTerminal::run(const QString &command) {
  std::cout << "RunningSystemCommand: " << command.toStdString() << std::endl;
  process_->start(command);
}
