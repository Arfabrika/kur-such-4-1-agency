#include "threerooms.h"

threerooms::threerooms()
{
    this->setType(3);
}

threerooms::threerooms(QString adress, int cost, QString district, int state, client* person)
{
    this->setType(3);
    this->setAdress(adress);
    this->setCost(cost);
    this->setDistrict(district);
    this->setState(state);
    this->setClient(person);
}
