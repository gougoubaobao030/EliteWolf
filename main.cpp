//#include "game.h"
#include "welcome.h"

#include <QApplication>

//1302  :  704

//Game * game;
//"/home/gougou/project/qtMiniGame/EliteWolf/elite/"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Welcome w;
    w.show();
    w.trigger();
//    game = new Game;
//    game->show();
//    game->startArgument();
    return a.exec();
}
//plan:
//bunch of labels, have a button

//need to practice:
//phrase class : public pixmapitem
//override paint() in textitem
