#ifndef AGREGAR_CLIENTE_H
#define AGREGAR_CLIENTE_H

#include <QDialog>
#include <vector>
#include "cliente.h"

using namespace std;
namespace Ui {
class agregar_cliente;
}

class agregar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_cliente(QWidget *parent = 0, vector<Cliente*>* =0);
    ~agregar_cliente();

private slots:
    void on_pushButton_clicked();

private:
    Ui::agregar_cliente *ui;
    vector<Cliente*>* clientes;
};

#endif // AGREGAR_CLIENTE_H
