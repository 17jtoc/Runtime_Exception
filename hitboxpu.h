#ifndef HITBOXPU_H
#define HITBOXPU_H


#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class HitBoxPU: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    HitBoxPU(QGraphicsItem * parent=0);
public slots:
    void move();
};

#endif // HITBOXPU_H
