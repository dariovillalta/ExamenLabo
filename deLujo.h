#pragma once
#include "productos.h"

class ProductoDeLujo: Public Productos{
public:
	ProductoDeLujo(double, double, double, double, Cliente);
	~ProductoDeLujo();
	virtual double cobrarImpuesto();
	virtual string toString()const;
};