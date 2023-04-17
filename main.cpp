#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "QLineEdit"
#include <QDebug>
#include <dataentry.h>


void addValues(int id,QString Name,int Age,QString Qualifications,int Contact );

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//       db.setHostName("bigblue");
//       db.setDatabaseName("flightdb");
//       db.setUserName("acarlson");
//       db.setPassword("1uTbSbAs");
//       bool ok = db.open();

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Kalana/Desktop/database1");


    if (!db.open()) {
        qDebug() << "Could not open connection to database";
    }

    addValues(int id,QString Name,int Age,QString Qualifications,int Contact);

    QString query = "CREATE TABLE testtable ("
            "ID integer,"
            "Name VARCHAR(20),"
            "Age integer,"
            "Qualifications VARCHAR(50),"
            "Contact integer);";




    QSqlQuery qry;

    if (!qry.exec(query))
    {
        qDebug()<< "Error creating table";

    }

    qDebug()<<"end";



    return a.exec();
}
