#include "gamelauncher.h"
#include "ui_gamelauncher.h"
#include <QDebug>

GameLauncher::GameLauncher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameLauncher) {
    game = new Game();
    ui->setupUi(this);
     qDebug() << "LAUNCHER INITIATED";
}

GameLauncher::~GameLauncher() {
    delete ui;
}

void GameLauncher::on_settingsButton_clicked() {
    this->setEnabled(false);    // Disable the launcher window when the settings are opened
    qDebug() << "Launcher window disabled";
    settingsWindow = new Settings(this,game->getVolume()); // Load the settings window with the games' settings
    settingsWindow->show();
    qDebug() << "Settings window displayed";
}

void GameLauncher::on_startButton_clicked() {
    // Close the launcher on game start and fire up the main window
    this->close();
    qDebug() << "Launcher closed";
    game->show();
    qDebug() << "Game window displayed";
}
