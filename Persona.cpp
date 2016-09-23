#include "Persona.h"
#include <string>
#include <sstream>

using namespace std;

Persona::Persona()
{
}

Persona::Persona(string Nombre, int Edad, int Identidad): Nombre(Nombre), Edad(Edad), Identidad(Identidad)
{
}

string Persona::toString()const
{
	stringstream ss;
	ss << "Persona: Nombre: " << Nombre << ", Edad: " << Edad << ", Identidad: " << Identidad;
	return ss.str();
}

Persona::~Persona()
{
}
