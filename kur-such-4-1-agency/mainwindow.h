#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <houseFacade.h>
#include <housewindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#define COLUMN_CNT 7

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_find_clicked();

    void on_getAllHouses_clicked();

    void on_saveFile_clicked();

    void on_loadFile_clicked();

    void on_find_dist_clicked();

    void on_add_adress_clicked();

    void on_show_adress_clicked();

    void on_loadFile_2_clicked();

    void on_saveFile_2_clicked();

    void on_clearHouses_clicked();

    void on_clearAdresses_clicked();

    void on_edit_adress_clicked();

    void on_add_adress_2_clicked();

    void on_save_edited_adress_clicked();

    void recieveData(housedata* data);

    void on_deleteHouse_clicked();

private:
    Ui::MainWindow *ui;
    housefacade* houseFacade;
    housewindow *hw;

};
#endif // MAINWINDOW_H
