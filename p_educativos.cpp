#include "p_educativos.h"
#include "cliente.h"

#include <iostream>
#include <sstream>

using namespace std;

p_educativos::p_educativos(double volumen ,double peso ,double precio,double tasa,Cliente miCliente): Productos( volumen,peso,precio,tasa,miCliente){

}

p_educativos::~p_educativos(){
}

string p_educativos::toString()const{
	stringstream ss;
    ss<<"producto educativo : "<<Productos::toString()<< " Impuesto: "<< getimpuesto();
	return ss.str();
}

double p_educativos::getimpuesto()const{
	double impuesto;
	impuesto=this->volumen*this->tasa;
	return impuesto;
}

