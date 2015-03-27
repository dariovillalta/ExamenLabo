#include "cliente.h"

#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::cout;
using std::endl;

Cliente::Cliente(string nombre): nombre(nombre){
}
Cliente::Cliente(){
}
Cliente::~Cliente(){
}
string Cliente::getNombre()const{
	return this->nombre;
}
void Cliente::setNombre(string nombre){
	this->nombre = nombre;
}
string Cliente::toString()const{
	stringstream ss;
    ss << "Nombre: " << this->nombre;
	return ss.str();
}
