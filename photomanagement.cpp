#include "photomanagement.h"
#include "game.h"
#include "elitephoto.h"

extern Game * game;
PhotoManagement::PhotoManagement()
{
    photoList = QVector<ElitePhoto*>(13);
    photoList[0] = new ElitePhoto();
    photoList[0]->setPixmap("0.png");
    photoList[0]->setPos(100, 500);

    photoList[1] = new ElitePhoto();
    photoList[1]->setPixmap("1.png");
    photoList[1]->setPos(250, 500);

    photoList[2] = new ElitePhoto();
    photoList[2]->setPixmap("2.png");
    photoList[2]->setPos(400, 500);
}
