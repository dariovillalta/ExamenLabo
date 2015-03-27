#include "productos.h"
#include "deLujo.h"

#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::cout;
using std::endl;

ProductoDeLujo::ProductoDeLujo(double volumen, double peso, double precio, double tasa, Cliente cliente ): Productos(volumen, peso, precio, tasa, cliente){
	
}
ProductoDeLujo::~ProductoDeLujo(){
}
double ProductoDeLujo::getimpuesto()const{
	double impuesto; 
	impuesto = (this->peso * this->tasa) + (this->volumen * this->tasa);
	return impuesto;
}
string ProductoDeLujo::toString()const{
	stringstream ss;
    ss << "Prodeucto de Lujo: (" << Productos::toString() << " Impuesto: "<< getimpuesto();
	return ss.str();
}
