#ifndef DLGSETTINGS_H
#define DLGSETTINGS_H

#include <QDialog>
#include "settingsstate.h"

namespace Ui {
class dlgSettings;
}

class dlgSettings : public QDialog
{
    Q_OBJECT

public:
    explicit dlgSettings(QWidget *parent = nullptr, settingsState *inputState = nullptr);
    ~dlgSettings();

    const settingsState &state() const;

    void setState(settingsState *newState);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void saveState();

private:
    Ui::dlgSettings *ui;
    settingsState *m_state;
};

#endif // DLGSETTINGS_H
