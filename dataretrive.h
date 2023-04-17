#ifndef DATARETRIVE_H
#define DATARETRIVE_H

#include <QDialog>

namespace Ui {
class dataretrive;
}

class dataretrive : public QDialog
{
    Q_OBJECT

public:
    explicit dataretrive(QWidget *parent = nullptr);
    ~dataretrive();

private:
    Ui::dataretrive *ui;
};

#endif // DATARETRIVE_H
