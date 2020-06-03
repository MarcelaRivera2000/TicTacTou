#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"
#include "JugadorHumano.h"

class Juego
{
	public:
		Juego();
		
		IniciarPartida();
		ValidarGanador();
		ElegirGanador();
		MostrarPuntuaciones();
		ImprimirJugadores();
		
		~Juego();
	protected:
		Tablero tablero;
		Jugador computadora;
		JugadorHumano jugador;
		
};

#endif
