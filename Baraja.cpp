#include "Baraja.h"
#include "Carta.h"
#include <vector>
#include <string>
#include <sstream>

using namespace std;


Baraja::Baraja()
{
	
	for (int i = 1; i < 13; ++i)
	{
		Cartas.push_back(new Carta(i + "", "♠", "Negro"));
	}

	for (int i = 1; i < 13; ++i)
	{
		Cartas.push_back(new Carta(i + "", "♣", "Negro"));
	}

	for (int i = 1; i < 13; ++i)
	{
		Cartas.push_back(new Carta(i + "", "♦", "Rojo"));
	}

	for (int i = 1; i < 13; ++i)
	{
		Cartas.push_back(new Carta(i + "", "♥", "Rojo"));
	}

}

Baraja::~Baraja()
{
}

string Baraja::toString()const
{
	stringstream ss;
	ss << Carta::toString();
	return ss.str();
}