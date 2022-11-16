#include "settingsstate.h"

settingsState::settingsState(QObject *parent)
    : QObject{parent}
{

}

const QString &settingsState::getEquipment() const
{
    return equipment;
}

void settingsState::setEquipment(const QString &newEquipment)
{
    equipment = newEquipment;
}

int settingsState::getCurrent() const
{
    return current;
}

void settingsState::setCurrent(int newCurrent)
{
    current = newCurrent;
}

int settingsState::getVolts() const
{
    return volts;
}

void settingsState::setVolts(int newVolts)
{
    volts = newVolts;
}
