#ifndef TWOROOMS_H
#define TWOROOMS_H

#include <QObject>
#include <house.h>

class tworooms : public house
{
    Q_OBJECT
public:
    tworooms();
    tworooms(QString adress, int cost, QString district, int state, client* person);
};

#endif // TWOROOMS_H
