#pragma once
#include <string>

using namespace std;

class Persona
{
	public:
		string Nombre;
		int Edad;
		int Identidad;
	public:
		Persona();
		Persona(string, int, int);
		virtual ~Persona();
		virtual string toString()const;
};