#ifndef DATAENTRY_H
#define DATAENTRY_H

#include <QDialog>

namespace Ui {
class DataEntry;
}

class DataEntry : public QDialog
{
    Q_OBJECT

public:
    explicit DataEntry(QWidget *parent = nullptr);
    ~DataEntry();

private slots:
    void on_pushButton_3_clicked();

    void on_btnSave_clicked();

private:
    Ui::DataEntry *ui;
};

#endif // DATAENTRY_H
