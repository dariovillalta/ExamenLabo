#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <vector>
#include "productos.h"

#include <QDialog>

#include <iostream>
using namespace std;

namespace Ui {
class Historial;
}

class Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Historial(QWidget *parent = 0, vector<Productos*>* =0);
    ~Historial();

private:
    Ui::Historial *ui;
    void cargar();
    vector<Productos*>* productos;
};

#endif // HISTORIAL_H
