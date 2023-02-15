#include "argumenttime.h"
#include "debater.h"
#include "game.h"
extern Game * game;

ArgumentTime::ArgumentTime()
{

}

void ArgumentTime::arguList(int num)
{

        Debater * b = new Debater;
        b->setDebaterPos(100, 50);
        game->scene->addItem(b->debater);
        game->scene->addItem(b->phase);

        Debater * b2 = new Debater;

        game->scene->addItem(b2->debater);
        b2->setDebaterPos(100, 900);
        game->scene->addItem(b2->phase);

        Debater * b3 = new Debater;
        b3->setDebaterPos(100, 1750);
        game->scene->addItem(b3->debater);
        game->scene->addItem(b3->phase);


}
