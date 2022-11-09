#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    houseFacade = new housefacade();
    houseFacade->loadDataFromFile();
    housedata* data = houseFacade->getRawHouses();
    hw = new housewindow(data, this);
    //connect(ui->deleteHouse, SIGNAL(clicked()), hw, SLOT(show()));
    for (int i = 0; i < COLUMN_CNT; i++)
        ui->tableOut->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    ui->out_adress->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->label_14->hide();
    ui->new_adress_2->hide();
    ui->save_edited_adress->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_find_clicked()
{
    int type = ui->type_find->currentIndex();
    QVector<QVector<QString>> res = houseFacade->findHouses(type);
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
    QVector<QVector<QString>> res = houseFacade->getAllHouses();
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
    houseFacade->saveDataInFile();
}


void MainWindow::on_loadFile_clicked()
{
    houseFacade->loadDataFromFile();
}


void MainWindow::on_find_dist_clicked()
{
    QString district = ui->district_find->text();
    QVector<QVector<QString>> res = houseFacade->getHousesByDistrict(district);
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
    houseFacade->addAdress(adr);
    ui->new_adress->clear();
    ui->result_label->setText("Адрес добавлен");
}


void MainWindow::on_show_adress_clicked()
{
    QVector<QString> res = houseFacade->getAdresses();
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
    houseFacade->loadDataFromFile();
}


void MainWindow::on_saveFile_2_clicked()
{
    houseFacade->saveDataInFile();
}


void MainWindow::on_clearHouses_clicked()
{
    houseFacade->clearHouses();
}


void MainWindow::on_clearAdresses_clicked()
{
    houseFacade->clearAdresses();
}


void MainWindow::on_edit_adress_clicked()
{
    ui->result_label->hide();
    ui->label_14->show();
    ui->new_adress_2->show();
    ui->save_edited_adress->show();
}

void MainWindow::on_add_adress_2_clicked()
{
    QString adr = ui->new_adress->text();
    if (houseFacade->deleteAdress(adr))
    {
        ui->result_label->setText("Адрес " + adr + " удален");
        on_show_adress_clicked();
    }
    else
        ui->result_label->setText("Ошибка при удалении адреса " + adr);
}

void MainWindow::on_save_edited_adress_clicked()
{
    QString adr = ui->new_adress->text();
    QString adrNew = ui->new_adress_2->text();
    ui->label_14->hide();
    ui->new_adress_2->hide();
    ui->save_edited_adress->hide();
    ui->result_label->show();
    if (houseFacade->editAdress(adr, adrNew))
    {
        ui->result_label->setText("Адрес " + adr + " изменен на " + adrNew);
        on_show_adress_clicked();
    }
    else
        ui->result_label->setText("Ошибка при изменении адреса " + adr);
}

void MainWindow::recieveData(housedata* data)
{
    houseFacade->setRowHouses(data);
}

void MainWindow::on_deleteHouse_clicked()
{
    housedata* data = houseFacade->getRawHouses();
    hw = new housewindow(data, this);
    hw->show();
}
