#ifndef HOUSE_H
#define HOUSE_H

#include <QObject>
#include <client.h>

class house : public QObject
{
    Q_OBJECT
    QString adress;
    int cost;
    int type;
    int state; //0 - not sold, 1 - sold
    QString district;
    client* person;
public:
    house();
    house(QString adress, int cost, int type, QString district, int state, client* person);

    void setType(int type);
    void setCost(int cost);
    void setAdress(QString adress);
    void setState(int state);
    void setDistrict(QString district);
    void setClient(client* person);

    int getType();
    QString getAdress();
    QString getDistrict();
    int getState();
    int getCost();
    client* getClient();
};

#endif // HOUSE_H
