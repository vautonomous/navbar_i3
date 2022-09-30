#pragma once

#include <QObject>
#include <QProcess>
#include <QPointer>

class RunFromTerminal : public QObject {
Q_OBJECT
public:
  explicit RunFromTerminal(QObject *parent = nullptr);

  Q_INVOKABLE void run(const QString &command);

private:
  QPointer<QProcess> process_;
};
