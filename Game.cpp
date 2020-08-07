#include "Game.h"
#include "QBrush"

Game::Game() : QGraphicsView(), scene(new QGraphicsScene(0,0,1920,1080))
{
    setScene(scene);
    setFixedSize(1920,1080);
    setVerticalScrollBarPolicy  (Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}
