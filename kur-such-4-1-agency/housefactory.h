#ifndef HOUSEFACTORY_H
#define HOUSEFACTORY_H

#include <QObject>
#include <house.h>

class housefactory : public house
{
    Q_OBJECT
public:
    housefactory();
    house* createHouse(QString adress, int cost, int type, QString district, int state, client *cl);
};

#endif // HOUSEFACTORY_H
