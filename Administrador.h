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
		string getNombre();
		int getID();
		virtual ~Administrador();
		virtual string toString()const;
};