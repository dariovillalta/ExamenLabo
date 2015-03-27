#pragma once

#include <string>

using std::string;

class Cliente{
	string nombre;
public:
	Cliente(string);
    Cliente();
	~Cliente();

	string getNombre()const;
    string toString()const;

	void setNombre(string const);
};
