#include "JugadorComputadora.h"
#include <string>
#include<stdlib.h>

using namespace std;

JugadorComputadora::JugadorComputadora(){
	
}

JugadorComputadora::JugadorComputadora(string n,int p,char m){
	nombre=n;
	marca=m;
	puntos=p;	
}

string JugadorComputadora::getNombre(){
	return nombre;
}

int JugadorComputadora::getPuntos(){
	return puntos;
}

char JugadorComputadora::getMarca(){
	return marca;
}

void JugadorComputadora::setMarca(char m){
	marca=m;
}

void JugadorComputadora::setNombre(string n){
	nombre=n;
}

void JugadorComputadora::setPuntos(int p){
	puntos=p;
}

int JugadorComputadora::RealizarJugada(){
	
	
	return 1;
}

int JugadorComputadora::ElegirCasilla(){

	
	
	
	
	return 1;
}



