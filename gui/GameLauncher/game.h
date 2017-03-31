#ifndef GAME_H
#define GAME_H

#include <QWidget>

namespace Ui {
class Game;
}

class Game : public QWidget {
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();
    void setVolume(int v);
    int getVolume();
    void showEvent(QShowEvent*);
private:
    Ui::Game *ui;
    int volume = 5;
};

#endif // GAME_H
