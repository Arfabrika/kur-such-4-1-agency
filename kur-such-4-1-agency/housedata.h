#ifndef HOUSEDATA_H
#define HOUSEDATA_H

#include <QFile>
#include <QTextStream>
#include <vector>
#include "house.h"

class housedata : public QObject
{
    Q_OBJECT
    QList<house *> houseList;
    QList<QString> adressList;
public:
    housedata();
    void addHouse(house* stud);
    void addAdress(QString adress);
    QVector<QVector<QString>> getAllHouses();
    QVector<QVector<QString>> getHousesByType(int type);
    QVector<QVector<QString>> getHousesByDistrict(QString dist);
    QVector<QString> getAdresses();
    void clearHouseList();
    void clearAdressList();

    void saveInFile(QString flats, QString adresses);
    void loadFromFile(QString flats, QString adresses);
};

#endif // HOUSEDATA_H
