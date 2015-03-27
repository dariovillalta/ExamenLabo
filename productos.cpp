#include "productos.h"
#include <string>
#include <iostream>
#include <sstream>

Productos::Productos(double volumen,double peso,double precio, double tasa, cliente cliente)

{
    this->volumen=volumen;
    this->peso=peso;
    this->precio=precio;
    this->tasa=tasa;
    this->cliente;

}

Productos::~Productos()
{

}
string Productos::toString()const{
     stringstream ss;
            ss << "Cliente: " <<cliente <<  " ,volumen: " << volumen <<" Precio "<<precio<< " Peso: " <<peso<< " Tasa: "<< tasa;
            return ss.str();
}

cliente Productos::getcliente()const{
    return cliente;
}
double Productos::getpeso()const{
    return peso;
}
double Productos::getprecio()const{
    return precio;
}
double Productos::getvolumen()const{
    return volumen;
}
double Productos::gettasa()const{
    return tasa;
}
