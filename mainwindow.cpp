#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dataentry.h"
#include "dataretrive.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("employerinfo");


    if(db.open()){

        QMessageBox::information(this,"Connection","Database Connected successfully");

    }

        else {
            QMessageBox::information(this,"Disconnection","Database disconnected");


        }


}


void MainWindow::on_pushButton_2_clicked()
{
    DataEntry dataentry;
    dataentry.setModal(true);
    dataentry.exec();

}


void MainWindow::on_pushButton_3_clicked()
{
  dataretrive retrive;
  retrive.setModal(true);
  retrive.exec();


}

