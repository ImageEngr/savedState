#include "converter.h"

Converter::Converter(QObject *parent)
    : QObject{parent}
{

}

void Converter::writeJson(settingsState *obj, QString path)
{
    QJsonObject state;
    //state.
    QJsonDocument document = QJsonDocument::fromVariant(state);
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    file.write(document.toJson());
    file.close();
}

settingsState *Converter::readJson(QString path)
{
    settingsState* state = new settingsState();
    return state;
}
