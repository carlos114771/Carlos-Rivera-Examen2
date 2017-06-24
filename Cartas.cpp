#include "Cartas.h"
#include <stdlib.h>

Cartas::Cartas(int valor,string simbolo,string color){
	this->valor=valor;
	this->simbolo=simbolo;
	this->color=color;
}
Cartas::Cartas(){

}
void Cartas::setValor(int valor){
   this-> valor=valor;
}
int Cartas::getValor(){
   return valor;
}
void Cartas::setSimbolo(string simbolo){
   this-> simbolo=simbolo;
}
string Cartas::getSimbolo(){
   return simbolo;
}
void Cartas::setColor(string color){
   this-> color=color;
}
string Cartas::getColor(){
   return color;
}



