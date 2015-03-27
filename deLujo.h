#pragma once
#include "productos.h"

class ProductoDeLujo: public Productos{
public:
	ProductoDeLujo(double, double, double, double, Cliente);
	~ProductoDeLujo();
    virtual double getimpuesto()const;
	virtual string toString()const;
};
