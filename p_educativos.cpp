#include "p_educativos"
#include "cliente.h"

#include <iostream>
#include <sstream>

using namespace std;

p_educativos(double volumen ,double peso ,double precio,double tasa,Cliente miCliente): Productos( volumen,peso,precio,tasa,miCliente){

}

p_educativos::~p_educativos(){
}

string p_educativos::toString()const{
	stringstream ss;
	ss<<"producto educativo : "<<Productos::toString;
	return ss.str();
}

double p_educativos::cobrarImpuesto(){
	double impuesto;
	impuesto=this->volumen*this->tasa;
	return impuesto;
}

