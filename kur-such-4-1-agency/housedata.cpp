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

QVector<QVector<QString>> housedata::getAllHouses()
{
    QVector<QVector<QString>> res;
    QString tmp;
    for (int i = 0; i < houseList.size(); i++)
    {
        QVector<QString> houseinfo;
        houseinfo.push_back(houseList[i]->getAdress());
        switch (houseList[i]->getType())
        {
        case 0:
            houseinfo.push_back("Студия");
            break;
        case 1:
            houseinfo.push_back("Одна комната");
            break;
        case 2:
            houseinfo.push_back("Две комнаты");
            break;
        case 3:
            houseinfo.push_back("Три комнаты");
            break;
        case 4:
            houseinfo.push_back("Более трех комнат");
            break;
        }
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
            switch (houseList[i]->getType())
            {
            case 0:
                houseinfo.push_back("Студия");
                break;
            case 1:
                houseinfo.push_back("Одна комната");
                break;
            case 2:
                houseinfo.push_back("Две комнаты");
                break;
            case 3:
                houseinfo.push_back("Три комнаты");
                break;
            case 4:
                houseinfo.push_back("Более трех комнат");
                break;
            }
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
            switch (houseList[i]->getType())
            {
            case 0:
                houseinfo.push_back("Студия");
                break;
            case 1:
                houseinfo.push_back("Одна комната");
                break;
            case 2:
                houseinfo.push_back("Две комнаты");
                break;
            case 3:
                houseinfo.push_back("Три комнаты");
                break;
            case 4:
                houseinfo.push_back("Более трех комнат");
                break;
            }
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
            house* h;// = new house(adress, cost, type, district, state, new client(name, phone));
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
