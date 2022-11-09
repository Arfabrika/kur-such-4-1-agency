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
    housedata* getRawHouses();
    void setRowHouses(housedata* data);
    QVector<QVector<QString>> getHousesByDistrict(QString dist);
    void clearHouses();
    bool editHouse(int id, QString adress, int cost, int type, QString district, int state, QString clientName, QString phone);
    bool deleteHouse(int id);

    void addAdress(QString adr);
    bool deleteAdress(QString adr);
    QVector<QString> getAdresses();
    void clearAdresses();
    bool editAdress(QString oldAdr, QString newAdr);

    void saveDataInFile();
    void loadDataFromFile();
};

#endif // HOUSEFACADE_H
