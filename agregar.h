#ifndef AGREGAR_H
#define AGREGAR_H

#include "productos.h"
#include "cliente.h"
#include <QDialog>
#include <vector>

using namespace std;

namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(vector<Productos*>* =0, vector<Cliente*>* =0, QWidget *parent = 0);
    ~agregar();
    void agregarp(Productos*);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::agregar *ui;
    vector<Productos*>* productos;
    vector<Cliente*>* clientes;
    void cargar();
    void guardar();

};

#endif // AGREGAR_H
