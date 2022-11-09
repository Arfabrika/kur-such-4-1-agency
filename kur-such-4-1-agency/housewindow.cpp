#include "housewindow.h"
#include "ui_housewindow.h"

housewindow::housewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::housewindow)
{
    ui->setupUi(this);
    facade = new housefacade;
}

housewindow::housewindow(housedata* data, QWidget *parent) :
    ui(new Ui::housewindow)
{
    this->parent = parent;
    ui->setupUi(this);
    facade = new housefacade;
    facade->setRowHouses(data);
    ui->result_label->hide();
    ui->add->hide();
    ui->cost->hide();
    ui->type->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->district->hide();
    ui->is_bought->hide();
    ui->client_phone->hide();
    ui->client_name->hide();
    ui->type->hide();
    ui->adressList->hide();
    ui->label->hide();
    ui->label_6->hide();
    ui->house_number->hide();
    ui->deleteHouse2->hide();
    connect(this, SIGNAL(sendData(housedata*)), parent, SLOT(recieveData(housedata*)));
    setAttribute(Qt::WA_DeleteOnClose);
}

housewindow::~housewindow()
{
    delete ui;
}

void housewindow::on_deleteHouse_clicked()
{
    ui->label->show();
    ui->house_number->show();
    ui->deleteHouse2->show();
    ui->result_label->clear();
    ui->add->hide();
    ui->cost->hide();
    ui->type->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->district->hide();
    ui->is_bought->hide();
    ui->client_phone->hide();
    ui->client_name->hide();
    ui->type->hide();
    ui->adressList->hide();
    ui->label_6->hide();
}

void housewindow::on_deleteHouse2_clicked()
{
    ui->result_label->show();
    int id = ui->house_number->text().toInt() - 1;
    if (facade->deleteHouse(id))
    {
        QString num;
        num.setNum(id + 1);
        ui->result_label->setText("Квартира под номером " + num + " удалена");
    }
    else
        ui->result_label->setText("Ошибка при удалении квартиры");
    emit sendData(facade->getRawHouses());
}

void housewindow::on_editHouse_clicked()
{
    ui->result_label->clear();
    ui->result_label->hide();
    ui->add->show();
    ui->cost->show();
    ui->type->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->district->show();
    ui->is_bought->show();
    ui->client_phone->show();
    ui->client_name->show();
    ui->type->show();
    ui->adressList->show();
    ui->label->show();
    ui->label_6->show();
    ui->house_number->show();
    ui->deleteHouse2->hide();
    updateAdresses();
    ui->house_number->clear();
    ui->cost->setText("3000000");
    ui->district->setText("Калининский район");
    ui->yes_bought_3->setChecked(true);
    ui->client_name->setText("Иванов Виталий Олегович");
    ui->client_phone->setText("+79219876543");
}

void housewindow::on_add_clicked()
{
    ui->result_label->show();
    if (ui->house_number->text() == "")
    {
        int state;
        QString fio = ui->client_name->text(),
        phone = ui->client_phone->text();
        if (ui->yes_bought_3->isChecked())
            state = 1;
        else
        {
            state = 0;
            fio = "-";
            phone = "-";
        }

        client* cl = new client(fio, phone);
        facade->addHouse(ui->adressList->currentText(), ui->cost->text().toInt(),
                         ui->type->currentIndex(), ui->district->text(), state, cl);
        ui->result_label->setText("Квартира успешно добавлена");
    }
    else
    {
       int id = ui->house_number->text().toInt() - 1, state;
       QString fio = ui->client_name->text(),
       phone = ui->client_phone->text();
       if (ui->yes_bought_3->isChecked())
           state = 1;
       else
       {
           state = 0;
           fio = "-";
           phone = "-";
       }
       if (facade->editHouse(id, ui->adressList->currentText(), ui->cost->text().toInt(),
                             ui->type->currentIndex(), ui->district->text(), state, fio, phone))
         ui->result_label->setText("Данные о квартире успешно изменены");
       else
         ui->result_label->setText("Ошибка при изменении данных");
    }
    emit sendData(facade->getRawHouses());
}

void housewindow::updateAdresses()
{
    QVector<QString> res = facade->getAdresses();
    if (!res.size())
        ui->adressList->setEnabled(false);
   else
    {
        ui->adressList->clear();
        for (int i = 0; i < res.size(); i++)
           ui->adressList->addItem(res[i], i);
    }
}

void housewindow::on_addHouse_clicked()
{
    ui->result_label->clear();
    ui->result_label->hide();
    ui->label->hide();
    ui->house_number->hide();
    ui->deleteHouse2->hide();
    ui->result_label->clear();
    ui->result_label->hide();
    ui->add->show();
    ui->cost->show();
    ui->type->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->district->show();
    ui->is_bought->show();
    ui->client_phone->show();
    ui->client_name->show();
    ui->type->show();
    ui->adressList->show();
    ui->label_6->show();
    updateAdresses();
    ui->house_number->clear();
    ui->cost->setText("3000000");
    ui->district->setText("Калининский район");
    ui->yes_bought_3->setChecked(true);
    ui->client_name->setText("Иванов Виталий Олегович");
    ui->client_phone->setText("+79219876543");
}
