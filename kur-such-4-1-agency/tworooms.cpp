#include "tworooms.h"

tworooms::tworooms()
{
    this->setType(2);
}

tworooms::tworooms(QString adress, int cost, QString district, int state, client* person)
{
    this->setType(2);
    this->setAdress(adress);
    this->setCost(cost);
    this->setDistrict(district);
    this->setState(state);
    this->setClient(person);
}
