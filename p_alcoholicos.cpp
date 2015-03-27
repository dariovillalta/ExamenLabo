#include "p_alcoholicos.h"
#include <string>
#include <iostream>
#include <sstream>
#include "cliente.h"

p_alcoholicos::p_alcoholicos(double volumen,double peso,double precio, double tasa, Cliente miCliente):
    Productos(volumen, peso, precio, tasa, miCliente){
}

p_alcoholicos::~p_alcoholicos()
{

}
string p_alcoholicos::toString()const{
    stringstream ss;
           ss << "Productos Alcoholicos" << Productos::toString()<< " Impuesto: "<< getimpuesto();
           return ss.str();
}
double p_alcoholicos::getimpuesto()const{
    return (getprecio()+getvolumen())*gettasa();
}

