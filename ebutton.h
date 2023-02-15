#ifndef EBUTTON_H
#define EBUTTON_H

#include <QGraphicsRectItem>
#include <QObject>

class EButton : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    QGraphicsTextItem * text;

    EButton(QString title);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);

signals:
    void shited();
};

#endif // EBUTTON_H
