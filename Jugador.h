#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;


class Jugador{
	public: 
		Jugador();
		string getNombre();
		void setNombre();
		int getPuntos();
		void setPuntos();
		char getMarca();
		void setMarca();
		~Jugador();
	
	private:
		string nombre;
		char marca;
		int puntos;	
};









#endif
