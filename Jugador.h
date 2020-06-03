#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;


class Jugador{
	public: 
		Jugador(string,int,char);
		string getNombre();
		void setNombre(string);
		int getPuntos();
		void setPuntos(int);
		char getMarca();
		void setMarca(char);
		~Jugador();
	
	private:
		string nombre;
		char marca;
		int puntos;	
};









#endif
