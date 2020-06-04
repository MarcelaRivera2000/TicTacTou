#include "JugadorHumano.h"
#include <string>
using namespace std;

JugadorHumano::JugadorHumano(){
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
