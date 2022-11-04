#include "housefactory.h"
#include "studio.h"
#include "oneroom.h"
#include "tworooms.h"
#include "threerooms.h"
#include "manyrooms.h"

housefactory::housefactory()
{
}

house* housefactory::createHouse(QString adress, int cost, int type, QString district, int state, client *cl)
{
    house* house;
    switch (type)
    {
    case 0:
        house = new studio(adress, cost, district, state, cl);
        break;
    case 1:
        house = new oneroom(adress, cost, district, state, cl);
        break;
    case 2:
        house = new tworooms(adress, cost, district, state, cl);
        break;
    case 3:
        house = new threerooms(adress, cost, district, state, cl);
        break;
    case 4:
        house = new manyrooms(adress, cost, district, state, cl);
        break;
    }
    return house;
}
