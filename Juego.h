#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"
//#include "JugadorHumano.h"

class Juego{
	public:		
		//Juego();
		void IniciarPartida(Tablero*, Jugador, Jugador);
		void ValidarGanador();
		void ElegirGanador();
		void MostrarPuntuaciones();
		void ImprimirJugadores();
		~Juego();		
		//~Juego();
	protected:
		Tablero* tablero;
		Jugador computadora;
		Jugador jugador;		
};

#endif
