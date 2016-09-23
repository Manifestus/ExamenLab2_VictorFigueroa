#include "Carta.h"
#include <vector>
#include <string>
#include <sstream>

using namespace std;

Carta::Carta()
{
}

Carta::Carta(string Valor, string Simbolo, string Color): Valor(Valor), Simbolo(Simbolo), Color(Color)
{
}

Carta::~Carta()
{
}

string Carta::toString()const
{
	stringstream ss;
	ss << "Valor: " << Valor << ", Simbolo: " << Simbolo << ", Color: " << Color;
	return ss.str();
}