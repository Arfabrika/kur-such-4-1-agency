#ifndef HOUSEFACADE_H
#define HOUSEFACADE_H

#include <housedata.h>
#include <housefactory.h>

class housefacade : public QObject
{
    Q_OBJECT
    housedata data;
    QString fileNameFlats, fileNameAdresses;
    housefactory* HouseFactory;
public:
    housefacade();
    void addHouse(QString adress, int cost, int type, QString district, int state, client *cl);
    QVector<QVector<QString>> findHouses(int type);
    QVector<QVector<QString>> getAllHouses();
    QVector<QVector<QString>> getHousesByDistrict(QString dist);
    void clearHouses();

    void addAdress(QString adr);
    QVector<QString> getAdresses();
    void clearAdresses();

    void saveDataInFile();
    void loadDataFromFile();
};

#endif // HOUSEFACADE_H
