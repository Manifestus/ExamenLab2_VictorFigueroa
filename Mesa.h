#pragma once
#include <string>
#include "Repartidor.h"
#include "Jugador.h"
#include "Persona.h"


using namespace std;

class Mesa: public Repartidor,public Jugador
{
	private:
		int Numero;
		string Tipo;
		Persona* Dealer;
		Persona* Player;

	public:
		Mesa();
		Mesa(int, string, Persona*, Persona*);
		virtual ~Mesa();
		virtual string toString()const;
};