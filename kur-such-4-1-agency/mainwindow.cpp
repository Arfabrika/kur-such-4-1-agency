#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    houseFacade.loadDataFromFile();
    updateAdresses();
    ui->cost->setText("3000000");
    ui->district->setText("Калининский район");
    ui->district_find->setText("Калининский район");
    ui->yes_bought->setChecked(true);
    ui->client_name->setText("Иванов Виталий Олегович");
    ui->client_phone->setText("+79219876543");
    for (int i = 0; i < COLUMN_CNT; i++)
        ui->tableOut->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    ui->out_adress->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateAdresses()
{
    QVector<QString> res = houseFacade.getAdresses();
    if (!res.size())
        ui->adressList->setEnabled(false);
   else
    {
        ui->adressList->clear();
        for (int i = 0; i < res.size(); i++)
           ui->adressList->addItem(res[i], i);
    }
}

void MainWindow::on_add_clicked()
{
    QString adress = ui->adressList->currentText(),
            district = ui->district->text(),
            fio = ui->client_name->text(),
            phone = ui->client_phone->text();
    int cost = ui->cost->text().toInt(),
        type = ui->type->currentIndex(),
        state;
    if (ui->yes_bought->isChecked())
        state = 1;
    else
    {
        state = 0;
        fio = "-";
        phone = "-";
    }
    client* cl = new client(fio, phone);
    //house* h = new house(adress, cost, type, district, state, cl);
    houseFacade.addHouse(adress, cost, type, district, state, cl);
    ui->cost->clear();
    ui->district->clear();
    ui->client_name->clear();
    ui->client_phone->clear();
}


void MainWindow::on_find_clicked()
{
    int type = ui->type_find->currentIndex();
    QVector<QVector<QString>> res = houseFacade.findHouses(type);
    if (!res.size())
    {
        ui->tableOut->setRowCount(1);
        ui->tableOut->setItem(0,0, new QTableWidgetItem("Ничего не найдено"));
    }
    else
    {
        ui->tableOut->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
            for (int j = 0; j < COLUMN_CNT; j++)
                ui->tableOut->setItem(i, j, new QTableWidgetItem(res[i][j]));
    }
}

void MainWindow::on_getAllHouses_clicked()
{
    QVector<QVector<QString>> res = houseFacade.getAllHouses();
    if (!res.size())
    {
        ui->tableOut->clearContents();
        ui->tableOut->setRowCount(1);
        ui->tableOut->setItem(0,0, new QTableWidgetItem("Ничего не найдено"));
    }
    else
    {
        ui->tableOut->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
            for (int j = 0; j < COLUMN_CNT; j++)
                ui->tableOut->setItem(i, j, new QTableWidgetItem(res[i][j]));
    }
}


void MainWindow::on_saveFile_clicked()
{
    houseFacade.saveDataInFile();
}


void MainWindow::on_loadFile_clicked()
{
    houseFacade.loadDataFromFile();
}


void MainWindow::on_find_dist_clicked()
{
    QString district = ui->district_find->text();
    QVector<QVector<QString>> res = houseFacade.getHousesByDistrict(district);
    if (!res.size())
    {
        ui->tableOut->clearContents();
        ui->tableOut->setRowCount(1);
        ui->tableOut->setItem(0,0, new QTableWidgetItem("Ничего не найдено"));
    }
    else
    {
        ui->tableOut->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
            for (int j = 0; j < COLUMN_CNT; j++)
                ui->tableOut->setItem(i, j, new QTableWidgetItem(res[i][j]));
    }
}


void MainWindow::on_add_adress_clicked()
{
    QString adr = ui->new_adress->text();
    houseFacade.addAdress(adr);
    ui->new_adress->clear();
    updateAdresses();
}


void MainWindow::on_show_adress_clicked()
{
    QVector<QString> res = houseFacade.getAdresses();
    if (!res.size())
    {
        ui->out_adress->clearContents();
        ui->out_adress->setRowCount(1);
        ui->out_adress->setItem(0,0, new QTableWidgetItem("Ничего не найдено"));
    }
    else
    {
        ui->out_adress->setRowCount(res.size());
        for (int i = 0; i < res.size(); i++)
           ui->out_adress->setItem(i, 0, new QTableWidgetItem(res[i]));
    }
}


void MainWindow::on_loadFile_2_clicked()
{
    houseFacade.loadDataFromFile();
}


void MainWindow::on_saveFile_2_clicked()
{
    houseFacade.saveDataInFile();
}


void MainWindow::on_clearHouses_clicked()
{
    houseFacade.clearHouses();
}


void MainWindow::on_clearAdresses_clicked()
{
    houseFacade.clearAdresses();
}

