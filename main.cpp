#include "Game.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto game = new Game;
    game->show();
    return a.exec();
}
