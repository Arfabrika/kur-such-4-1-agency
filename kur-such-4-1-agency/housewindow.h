#ifndef HOUSEWINDOW_H
#define HOUSEWINDOW_H

#include <QWidget>
#include <houseFacade.h>

namespace Ui {
class housewindow;
}

class housewindow : public QWidget
{
    Q_OBJECT
    housefacade* facade;
    QWidget *parent;

public:
    explicit housewindow(QWidget *parent = nullptr);
    housewindow(housedata* data, QWidget *parent = nullptr);
    ~housewindow();

signals:
    void sendData(housedata* data);

private slots:

    void on_deleteHouse_clicked();

    void on_deleteHouse2_clicked();

    void on_editHouse_clicked();

    void on_add_clicked();

    void updateAdresses();

    void on_addHouse_clicked();

private:
    Ui::housewindow *ui;
};

#endif // HOUSEWINDOW_H
