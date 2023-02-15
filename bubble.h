#ifndef BUBBLE_H
#define BUBBLE_H

#include <QGraphicsTextItem>
#include <QPainter>
class Bubble : public QGraphicsTextItem
{
public:
    Bubble();
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget *widget);
};

#endif // BUBBLE_H
