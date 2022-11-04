#ifndef THREEROOMS_H
#define THREEROOMS_H

#include <QObject>
#include <house.h>

class threerooms : public house
{
    Q_OBJECT
public:
    threerooms();
    threerooms(QString adress, int cost, QString district, int state, client* person);
};

#endif // THREEROOMS_H
