#include "manyrooms.h"

manyrooms::manyrooms()
{
    this->setType(4);
}

manyrooms::manyrooms(QString adress, int cost, QString district, int state, client* person)
{
    this->setType(4);
    this->setAdress(adress);
    this->setCost(cost);
    this->setDistrict(district);
    this->setState(state);
    this->setClient(person);
}
