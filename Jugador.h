#pragma once
#include <string>
#include "Persona.h"

using namespace std;

class Jugador: public Persona
{
	public:
		string Lugar;
		string Apodo;
		int Money;

	public:
		Jugador();
		Jugador(string, int, int, string, string, int);
		string getNombre();
		int getID();
		virtual ~Jugador();
		virtual string toString()const;
};