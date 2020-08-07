#include "Animation.h"
#include <QObject>
Animation::Animation():
    Movable(50), QGraphicsPixmapItem()
{

    pictureIndex = 0;
    if (!motionPictures.empty())
        setPixmap(motionPictures[pictureIndex]);
    animationTimer = new QTimer;
    animationTimer->start(46);
    QObject::connect(animationTimer,SIGNAL(timeout()),this,SLOT(animate()));
}

Animation::~Animation()
{
    delete animationTimer;
}

void Animation::setPicsList(const QList<QPixmap> &pics)
{
    animationTimer->stop();
    motionPictures.clear();
    for (const auto & el : pics) {
        motionPictures.append(el);
    }
    pictureIndex = 0;
    animationTimer->start();
}



void Animation::animate() {
    if (pictureIndex != motionPictures.size()) {
        setPixmap(motionPictures[pictureIndex]);
        ++pictureIndex;
    }
    else {
        pictureIndex = 0;
    }
}
