#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include <QObject>

class settingsState : public QObject
{
    Q_OBJECT
public:
    explicit settingsState(QObject *parent = nullptr);

signals:

private:
    int volts{0};
    int current{0};
    QString equipment{"none"};

public:
    int getVolts() const;
    void setVolts(int newVolts);
    int getCurrent() const;
    void setCurrent(int newCurrent);
    const QString &getEquipment() const;
    void setEquipment(const QString &newEquipment);
};

#endif // SETTINGSSTATE_H
