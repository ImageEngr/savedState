#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QString>
#include <QVariant>
#include "settingsstate.h"

class Converter : public QObject
{
    Q_OBJECT
public:
    explicit Converter(QObject *parent = nullptr);

    static void writeJson(settingsState *obj, QString path);
    static settingsState* readJson(QString path);

signals:

};

#endif // CONVERTER_H
