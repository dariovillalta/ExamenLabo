#ifndef P_ALCOHOLICOS_H
#define P_ALCOHOLICOS_H
#include "cliente.h"
using namespace std;


class p_alcoholicos : public productos
{
public:
    p_alcoholicos(double, double, double,double, cliente);
    ~p_alcoholicos();
    virtual string toString()const;
    virtual double getimpuesto()const;
};

#endif // P_ALCOHOLICOS_H
