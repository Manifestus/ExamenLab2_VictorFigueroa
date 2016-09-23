#include <iostream>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Jugador.h"
#include "Baraja.h"
#include "Carta.h"
#include "Mesa.h"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<Persona*> Personas;

	Personas.push_back(new Administrador("Admin", 0, 1234, 0, "Gerente Tiempo Completo", 99999999));

	cout<< "Ingrese cuenta!"<< endl;

	

	return 0;
}