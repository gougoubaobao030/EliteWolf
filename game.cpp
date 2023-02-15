#include "game.h"
#include "photomanagement.h"
#include "argumenttime.h"
#include <QLabel>
#include <QDebug>

Game::Game(QWidget *parent)
    : QGraphicsView(parent), pm()
{
    scene = new QGraphicsScene;
    setScene(scene);
    scene->setSceneRect(0, 0, 1302, 10000);
    setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    setFixedSize(1302, 704);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //compiler出于可怜，告诉了我不能不能加（）的原因。
    scene->addItem(pm.photoList[0]);
    scene->addItem(pm.photoList[1]);
    scene->addItem(pm.photoList[2]);

    pb = new QPushButton(this);
    pb->setGeometry(1000, 100, 150, 200);
//    pb->setStyleSheet("background-image : url(/home/gougou/project/qtMiniGame/EliteWolf/elite/7.png);");
    QPixmap shuai = QPixmap("/home/gougou/project/qtMiniGame/EliteWolf/elite/7.png").scaled(150, 200);
    pb->setIcon(QIcon(shuai));
    pb->setIconSize(QSize(150, 200));

    QLabel * mei = new QLabel(this);
    mei->setPixmap(QPixmap("/home/gougou/project/qtMiniGame/EliteWolf/elite/6.png").scaled(150, 200));
    mei->setGeometry(1000, 300, 150, 200);

    QLabel * mei2 = new QLabel(this);
    mei2->setPixmap(QPixmap("/home/gougou/project/qtMiniGame/EliteWolf/elite/5.png").scaled(150, 200));
    mei2->setGeometry(1000, 500, 150, 200);

//    setStyleSheet("background: transparent");
    //view 变透明了，大概
    setBackgroundBrush(QBrush(QImage("/home/gougou/project/qtMiniGame/EliteWolf/elite/bg.png")));
//    setStyleSheet("background-image : url(/home/gougou/project/qtMiniGame/EliteWolf/elite/bg.png);");
}

Game::~Game()
{
}

void Game::startArgument()
{
    ArgumentTime * at = new ArgumentTime;
    at->arguList(3);
}

//void Game::mousePressEvent(QMouseEvent *event)
//{
//    qInfo() << this->width() << " : " << this->height();

//}

