#include "powerup.h"
#include "Object.h"
PowerUp::PowerUp(){}
PowerUp::PowerUp(string spr,int xV, int yV,int loc[2], int t) : Object(spr,xV,yV,loc), Type(t){}

int PowerUp::onHit(){
    return Type;
}


