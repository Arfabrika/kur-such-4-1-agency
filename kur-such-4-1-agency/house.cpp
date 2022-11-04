#include "house.h"

house::house()
{

}

house::house(QString adress, int cost, int type, QString district, int state, client* person)
{
    this->adress = adress;
    this->cost = cost;
    this->type = type;
    this->state = state;
    this->district = district;
    this->person = person;
}

void house::setType(int type)
{
    this->type = type;
}

void house::setCost(int cost)
{
    this->cost = cost;
}

void house::setAdress(QString adress)
{
    this->adress = adress;
}

void house::setDistrict(QString district)
{
    this->district = district;
}

void house::setState(int state)
{
    this->state = state;
}

void house::setClient(client* person)
{
    this->person = person;
}

int house::getType()
{
    return type;
}

QString house::getAdress()
{
    return adress;
}

QString house::getDistrict()
{
    return district;
}

int house::getCost()
{
    return cost;
}

int house::getState()
{
    return state;
}

client* house::getClient()
{
    return person;
}
