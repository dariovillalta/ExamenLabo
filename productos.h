#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include "cliente.h"


class Productos
{
    double volumen;
    double peso;
    cliente cliente;
    double precio;
    double tasa;

public:
    Productos(double,double,double,double,cliente);
    ~Productos();
    virtual string toString()const;
    virtual double getimpuesto()const=0;
    cliente getcliente()const;
    double getpeso()const;
    double getprecio()const;
    double getvolumen()const;
    double gettasa()const;

};

#endif // PRODUCTOS_H
