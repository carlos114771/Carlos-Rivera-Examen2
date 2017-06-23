#include "Cartas.h"

Cartas::Cartas(string valor,string simbolo,string color){
	this->valor=valor;
	this->simbolo=simbolo;
	this->color=color;
}
Cartas::Cartas(){

}void Cartas::setValor(string valor){
   this-> valor=valor;
}
string Cartas::getValor(){
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





