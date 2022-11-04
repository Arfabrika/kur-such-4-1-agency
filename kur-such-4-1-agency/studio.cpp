#include "studio.h"

studio::studio()
{
    this->setType(0);
}

studio::studio(QString adress, int cost, QString district, int state, client* person)
{
    this->setType(0);
    this->setAdress(adress);
    this->setCost(cost);
    this->setDistrict(district);
    this->setState(state);
    this->setClient(person);
}
