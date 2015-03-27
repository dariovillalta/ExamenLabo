#include "productos.h"
#include "cliente.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Productos::Productos(double volumen,double peso,double precio, double tasa, Cliente cliente)

{
    this->volumen=volumen;
    this->peso=peso;
    this->precio=precio;
    this->tasa=tasa;
    this->cliente = cliente;

}

Productos::~Productos()
{

}
string Productos::toString()const{
     stringstream ss;
            ss << "Cliente: " <<this->getcliente().toString() <<  " ,volumen: " << volumen <<" Precio "<<precio<< " Peso: " <<peso<< " Tasa: "<< tasa;
            return ss.str();
}

Cliente Productos::getcliente()const{
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
string Productos::getNombre()const{
    return this->cliente.getNombre();
}
