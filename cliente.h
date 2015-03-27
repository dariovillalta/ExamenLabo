#pragma once

#include <string>

using std::string;

class Cliente{
	string nombre;
public:
	Cliente(string);
	~Cliente();

	string getNombre()const;
	string toString();

	void setNombre(string const);
};