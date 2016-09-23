#include "Persona.h"
#include "Repartidor.h"
#include "Baraja.h"
#include <vector>
#include <string>
#include <sstream>

using namespace std;

Repartidor::Repartidor()
{
}

Repartidor::Repartidor(string Nombre, int Edad, int Identidad, string Dificultad, int Dinero, Baraja Deck):Persona(Nombre, Edad, Identidad), Dificultad(Dificultad), Dinero(Dinero), Deck(Deck)
{
}

Repartidor::~Repartidor()
{
}

string Repartidor::getNombre()
{
	return Nombre;
}

string Repartidor::toString()const
{
	stringstream ss;
	ss << Persona::toString() << ", Dificultad: " << Dificultad << ", Dinero: " << Dinero << ", Deck: " << Baraja::toString();
	return ss.str();
}