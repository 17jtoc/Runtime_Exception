#include "hitboxfile.h"

#include <QTimer>
#include <QGraphicsScene>
#include <QList>
//#include "Enemy.h"
#include "game.h"
#include "floorBlock.h"
#include <QDebug>
#include<QPainter>
#include <QBrush>


HitBoxFile::HitBoxFile(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent){
    // drew the HitBoxX (a rectangle)
    setRect(0,0,55,45);

    setBrush(Qt::white);
    setOpacity(0);

    update();



    // make/connect a timer to move() the HitBox every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(30);


}
void HitBoxFile::move(){
    setPos(Game::game->file1->x()+22,Game::game->file1->y()-55);
    // get a list of all the items currently colliding with this HitBox
    QList<QGraphicsItem *> colliding_items = collidingItems();
}
