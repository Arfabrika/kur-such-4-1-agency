#include "oneroom.h"

oneroom::oneroom()
{
    this->setType(1);
}

oneroom::oneroom(QString adress, int cost, QString district, int state, client* person)
{
    this->setType(1);
    this->setAdress(adress);
    this->setCost(cost);
    this->setDistrict(district);
    this->setState(state);
    this->setClient(person);
}
