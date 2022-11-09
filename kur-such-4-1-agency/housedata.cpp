#include "housedata.h"
#include "housefactory.h"
#include <QDebug>

housedata::housedata()
{

}
void housedata::addHouse(house* stud)
{
    houseList.push_back(stud);
}

QString housedata::getTypeByNumber(int num)
{
    switch (num) {
    case 0:
       return "Студия";
    case 1:
       return "Одна комната";
    case 2:
        return "Две комнаты";
    case 3:
        return "Три комнаты";
    default:
        return "Более трех комнат";
    }
}

QVector<QVector<QString>> housedata::getAllHouses()
{
    QVector<QVector<QString>> res;
    QString tmp;
    for (int i = 0; i < houseList.size(); i++)
    {
        QVector<QString> houseinfo;
        houseinfo.push_back(houseList[i]->getAdress());
        houseinfo.push_back(getTypeByNumber(houseList[i]->getType()));
        houseinfo.push_back(houseList[i]->getDistrict());
        houseinfo.push_back(tmp.setNum(houseList[i]->getCost()));
        houseList[i]->getState() ? houseinfo.push_back("Да") : houseinfo.push_back("Нет");
        houseinfo.push_back(houseList[i]->getClient()->getName());
        houseinfo.push_back(houseList[i]->getClient()->getPhone());
        res.push_back(houseinfo);
    }
    return res;
}

QVector<QVector<QString>> housedata::getHousesByType(int type)
{
    QVector<QVector<QString>> res;
    QString tmp;
    int prevind = 0;
    for (int i = 0; i < houseList.size(); i++)
    {
        if (houseList[i]->getType() == type)
        {
            QVector<QString> houseinfo;
            houseinfo.push_back(houseList[i]->getAdress());
            houseinfo.push_back(getTypeByNumber(houseList[i]->getType()));
            houseinfo.push_back(houseList[i]->getDistrict());
            houseinfo.push_back(tmp.setNum(houseList[i]->getCost()));
            houseList[i]->getState() ? houseinfo.push_back("Да") : houseinfo.push_back("Нет");
            houseinfo.push_back(houseList[i]->getClient()->getName());
            houseinfo.push_back(houseList[i]->getClient()->getPhone());
            res.push_back(houseinfo);
            prevind++;
        }
    }
    return res;
}

QVector<QVector<QString>> housedata::getHousesByDistrict(QString dist)
{
    QVector<QVector<QString>> res;
    QString tmp;
    int prevind = 0;
    for (int i = 0; i < houseList.size(); i++)
    {
        if (houseList[i]->getDistrict() == dist)
        {
            QVector<QString> houseinfo;
            houseinfo.push_back(houseList[i]->getAdress());
             houseinfo.push_back(getTypeByNumber(houseList[i]->getType()));
            houseinfo.push_back(houseList[i]->getDistrict());
            houseinfo.push_back(tmp.setNum(houseList[i]->getCost()));
            houseList[i]->getState() ? houseinfo.push_back("Да") : houseinfo.push_back("Нет");
            houseinfo.push_back(houseList[i]->getClient()->getName());
            houseinfo.push_back(houseList[i]->getClient()->getPhone());
            res.push_back(houseinfo);
            prevind++;
        }
    }
    return res;
}

void housedata::saveInFile(QString flats, QString adresses)
{
    QFile file_flats(flats);
    if (file_flats.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream writeStream(&file_flats);
        writeStream.setCodec("UTF-8");
        for (int i = 0; i < houseList.size(); i++)
        {
            writeStream << houseList[i]->getAdress() + "\n" <<
                           houseList[i]->getType() << "\n" <<
                           houseList[i]->getDistrict() + "\n"<<
                           houseList[i]->getCost() << "\n" <<
                           houseList[i]->getState() << "\n" <<
                           houseList[i]->getClient()->getName() << "\n" <<
                           houseList[i]->getClient()->getPhone() << "\n";
        }
        file_flats.close();
    }

    QFile file_adrs(adresses);
    if (file_adrs.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream writeStream(&file_adrs);
        writeStream.setCodec("UTF-8");
        for (int i = 0; i < adressList.size(); i++)
            writeStream << adressList[i] << "\n";
        file_adrs.close();
    }
}

void housedata::loadFromFile(QString flats, QString adresses)
{
    QFile file_flats(flats);
    if (file_flats.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        if (houseList.size())
            houseList.clear();
        QString adress, district, tmp, name, phone;
        int type, cost, state;
        do
        {
            adress = file_flats.readLine().trimmed();
            if (adress == "")
                break;
            tmp = file_flats.readLine();
            type = tmp.toInt();
            district = file_flats.readLine().trimmed();
            tmp = file_flats.readLine();
            cost = tmp.toInt();
            tmp = file_flats.readLine();
            state = tmp.toInt();
            name = file_flats.readLine().trimmed();
            phone = file_flats.readLine().trimmed();
            house* h;
            housefactory* hf;
            h = hf->createHouse(adress, cost, type, district, state, new client(name, phone));
            addHouse(h);

        } while (!tmp.isNull());
        file_flats.close();
    }

    QFile file_adrs(adresses);
    if (file_adrs.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        if (adressList.size())
            adressList.clear();
        QString adress;
        do
        {
            adress = file_adrs.readLine().trimmed();
            if (adress == "")
                break;
            adressList.push_back(adress);
        } while (!adress.isNull());
        file_adrs.close();
    }
}

void housedata::addAdress(QString adress)
{
    adressList.push_back(adress);
}

QVector<QString> housedata::getAdresses()
{
    QVector<QString> res;
    for (auto adr : adressList)
        res.push_back(adr);
    return res;
}

void housedata::clearHouseList()
{
    if (houseList.size())
        houseList.clear();
}

void housedata::clearAdressList()
{
    if (adressList.size())
        adressList.clear();
}

bool housedata::deleteAdress(QString adress)
{
    int ind = adressList.indexOf(adress);
    if (ind == -1)
        return false;
    adressList.removeAt(ind);
    return true;
}

bool housedata::editAdress(QString oldAdr, QString newAdr)
{
    int ind = adressList.indexOf(oldAdr);
    if (ind == -1)
        return false;
    adressList.replace(ind, newAdr);
    return true;
}

void housedata::setData(housedata *data)
{
    adressList = data->adressList;
    houseList = data->houseList;
}

bool housedata::editHouse(int id, house *h)
{
    if (id < 0 || id > houseList.length())
        return false;
    houseList.replace(id, h);
    return true;
}

bool housedata::deleteHouse(int id)
{
    if (id < 0 || id > houseList.length())
        return false;
    houseList.removeAt(id);
    return true;
}
