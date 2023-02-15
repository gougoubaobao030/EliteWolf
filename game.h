#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsView>
#include <photomanagement.h>
#include <QPushButton>

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    QGraphicsScene *scene;
    PhotoManagement pm;
    QPushButton * pb;

    Game(QWidget *parent = nullptr);
    ~Game();
    void startArgument();
//    void mousePressEvent(QMouseEvent * event);
};
#endif // GAME_H
