#include "client.h"

client::client()
{

}

client::~client() {}

client::client( QString name, QString phone)
{
    this->name = name;
    this->phone = phone;
}

QString client::getName()
{
    return name;
}

QString client::getPhone()
{
    return phone;
}

bool client::operator=(client &p1)
{
    return (this->name == p1.name) && (this->phone == p1.phone);
}
