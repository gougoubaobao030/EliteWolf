#include "elitephoto.h"
#include <QPainter>

ElitePhoto::ElitePhoto()
{
    photoPath = "/home/gougou/project/qtMiniGame/EliteWolf/elite/";
    is_choosed = false;
}

void ElitePhoto::setPixmap(QString photoName)
{
    QGraphicsPixmapItem::setPixmap(QPixmap(photoPath + photoName).scaled(150, 200));
}

void ElitePhoto::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QPixmap *p = new QPixmap(photoPath + QString("7.png"));
    *p = p->scaled(150,200);
    QPainter *pain = new QPainter(p);
    pain->drawRect(10,10,50,50);
    pain->drawRoundedRect(10,10,80, 80,20,20);

    pain->setFont(QFont("ubuntu",138));
    pain->drawText(100, 100, "帅");
    QGraphicsPixmapItem::setPixmap(*p);
//    setPixmap("7.png");
    is_choosed = true;
}
