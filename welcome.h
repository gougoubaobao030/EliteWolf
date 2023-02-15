#ifndef WELCOME_H
#define WELCOME_H

#include <QGraphicsView>
#include <QObject>

class Welcome : public QGraphicsView
{
    Q_OBJECT
public:
    QGraphicsScene * scene;

    Welcome();
    void trigger();

public slots:
    void start();
};

#endif // WELCOME_H
