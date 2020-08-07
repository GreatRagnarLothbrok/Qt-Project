#ifndef ANIMATION_H
#define ANIMATION_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QList>
#include <QTimer>
#include "Movable.h"
class Animation :public Movable, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Animation();
    ~Animation();
protected:
    void setPicsList(const QList<QPixmap>& pics);
private:
    QList<QPixmap> motionPictures;
    QTimer * animationTimer;
    int pictureIndex;
public slots:
    void animate();
};

//

#endif // ANIMATION_H
