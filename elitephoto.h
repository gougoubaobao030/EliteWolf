#ifndef ELITEPHOTO_H
#define ELITEPHOTO_H

#include <QGraphicsPixmapItem>

class ElitePhoto : public QGraphicsPixmapItem
{
public:
    ElitePhoto();
    void setPixmap(QString photoName);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
private:
    QString photoPath;
    bool is_choosed;
};

#endif // ELITEPHOTO_H
