#ifndef MANYROOMS_H
#define MANYROOMS_H

#include <QObject>
#include <house.h>

class manyrooms : public house
{
    Q_OBJECT
public:
    manyrooms();
    manyrooms(QString adress, int cost, QString district, int state, client* person);
};

#endif // MANYROOMS_H
