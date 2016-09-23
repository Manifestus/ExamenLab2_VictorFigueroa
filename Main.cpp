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
					int opcAdminPersona = 1;

					cin>> opcAdminPersona;

					cout<< "Ingrese Nombre!"<< endl;
					cin>> nombre;

					cout<< "Ingrese edad!" << endl;
					cin>> edad;

					cout<< "Ingrese ID!";
					cin>> identidad;

					string gerencia;
					string dificultad;
					string tipo;

					if (opcAdminPersona == 1)
					{
						cout<< "Ingrese la experiencia laboral!" << endl;
						int exp;
						cin>> exp;

						cout<< "Ingrese opcion!" << endl << "1. Gerente de Medio Tiempo"<< endl<< "2. Gerente de Medio Tiempo" << endl << "3. Gerente General" << endl;
						int opcGerencia = 1;
						cin>> opcGerencia;

						if (opcGerencia == 1)
						{
							gerencia = "Gerente de Tiempo Completo";
						}
						if (opcGerencia == 2)
						{
							gerencia = "Gerente de Medio Tiempo";
						}
						if (opcGerencia == 3)
						{
							gerencia = "Gerente General";
						}

						cout<< "Ingrese sueldo a pagar mensual!"<< endl;
						int sueldo = 0;
						cin>> sueldo;

						tipo = "Administrador";

						Personas.push_back(new Administrador(nombre, edad, identidad, exp, gerencia, sueldo));
						cout<< "Se a creado un " << tipo << "sucesivamente!" << endl; 
					}

					if (opcAdminPersona == 2)
					{
						cout<< "Ingrese opcion!" << endl << "1. Dificil"<< endl<< "2. Intermedio" << endl << "3. Facil" << endl;
						int opcDificultad = 1;
						cin>> opcDificultad;

						if (opcDificultad == 1)
						{
							dificultad = "Dificil";
						}
						if (opcDificultad == 2)
						{
							dificultad = "Intermedio";
						}
						if (opcDificultad == 3)
						{
							dificultad = "Facil";
						}

						cout<< "Ingrese la cantidad de dinero a defender!"<< endl;
						int Dinero = 0;
						cin>> Dinero;

						tipo = "Repartidor";
						Personas.push_back(new Repartidor(nombre, edad, identidad, dificultad, Dinero, Baraja()));
						cout<< "Se a creado un " << tipo << "sucesivamente!" << endl; 
					}

					if (opcAdminPersona == 3)
					{
						cout<< "Ingrese lugar de procedencia!" << endl;
						string Lugar;

						cout<< "Ingrese el apodo del jugador!" << endl;
						string Apodo;

						cout<< "Ingrese Monto de dinero depositado!"<< endl;
						int Dineros;

						tipo = "Jugador";

						Personas.push_back(new Jugador(nombre, edad, identidad, Lugar, Apodo, Dineros));
						cout<< "Se a creado un " << tipo << "sucesivamente!" << endl; 
					}

					cout<< "Desea continuar creando personas!? 0/1"<< endl;
					cin>> respPersonas;
				}
			}

			if (opcAdminMain == 2)
			{
				cout<< "Ingrese opcion!" << endl << "1. Agregar mesa!" << endl << "2. Modificar mesa!" << endl<< "3. Eliminar mesa!" << endl;
				int opcAdminMesa = 1;

				cin>> opcAdminMesa;

				if (opcAdminMesa == 1)
				{
					
				}
			}
		}

		cout<< "Desea continuar!? 0/1"<< endl;
		cin>> resp;
	}

	return 0;
}