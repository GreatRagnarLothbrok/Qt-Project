#include "View.h"
#include "QBrush"
#include "Zombie.h"
#include <QGraphicsRectItem>

View::View() : QGraphicsView(), scene(new QGraphicsScene(0,0,1920,1080))
{
    setScene(scene);
    setFixedSize(1920,1080);
    setVerticalScrollBarPolicy  (Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    auto zombie = new Zombie;
    scene->addItem(zombie);
    auto rect = new QGraphicsRectItem(300,0,90,144);
    scene->addItem(rect);
    zombie->start();
    showFullScreen();
}
