#ifndef POWERUP_H
#define POWERUP_H

#include "object.h"

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class powerupHealth:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:

    powerupHealth(QGraphicsPixmapItem * parent=0, int y = 200);

public slots:
    void move();
};

#endif // POWERUP_H
