#include "game.h"
#include "ui_game.h"
#include <QDebug>
#include <QMediaPlayer>

/**
 * @brief Game::Game Handler for the game window and all the graphics and goodies and settings within it
 * @param parent
 */
Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game) {
    ui->setupUi(this);
    this->setWindowState(Qt::WindowFullScreen);
}

/**
 * @brief Game::~Game Game deconstructor
 */
Game::~Game() {
    delete ui;
}

/**
 * @brief Game::setVolume Set the volume of the game
 * @param v The volume of the game on a scale of 0-10
 */
void Game::setVolume(int v) {
    qDebug() << "Volume set in game to " << v;
    volume = v;
}

int Game::getVolume() {
    return volume;
}

void Game::showEvent( QShowEvent* event) {
    QWidget::showEvent(event);
    // MP3 MEDIA TEST
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:\\Users\\Public\\Music\\Sample Music\\kalimba.mp3"));
    player->setVolume(50);
    player->play();
    // END TEST
}
