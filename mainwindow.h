#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLCDNumber>
#include "dlgsettings.h"
#include "settingsstate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    const settingsState &state() const;

    void setState(settingsState *newState);

private slots:
    void settingsPressed();

private:
    Ui::MainWindow *ui;
    dlgSettings *m_dialogSettings;
    settingsState *m_state;

    void init();
};

#endif // MAINWINDOW_H
