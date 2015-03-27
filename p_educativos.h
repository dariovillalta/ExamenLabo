#ifndef P_EDUCATIVOS
#define P_EDUCATIVOS

#include "productos.h"//clase padre

class p_educativos: public Productos{
public:

	p_educativos(double,double,double,double,cliente);

	~p_educativos();

	virtual string toString()const;

	virtual double cobrarImpuesto();
};
