/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *loadFile;
    QLabel *label_2;
    QPushButton *saveFile;
    QPushButton *add;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *type;
    QLineEdit *district;
    QLineEdit *cost;
    QLabel *label_3;
    QGroupBox *is_bought;
    QRadioButton *yes_bought;
    QRadioButton *no_bought;
    QLabel *label_7;
    QLineEdit *client_name;
    QLabel *label_8;
    QLineEdit *client_phone;
    QLabel *label;
    QComboBox *adressList;
    QWidget *tab_2;
    QLabel *label_6;
    QPushButton *find_dist;
    QPushButton *find;
    QPushButton *getAllHouses;
    QComboBox *type_find;
    QLineEdit *district_find;
    QTableWidget *tableOut;
    QPushButton *clearHouses;
    QWidget *tab_3;
    QLineEdit *new_adress;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *add_adress;
    QPushButton *loadFile_2;
    QPushButton *saveFile_2;
    QTableWidget *out_adress;
    QPushButton *show_adress;
    QLabel *label_13;
    QPushButton *clearAdresses;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1260, 761);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1241, 731));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        loadFile = new QPushButton(tab);
        loadFile->setObjectName(QString::fromUtf8("loadFile"));
        loadFile->setGeometry(QRect(280, 480, 201, 61));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 71, 31));
        saveFile = new QPushButton(tab);
        saveFile->setObjectName(QString::fromUtf8("saveFile"));
        saveFile->setGeometry(QRect(30, 480, 201, 61));
        add = new QPushButton(tab);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(190, 390, 151, 61));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 101, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 170, 71, 31));
        type = new QComboBox(tab);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(130, 91, 341, 31));
        district = new QLineEdit(tab);
        district->setObjectName(QString::fromUtf8("district"));
        district->setGeometry(QRect(130, 170, 341, 31));
        cost = new QLineEdit(tab);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(130, 130, 341, 31));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 90, 71, 31));
        is_bought = new QGroupBox(tab);
        is_bought->setObjectName(QString::fromUtf8("is_bought"));
        is_bought->setGeometry(QRect(130, 210, 341, 71));
        yes_bought = new QRadioButton(is_bought);
        yes_bought->setObjectName(QString::fromUtf8("yes_bought"));
        yes_bought->setGeometry(QRect(20, 40, 89, 20));
        no_bought = new QRadioButton(is_bought);
        no_bought->setObjectName(QString::fromUtf8("no_bought"));
        no_bought->setGeometry(QRect(250, 40, 89, 20));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 290, 121, 31));
        client_name = new QLineEdit(tab);
        client_name->setObjectName(QString::fromUtf8("client_name"));
        client_name->setGeometry(QRect(130, 290, 341, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 340, 121, 31));
        client_phone = new QLineEdit(tab);
        client_phone->setObjectName(QString::fromUtf8("client_phone"));
        client_phone->setGeometry(QRect(130, 340, 341, 31));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 331, 21));
        adressList = new QComboBox(tab);
        adressList->setObjectName(QString::fromUtf8("adressList"));
        adressList->setGeometry(QRect(130, 50, 341, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 0, 181, 21));
        find_dist = new QPushButton(tab_2);
        find_dist->setObjectName(QString::fromUtf8("find_dist"));
        find_dist->setGeometry(QRect(1060, 200, 151, 61));
        find = new QPushButton(tab_2);
        find->setObjectName(QString::fromUtf8("find"));
        find->setGeometry(QRect(1060, 70, 151, 61));
        getAllHouses = new QPushButton(tab_2);
        getAllHouses->setObjectName(QString::fromUtf8("getAllHouses"));
        getAllHouses->setGeometry(QRect(1060, 290, 151, 61));
        type_find = new QComboBox(tab_2);
        type_find->addItem(QString());
        type_find->addItem(QString());
        type_find->addItem(QString());
        type_find->addItem(QString());
        type_find->addItem(QString());
        type_find->setObjectName(QString::fromUtf8("type_find"));
        type_find->setGeometry(QRect(1060, 30, 151, 31));
        district_find = new QLineEdit(tab_2);
        district_find->setObjectName(QString::fromUtf8("district_find"));
        district_find->setGeometry(QRect(1060, 160, 151, 31));
        tableOut = new QTableWidget(tab_2);
        if (tableOut->columnCount() < 7)
            tableOut->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableOut->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableOut->setObjectName(QString::fromUtf8("tableOut"));
        tableOut->setGeometry(QRect(10, 30, 1041, 631));
        tableOut->setRowCount(0);
        tableOut->setColumnCount(7);
        tableOut->horizontalHeader()->setVisible(false);
        tableOut->horizontalHeader()->setCascadingSectionResizes(false);
        tableOut->horizontalHeader()->setMinimumSectionSize(65);
        tableOut->horizontalHeader()->setHighlightSections(true);
        tableOut->horizontalHeader()->setStretchLastSection(false);
        tableOut->verticalHeader()->setMinimumSectionSize(53);
        clearHouses = new QPushButton(tab_2);
        clearHouses->setObjectName(QString::fromUtf8("clearHouses"));
        clearHouses->setGeometry(QRect(1060, 380, 151, 61));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        new_adress = new QLineEdit(tab_3);
        new_adress->setObjectName(QString::fromUtf8("new_adress"));
        new_adress->setGeometry(QRect(100, 50, 351, 31));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 50, 71, 31));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 10, 281, 21));
        add_adress = new QPushButton(tab_3);
        add_adress->setObjectName(QString::fromUtf8("add_adress"));
        add_adress->setGeometry(QRect(70, 90, 151, 61));
        loadFile_2 = new QPushButton(tab_3);
        loadFile_2->setObjectName(QString::fromUtf8("loadFile_2"));
        loadFile_2->setGeometry(QRect(250, 170, 201, 61));
        saveFile_2 = new QPushButton(tab_3);
        saveFile_2->setObjectName(QString::fromUtf8("saveFile_2"));
        saveFile_2->setGeometry(QRect(20, 170, 201, 61));
        out_adress = new QTableWidget(tab_3);
        if (out_adress->columnCount() < 1)
            out_adress->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        out_adress->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        out_adress->setObjectName(QString::fromUtf8("out_adress"));
        out_adress->setGeometry(QRect(530, 50, 611, 521));
        out_adress->setColumnCount(1);
        show_adress = new QPushButton(tab_3);
        show_adress->setObjectName(QString::fromUtf8("show_adress"));
        show_adress->setGeometry(QRect(250, 90, 151, 61));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(530, 10, 281, 21));
        clearAdresses = new QPushButton(tab_3);
        clearAdresses->setObjectName(QString::fromUtf8("clearAdresses"));
        clearAdresses->setGeometry(QRect(70, 250, 151, 61));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1260, 21));
        menubar->setAutoFillBackground(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setProperty("background", QVariant(QCoreApplication::translate("MainWindow", "transparent", nullptr)));
        loadFile->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214\n"
"\320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        saveFile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214\n"
"\320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275", nullptr));
        type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\270\321\217", nullptr));
        type->setItemText(1, QCoreApplication::translate("MainWindow", "1-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type->setItemText(2, QCoreApplication::translate("MainWindow", "2-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type->setItemText(3, QCoreApplication::translate("MainWindow", "3-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type->setItemText(4, QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\320\265\320\265 3 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));

        district->setText(QString());
        cost->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
        is_bought->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260 \320\272\321\203\320\277\320\273\320\265\320\275\320\260", nullptr));
        yes_bought->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        no_bought->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        client_name->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273. \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        client_phone->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        find_dist->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\321\203\n"
"\320\277\320\276 \321\200\320\260\320\271\320\276\320\275\321\203", nullptr));
        find->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276\n"
"\321\202\320\270\320\277\321\203 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\321\213", nullptr));
        getAllHouses->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272\n"
"\320\262\321\201\320\265\321\205 \320\272\320\262\320\260\321\200\321\202\320\270\321\200", nullptr));
        type_find->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\270\321\217", nullptr));
        type_find->setItemText(1, QCoreApplication::translate("MainWindow", "1-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type_find->setItemText(2, QCoreApplication::translate("MainWindow", "2-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type_find->setItemText(3, QCoreApplication::translate("MainWindow", "3-\320\272\320\276\320\274\320\275\320\260\321\202\320\275\320\260\321\217", nullptr));
        type_find->setItemText(4, QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\320\265\320\265 3 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));

        district_find->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableOut->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableOut->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableOut->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableOut->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableOut->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\273\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableOut->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableOut->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        clearHouses->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \n"
"\321\201\320\277\320\270\321\201\320\276\320\272 \320\272\320\262\320\260\321\200\321\202\320\270\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        new_adress->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\264\321\200\320\265\321\201 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        add_adress->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        loadFile_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214\n"
"\320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        saveFile_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214\n"
"\320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = out_adress->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201\320\260", nullptr));
        show_adress->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\260\320\264\321\200\320\265\321\201\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\260\320\264\321\200\320\265\321\201\320\276\320\262", nullptr));
        clearAdresses->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214\n"
"\321\201\320\277\320\270\321\201\320\276\320\272 \320\260\320\264\321\200\320\265\321\201\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
