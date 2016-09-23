#pragma once
#include <string>
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

class Mesa: public Repartidor,public Jugador
{
	private:
		int Numero;
		string Tipo;
		Repartidor Dealer;
		Jugador Player;

	public:
		Mesa();
		Mesa(int, string, Repartidor, Jugador);
		virtual ~Mesa();
		virtual string toString()const;
};