#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include "cliente.h"


class Productos
{
protected:
    double volumen;
    double peso;
    Cliente cliente;
    double precio;
    double tasa;

public:
    Productos(double,double,double,double,Cliente);
    ~Productos();
    virtual string toString()const;
    virtual double getimpuesto()const=0;
    Cliente getcliente()const;
    string getNombre()const;
    double getpeso()const;
    double getprecio()const;
    double getvolumen()const;
    double gettasa()const;

};

#endif // PRODUCTOS_H
