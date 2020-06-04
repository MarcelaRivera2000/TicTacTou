#include "JugadorHumano.h"

JugadorHumano::JugadorHumano()
{
}

string JugadorHumano::getNombre(){
	return nombre;
}

int JugadorHumano::getPuntos(){
	return puntos;
}

char JugadorHumano::getMarca(){
	return marca;
}

void JugadorHumano::setMarca(char m){
	marca=m;
}

void JugadorHumano::setNombre(string n){
	nombre=n;
}

void JugadorHumano::setPuntos(int p){
	puntos=p;
}

JugadorHumano::~JugadorHumano()
{
}
