#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H
#include <iostream>

using std::string
#include "Jugador.h"

class JugadorHumano : public Jugador
{
	public:
		JugadorHumano();
		JugadorHumano(string, int, char);
		
		string getNombre();
		void setNombre(string);
		int getPuntos();
		void setPuntos(int);
		char getMarca();
		void setMarca(char);
		
		~JugadorHumano();
	private:
		string nombre;
		char marca;
		int puntos;	
};

#endif
