#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"
//#include "JugadorHumano.h"

class Juego
{
	public:
<<<<<<< HEAD
		Juego();
		void IniciarPartida();
=======
		//Juego();
		
		void IniciarPartida(Tablero*, Jugador, Jugador);
>>>>>>> edc765a5c8080c7ee9be02da4f7936574e830033
		void ValidarGanador();
		void ElegirGanador();
		void MostrarPuntuaciones();
		void ImprimirJugadores();
<<<<<<< HEAD
		~Juego();
=======
		
		//~Juego();
>>>>>>> edc765a5c8080c7ee9be02da4f7936574e830033
	protected:
		Tablero* tablero;
		Jugador computadora;
<<<<<<< HEAD
		//JugadorHumano jugador;
=======
		Jugador jugador;
>>>>>>> edc765a5c8080c7ee9be02da4f7936574e830033
		
};

#endif
