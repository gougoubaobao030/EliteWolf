#include "ebutton.h"
#include <QFont>
#include <QBrush>
EButton::EButton(QString title)
{
    setRect(0, 0, 800, 100);

    text = new QGraphicsTextItem(title, this);
    text->setFont(QFont("ubuntu", 30));
    text->setPos((rect().width() - text->boundingRect().width()) / 2,
                 (rect().height() - text->boundingRect().height()) / 2);

    setBrush(QBrush(QPixmap("/home/gougou/project/qtMiniGame/EliteWolf/elite/bg.png")));
}

void EButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit shited();
}
