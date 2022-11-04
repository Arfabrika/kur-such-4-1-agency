#ifndef ONEROOM_H
#define ONEROOM_H

#include <QObject>
#include <house.h>

class oneroom : public house
{
    Q_OBJECT
public:
    oneroom();
    oneroom(QString adress, int cost, QString district, int state, client* person);
};

#endif // ONEROOM_H
