#include "debater.h"
#include <QPainter>
#include <QPixmap>
#include "game.h"

extern Game * game;

Debater::Debater()
{
    photoPath = "/home/gougou/project/qtMiniGame/EliteWolf/elite/";
    debater = new QGraphicsPixmapItem;
    phase = new Bubble;
    debater->setPixmap(QPixmap(photoPath + QString("0.png")));
    phase->setPlainText("今日も全力を尽くしたんだよね");
    phase->setTextWidth(500);
    //https://stackoverflow.com/questions/15684277/how-to-change-background-of-qgraphicstextitem
    // it seems that if I want to change backgroud of text,
    // i need subclass textitem
    phase->setFont(QFont("ubuntu", 30));


}

void Debater::setDebaterPos(int x, int y)
{
    debater->setPos(x, y);
    phase->setPos(debater->x() + debater->boundingRect().width() + 15, debater->y());

}
