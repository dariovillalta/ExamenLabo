#ifndef P_EDUCATIVOS
#define P_EDUCATIVOS

#include "productos.h"//clase padre
#include "cliente.h"

class p_educativos: public Productos{
public:

        p_educativos(double,double,double,double,Cliente);

	~p_educativos();

	virtual string toString()const;

        virtual double getimpuesto()const;
};

#endif
