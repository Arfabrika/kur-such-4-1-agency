#include "housefacade.h"
#include "housefactory.h"

housefacade::housefacade()
{
    fileNameFlats = "../kur-such-4-1-agency/data.db";
    fileNameAdresses = "../kur-such-4-1-agency/adresses.db";
    HouseFactory = new housefactory();
}

void housefacade::addHouse(QString adress, int cost, int type, QString district, int state, client *cl)
{
    house* house;
    house = HouseFactory->createHouse(adress, cost, type, district, state, cl);
    data.addHouse(house);
}

QVector<QVector<QString>> housefacade::findHouses(int type)
{
    return data.getHousesByType(type);
}

QVector<QVector<QString>> housefacade::getAllHouses()
{
    return data.getAllHouses();
}

QVector<QVector<QString>> housefacade::getHousesByDistrict(QString dist)
{
    return data.getHousesByDistrict(dist);
}

 void housefacade::saveDataInFile()
 {
     data.saveInFile(fileNameFlats, fileNameAdresses);
 }

 void housefacade::loadDataFromFile()
 {
     data.loadFromFile(fileNameFlats, fileNameAdresses);
 }

 void housefacade::addAdress(QString adr)
 {
     data.addAdress(adr);
 }

 QVector<QString> housefacade::getAdresses()
 {
     return data.getAdresses();
 }

 void housefacade::clearAdresses()
 {
     data.clearAdressList();
 }

 void housefacade::clearHouses()
 {
     data.clearHouseList();
 }
