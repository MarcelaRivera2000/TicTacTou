#include "Jugador.h"
#include <string>

using namespace std;

Jugador::Jugador(string n,int p,char m){
	nombre=n;
	marca=m;
	puntos=p;	
}

string Jugador::getNombre(){
	return nombre;
}

int Jugador::getPuntos(){
	return puntos;
}

char Jugador::getMarca(){
	return marca;
}

void Jugador::setMarca(char m){
	marca=m;
}

void Jugador::setNombre(string n){
	nombre=n;
}

void Jugador::setMarca(int p){
	puntos=p;
}

