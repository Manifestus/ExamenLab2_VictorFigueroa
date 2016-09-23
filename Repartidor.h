#pragma once
#include <string>
#include "Persona.h"
#include <vector>
#include "Baraja.h"

using namespace std;

class Repartidor: public Persona, public Baraja
{
	private:
		string Dificultad;
		int Dinero;
		Baraja Deck;

	public:
		Repartidor();
		Repartidor(string, int, int, string, int, Baraja);
		string getNombre();
		virtual ~Repartidor();
		virtual string toString()const;
};