#include "Persona.h"
#include "Administrador.h"
#include <string>
#include <sstream>

using namespace std;

Administrador::Administrador()
{
}

Administrador::Administrador(string Nombre, int Edad, int Identidad, int Experiencia, string Rango, int Sueldo): Persona(Nombre, Edad, Identidad), Experiencia(Experiencia), Rango(Rango), Sueldo(Sueldo)
{
}

Administrador::~Administrador()
{
}

string Administrador::getNombre()
{
	return Nombre;
}

int Administrador::getID()
{
	return Identidad;
}

string Administrador::toString()const
{
	stringstream ss;
	ss << Persona::toString() << ", Experiencia: " << Experiencia << ", Rango: " << Rango << ", Sueldo" << Sueldo;
	return ss.str();
}