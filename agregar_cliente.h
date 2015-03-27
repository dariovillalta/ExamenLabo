#ifndef AGREGAR_CLIENTE_H
#define AGREGAR_CLIENTE_H

#include <QDialog>

namespace Ui {
class agregar_cliente;
}

class agregar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_cliente(QWidget *parent = 0);
    ~agregar_cliente();

private:
    Ui::agregar_cliente *ui;
};

#endif // AGREGAR_CLIENTE_H
