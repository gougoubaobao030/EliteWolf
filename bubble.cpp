#include "bubble.h"

Bubble::Bubble()
{

}

void Bubble::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF bubbleRect = boundingRect();
    QPen pen(Qt::red, 8);
    QBrush bush(Qt::white);
    painter->setBrush(bush);
    painter->setOpacity(0.6);
    painter->setPen(pen);
    painter->drawRoundedRect(bubbleRect, 20, 20);
    QGraphicsTextItem::paint(painter, option, widget);
    //painter just like one item
    //one world one pen one brush one dream
}
