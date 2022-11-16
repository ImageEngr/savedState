#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete m_state;
    delete ui;
}

void MainWindow::settingsPressed()
{
    dlgSettings *dlg = new dlgSettings(this, m_state);

    dlg->exec();
    //setState(dlg->state());

    dlg->deleteLater();
    ui->lcdVoltage->display(m_state->getVolts());
}

void MainWindow::setState(settingsState *newState)
{
    m_state = newState;
}

const settingsState &MainWindow::state() const
{
    return *m_state;
}


void MainWindow::init()
{
    connect(ui->actionExit,&QAction::triggered,this,&QMainWindow::close);
    connect(ui->pushButton,&QPushButton::pressed,this,&MainWindow::settingsPressed);
    m_state = new settingsState();
}
