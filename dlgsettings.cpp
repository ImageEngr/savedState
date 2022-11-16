#include "dlgsettings.h"
#include "ui_dlgsettings.h"

dlgSettings::dlgSettings(QWidget *parent, settingsState *inputState) :
    QDialog(parent),
    ui(new Ui::dlgSettings)
{
    ui->setupUi(this);
    setState(inputState);
    ui->spbVolts->setValue(m_state->getVolts());
    ui->spbCurrent->setValue(m_state->getCurrent());
    ui->txtName->setText(m_state->getEquipment());
}

dlgSettings::~dlgSettings()
{
    delete ui;
}

const settingsState &dlgSettings::state() const
{
    return *m_state;
}

void dlgSettings::setState(settingsState *newState)
{
    m_state = newState;
}


void dlgSettings::on_buttonBox_accepted()
{
    m_state->setVolts(ui->spbVolts->value());
    m_state->setCurrent(ui->spbCurrent->value());
    m_state->setEquipment(ui->txtName->text());
    accept();
}


void dlgSettings::on_buttonBox_rejected()
{
    reject();
}

void dlgSettings::saveState()
{

}

