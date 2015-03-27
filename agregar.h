#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>

namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(QWidget *parent = 0);
    ~agregar();

private:
    Ui::agregar *ui;
};

#endif // AGREGAR_H
