#ifndef BUTTON_H
#define BUTTON_H

#pragma once
#include <QWidget>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
#include <QMediaPlayer>
using namespace std;

class Button : public QGraphicsRectItem {

public:
    Button();
    void keyPressEvent(QKeyEvent *event);

    void Highlight();


private:
    QMediaPlayer * music;
};

class Cursor {
public:
    Cursor();

private:
    void clickevent();





};




#endif // BUTTON_H
