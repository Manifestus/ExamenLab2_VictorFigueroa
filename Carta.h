#pragma once
#include <string>

using namespace std;

class Carta
{
	private:
		string Valor;
		string Simbolo;
		string Color;

	public:
		Carta();
		Carta(string, string, string);
		~Carta();
		virtual string toString()const;
};