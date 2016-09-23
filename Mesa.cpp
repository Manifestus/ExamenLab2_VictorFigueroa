#include "Mesa.h"
#include "Repartidor.h"
#include "Jugador.h"
#include "Persona.h"
#include <string>
#include <sstream>

using namespace std;

Mesa::Mesa()
{
}

Mesa::Mesa(int Numero, string Tipo, Persona* Dealer, Persona* Player): Numero(Numero), Tipo(Tipo), Dealer(Dealer), Player(Player)
{
}

Mesa::~Mesa()
{
}

string Mesa::toString()const
{
	stringstream ss;
	ss << "Numero: " << Numero << ", Tipo: " << Tipo ;
	return ss.str();
}