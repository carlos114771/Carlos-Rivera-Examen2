#include "Repartidor.h"

Repartidor::Repartidor(string dificultad,double dinero_casino,string nombre,int edad,string id):Persona(nombre,edad,id){
	this->dificultad=dificultad;
	this->dinero_casino=dinero_casino;
}
Repartidor::Repartidor(){

}void Repartidor::setDificultad(string dificultad){
   this-> dificultad=dificultad;
}
string Repartidor::getDificultad(){
   return dificultad;
}
void Repartidor::setDinero_casino(double dinero_casino){
   this-> dinero_casino=dinero_casino;
}
double Repartidor::getDinero_casino(){
   return dinero_casino;
}
void Repartidor::setBaraja(Baraja* baraja){
   this-> baraja=baraja;
}
Baraja* Repartidor::getBaraja(){
   return baraja;
}
