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

    QString getTypeByNumber(int num);
public:
    housedata();
    void addHouse(house* stud);   
    QVector<QVector<QString>> getAllHouses();
    QVector<QVector<QString>> getHousesByType(int type);
    QVector<QVector<QString>> getHousesByDistrict(QString dist);   
    void clearHouseList();
    bool editHouse(int id, house* h);
    bool deleteHouse(int id);

    void addAdress(QString adress);
    QVector<QString> getAdresses();
    bool deleteAdress(QString adress);
    bool editAdress(QString oldAdr, QString newAdr);
    void clearAdressList();

    void saveInFile(QString flats, QString adresses);
    void loadFromFile(QString flats, QString adresses);

    void setData(housedata* data);
};

#endif // HOUSEDATA_H
