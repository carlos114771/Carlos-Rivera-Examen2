#include "Jugadores.h"

Jugadores::Jugadores(string lugar_precedencia,string apodo,double dinero,string nombre,int edad,string id):Persona(nombre,edad,id){
	this->lugar_precedencia=lugar_precedencia;
	this->apodo=apodo;
	this->dinero=dinero;
}
Jugadores::Jugadores(){

}void Jugadores::setLugar_precedencia(string lugar_precedencia){
   this-> lugar_precedencia=lugar_precedencia;
}
string Jugadores::getLugar_precedencia(){
   return lugar_precedencia;
}
void Jugadores::setApodo(string apodo){
   this-> apodo=apodo;
}
string Jugadores::getApodo(){
   return apodo;
}
void Jugadores::setDinero(double dinero){
   this-> dinero=dinero;
}
double Jugadores::getDinero(){
   return dinero;
}
