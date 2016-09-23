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

	string nombre;
	int id;

	cout<< "Ingrese nombre!"<< endl;
	cin>> nombre;
	cout<< "Ingrese ID"<< endl;
	cin>> id;
	bool EntryN = false;
	bool EntryID = false;
	string type;
	int resp = 0;
	int lock = 0;

	while(resp == 0)
	{
		while(lock == 0)
		{
			for (int i = 0; i < Personas.size(); i++)
			{
				Persona* temp = (Personas[i]);
				if (dynamic_cast<Administrador*>(Personas[i])!=NULL)
				{
					if (Personas[i]->getNombre() == nombre)
					{
						EntryN = true;
					}

				if (Personas[i]->getID() == id)
				{
					EntryID = true;
				}

				type = "admin";
				}

				Persona* temp2 = (Personas[i]);
				if (dynamic_cast<Jugador*>(Personas[i])!=NULL)
				{
					if (Personas[i]->getNombre() == nombre)
					{
						EntryN = true;
					}

					if (Personas[i]->getID() == id)
					{
						EntryID = true;
					}

				type = "jugador";
				}
			}

			if (EntryN == true && EntryID == true)
			{
				cout<< "Usted a ingresado correctamente como "<< type<< endl;
				lock = 1;
			}
			else
			{
				cout<< "Login Incorrecto!" << endl;
			}
		}

		EntryN = false;
		EntryID = false;
		lock = 0;

		if (type == "admin")
		{
			string name;
			int edad;
			int identidad;

			cout<< "Ingrese opcion!" << endl << "1. Agregar Personas!" << endl << "2. Mesas"<< endl;
			int opcAdminMain = 0;

			cin>> opcAdminMain;

			if (opcAdminMain == 1)
			{
				int respPersonas = 0;
				while(respPersonas == 0)
				{
					cout<< "Ingrese tipo!" << endl << "1. Administrador" << endl<< "2. Repartidor" << endl << "3. Jugador";
					int opcAdminPersona = 0;

					cin>> opcAdminPersona;

					cout<< "Ingrese Nombre!"<< endl;
					cin>> nombre;

					cout<< "Ingrese edad!" << endl;
					cin>> edad;

					cout<< "Ingrese ID!";
					cin>> identidad;

					if (opcAdminPersona == 1)
					{
						cout<< "Ingrese la experiencia laboral!" < endl;
						int exp;
						cin>> exp;

						cout<< "Ingrese opcion!" << endl << "1. Dificil"<< endl<< "2. Intermedio" << endl << "3. Facil" << endl;
					}

					cout<< "Desea continuar creando personas!? 0/1"<< endl;
					cin>> respPersonas;
				}
				
				
			}
		}

		cout<< "Desea continuar!? 0/1"<< endl;
		cin>> resp;
	}

	return 0;
}