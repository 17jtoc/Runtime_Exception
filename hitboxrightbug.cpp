#include "hitboxrightbug.h"

#include <QTimer>
#include <QGraphicsScene>
#include <QList>
//#include "Enemy.h"
#include "game.h"
#include "floorBlock.h"
#include <QDebug>
#include<QPainter>
#include <QBrush>


HitBoxRightBug::HitBoxRightBug(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent){
    // drew the HitBox (a rectangle)
    setRect(0,0,30,10);
    setBrush(Qt::red);
    setOpacity(0);
    update();




    // make/connect a timer to move() the HitBox every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(30);


}

void HitBoxRightBug::move(){
    setPos(Game::game->bug1->x()+60,Game::game->bug1->y());
    // get a list of all the items currently colliding with this HitBox
    QList<QGraphicsItem *> colliding_items = collidingItems();

    Game::game->bug1->hRight = 0;

    // if one of the colliding items is an Enemy, destroy both the HitBox and the enemy
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(FloorBlock)){

            Game::game->bug1->hRight = 1;

        }else{
        }
    }
}
