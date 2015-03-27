#ifndef P_ALCOHOLICOS_H
#define P_ALCOHOLICOS_H
#include "cliente.h"
#include "productos.h"
using namespace std;


class p_alcoholicos : public Productos
{
public:
    p_alcoholicos(double, double, double,double, Cliente);
    ~p_alcoholicos();
    virtual string toString()const;
    virtual double getimpuesto()const;
};

#endif // P_ALCOHOLICOS_H
