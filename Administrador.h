#pragma once
#include <string>
#include "Persona.h"

using namespace std;

class Administrador: public Persona
{
	private:
		int Experiencia;
		string Rango;
		int Sueldo;

	public:
		Administrador();
		Administrador(string, int, int, int, string, int);
		virtual ~Administrador();
		virtual string toString()const;
};