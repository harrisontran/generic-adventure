#ifndef GAMELAUNCHER_H
#define GAMELAUNCHER_H

#include <QWidget>
#include <QPalette>
#include "game.h"
#include "settings.h"

namespace Ui {
class GameLauncher;
}

class GameLauncher : public QWidget {
    Q_OBJECT

public:
    explicit GameLauncher(QWidget *parent = 0);
    Game *game;
    ~GameLauncher();
private slots:
    void on_settingsButton_clicked();
    void on_startButton_clicked();

private:
    Ui::GameLauncher *ui;
    Settings *settingsWindow;
};

#endif // GAMELAUNCHER_H
