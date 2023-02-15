#ifndef PHOTOMANAGEMENT_H
#define PHOTOMANAGEMENT_H

#include <QVector>
#include <elitephoto.h>
class PhotoManagement
{
public:

    PhotoManagement();
    QVector<ElitePhoto*> photoList;
};

#endif // PHOTOMANAGEMENT_H
