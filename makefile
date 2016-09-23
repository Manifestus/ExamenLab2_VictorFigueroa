temp: Main.o Persona.o Administrador.o Repartidor.o Jugador.o Baraja.o Carta.o Mesa.o
	g++ Main.o Persona.o Administrador.o Repartidor.o Jugador.o Baraja.o Carta.o Mesa.o -o temp

Main.o:	Main.cpp Persona.h Administrador.h Repartidor.h Baraja.h Carta.h Jugador.h Mesa.h
	g++ -c Main.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Administrador.o:	Administrador.cpp Persona.h Administrador.h
	g++ -c Administrador.cpp

Repartidor.o:	Repartidor.cpp Persona.h Repartidor.h Baraja.h Carta.h
	g++ -c Repartidor.cpp

Jugador.o:	Jugador.cpp Persona.h Jugador.h
	g++ -c Jugador.cpp

Baraja.o:	Baraja.cpp Carta.h Baraja.h
	g++ -c Baraja.cpp

Carta.o:	Carta.cpp Carta.h
	g++ -c Carta.cpp

Mesa.o:	Mesa.cpp Repartidor.h Jugador.h Mesa.h
	g++ -c Mesa.cpp