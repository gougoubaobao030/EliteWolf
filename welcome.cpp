#include "welcome.h"
#include "ebutton.h"
#include "game.h"
Game * game;

Welcome::Welcome()
{
    scene = new QGraphicsScene;
    scene->setSceneRect(0, 0, 1200, 700);

    setScene(scene);
    setFixedSize(1200, 700);

    setBackgroundBrush(QBrush(QPixmap("/home/gougou/project/qtMiniGame/EliteWolf/elite/main.png")));
}

void Welcome::trigger()
{
    EButton * ed = new EButton("欢迎来到实力至上主义人狼游戏教室");
    ed->setPos(200, 500);
    scene->addItem(ed);
    connect(ed, &EButton::shited, this, &Welcome::start);
}

void Welcome::start()
{
    game = new Game;
    game->show();
    game->startArgument();
    close();
}

