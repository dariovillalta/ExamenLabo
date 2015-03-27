#include "p_alcoholicos.h"
#include <string>
#include <iostream>
#include <sstream>

p_alcoholicos::p_alcoholicos(double volumen,double peso,double precio, double tasa, cliente miCliente)
{
    this->volumen=volumen;
    this->peso=peso;
    this->precio=precio;
    this->tasa=tasa;
    this->cliente;
}

p_alcoholicos::~p_alcoholicos()
{

}
string toString()const{
    stringstream ss;
           ss << productos::toString()<< " Impuesto: "<< getimpuesto();
           return ss.str();
}
double getimpuesto()const{
    return (getprecio()+getvolumen)*gettasa();
}

