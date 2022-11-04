#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class client : public QObject
{
    Q_OBJECT
    QString name, phone;
public:
    client();
    client( QString name, QString phone);
    QString getName();
    QString getPhone();
    bool operator=(client &p1);
    ~client();
};

#endif // CLIENT_H
