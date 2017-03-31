#include "gamelauncher.h"
#include <QApplication>
#include <QPalette>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    GameLauncher w;

    w.show();

    return a.exec();
    qDebug() << "Game launcher enabled on window close";
}
