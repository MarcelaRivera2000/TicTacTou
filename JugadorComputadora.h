#ifndef JUGADORCOMPUTADORA_H
#define JUGADORCOMPUTADORA_H
#include <string>
#include "Jugador.h"

using namespace std;

class JugadorComputadora : public Jugador {
	public: 
		JugadorComputadora();
		JugadorComputadora(string,int,char);
		string getNombre();
		void setNombre(string);
		int getPuntos();
		void setPuntos(int);
		char getMarca();
		void setMarca(char);
		int RealizarJugada();
		int ElegirCasilla();	

	protected:
		string nombre;
		char marca;
		int puntos;	
	
	
};


#endif
