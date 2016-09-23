#pragma once
#include <string>
#include "Carta.h"
#include <vector>

using namespace std;

class Baraja: public Carta
{
	private:
		vector<Carta*> Cartas;

	public:
		Baraja();
		~Baraja();
		string getBaraja();
		virtual string toString()const;
};