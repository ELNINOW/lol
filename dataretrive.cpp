#include "dataretrive.h"
#include "ui_dataretrive.h"

dataretrive::dataretrive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dataretrive)
{
    ui->setupUi(this);
}

dataretrive::~dataretrive()
{
    delete ui;
}
