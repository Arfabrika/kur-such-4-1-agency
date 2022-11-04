#ifndef STUDIO_H
#define STUDIO_H

#include <QObject>
#include <house.h>

class studio : public house
{
    Q_OBJECT
public:
    studio();
    studio(QString adress, int cost, QString district, int state, client* person);
};

#endif // STUDIO_H
