#ifndef DEBATER_H
#define DEBATER_H

#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QString>
#include <bubble.h>
class Debater
{
public:
    Debater();


    QString photoPath;
    QGraphicsPixmapItem * debater;
    Bubble * phase;

    void setDebaterPos(int x, int y);
};

#endif // DEBATER_H
