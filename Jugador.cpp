#include "Persona.h"
#include "Jugador.h"
#include <vector>
#include <string>
#include <sstream>

using namespace std;

Jugador::Jugador()
{
}

Jugador::Jugador(string Nombre, int Edad, int Identidad, string Lugar, string Apodo, int Money):Persona(Nombre, Edad, Identidad), Lugar(Lugar), Apodo(Apodo), Money(Money)
{
}

Jugador::~Jugador()
{
}

string Jugador::getNombre()
{
	return Nombre;
}

string Jugador::toString()const
{
	stringstream ss;
	ss << Persona::toString()<< ", Lugar: " << Lugar << ", Apodo: " << Apodo << ", Money" << Money;
	return ss.str();
}